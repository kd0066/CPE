// CPE-348 Networks Project #2
// By: Kevin Donovan

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    // Define opening the random numbers file
    string fileName = "Project2_part1_rn.txt";
    ifstream inFile(fileName);

    // Declare arrays for stations
    bool status[6] = {false};
    int whatSlotNum[6] = {0, 0, 0, 0, 0, 0};
    string stationValues[6] = {};
    int stationModValue[6] = {2, 2, 2, 2, 2, 2};
    int stationAttempts[6] = {1, 1, 1, 1, 1, 1};
    string stationName[6] = {"Station 0", "Station 1", "Station 2", "Station 3", "Station 4", "Station 5"};

    // Define variables
    int slotCount = 0;
    bool allSent = false;
    string line;

    if (inFile.is_open())
    {
        while(allSent == false)
        {
            // If all slots are successful then stop looping
            int sentCount = 0;
            for (int i = 0; i < 6; i++)
            {
                if (status[i] == true)
                {
                    sentCount++;
                }
            }

            // If the number of stations sent successfully is 6 then break out of loop
            if (sentCount == 6)
            {
                allSent = true;
            }

            // Determine how many stations are in the time slot
            int numInSlot = 0;
            for (int i = 0; i < 6; i++)
            {
                if (whatSlotNum[i] == slotCount)
                {
                    numInSlot++;
                }
            }

            // Loop through all stations
            // If the station's slot is the same as the slot count then determine if it is successful or not
            for (int i = 0; i < 6; i++)
            {
                if (whatSlotNum[i] == slotCount)
                {
                    if (status[i] != true)
                    {
                        if (numInSlot != 1)
                        {
                            // Input a value for that station since it still isnt successful
                            getline(inFile, line);
                            stationValues[i] = line;

                            // Perform mod calculations
                            int incrementSlot = 1 + (stoi(stationValues[i]) % stationModValue[i]);
                            whatSlotNum[i] += incrementSlot;
                            stationAttempts[i] += 1;
                            stationModValue[i] = pow(2, stationAttempts[i]);

                            cout << stationName[i] << " was moved to slot " << whatSlotNum[i] << endl;

                            for (int j = 0; j < 6; j++)
                            {
                                if (whatSlotNum[j] == slotCount)
                                {
                                    // Input a value for that station since it still isnt successful
                                    getline(inFile, line);
                                    stationValues[j] = line;

                                    // Perform mod calculations
                                    int incrementSlot = 1 + (stoi(stationValues[j]) % stationModValue[j]);
                                    whatSlotNum[j] += incrementSlot;
                                    stationAttempts[j] += 1;
                                    stationModValue[j] = pow(2, stationAttempts[j]);

                                    cout << stationName[j] << " was moved to slot " << whatSlotNum[j] << endl;
                                }
                            }
                        }
                        else
                        {
                            status[i] = true;
                            cout << stationName[i] << " successful at slot " << whatSlotNum[i] << endl;
                        }

                    }
                    else
                    {
                        continue;
                    }

                }
                else
                {
                    continue;
                }

            }

            slotCount++;

        }
    }

    cout << "\nFinal Transmission Slots:" << endl;
    for (int i = 0; i < 6; i++)
    {
        int timeoutValue = whatSlotNum[i] * 51.2;
        cout << stationName[i] << " was successfully transmitted at slot " << whatSlotNum[i] << " with a timeout value of " << timeoutValue << "us\n";
    }

    return 0;
}
