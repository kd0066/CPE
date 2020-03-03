prompt=input('Enter the desired .wav file... ', 's');
% // filename=input(prompt, 's');
[data,FS] = audioread(prompt);

start = 10 * FS;
maxDataVal = max(data);
if (maxDataVal(1) > maxDataVal(2))
    amplitude = maxDataVal(1);
else
    amplitude = maxDataVal(2);
end

for i = start:length(data)
    data(i, 1) = amplitude * .1 * sin(2*pi*2500*(i - start)/FS);
    data(i, 2) = amplitude * .1 * sin(2*pi*2500*(i - start)/FS);
end

audiowrite("donovan_k_mod_MATLAB.wav", data, FS);
