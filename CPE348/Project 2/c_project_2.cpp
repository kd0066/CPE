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
    bool status[5] = {false};
    int whatSlotNum[5] = {0, 0, 0, 0, 0};
    string stationValues[5] = {};
    int stationModValue[5] = {2, 2, 2, 2, 2};
    int stationAttempts[5] = {1, 1, 1, 1, 1};
    string stationName[5] = {"Station 0", "Station 1", "Station 2", "Station 3", "Station 4"};

    // Define variables
    int slotCount = 0;
    bool allSent = false;
    string line;

    if (inFile.is_open()) {
        while(allSent == false) {
          for (int k = 0; k < 5; k++) {
            if (status[k]) {
              allSent = true;
            }
            else {
              allSent = false;
              break;
            }
          }

            // Determine how many stations are in the time slot
            int numInSlot = 0;
            for (int i = 0; i < 5; i++) {
                if (whatSlotNum[i] == slotCount) {
                    numInSlot++;
                }
            }

            // Loop through all stations
            // If the station's slot is the same as the slot count then determine if it is successful or not
            for (int i = 0; i < 5; i++) {
                if (whatSlotNum[i] == slotCount) {
                    if (numInSlot != 1) {
                        // Input a value for that station since it still isnt successful
                        getline(inFile, line);
                        stationValues[i] = line;

                        // Perform mod calculations
                        int incrementSlot = 1 + (stoi(stationValues[i]) % stationModValue[i]);
                        whatSlotNum[i] += incrementSlot;
                        stationAttempts[i] += 1;
                        stationModValue[i] = pow(2, stationAttempts[i]);

                        cout << stationName[i] << " was moved to slot " << whatSlotNum[i] << endl;

                        for (int j = 0; j < 5; j++) {
                            if (whatSlotNum[j] == slotCount) {
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
                    else {
                        status[i] = true;
                        cout << stationName[i] << " successful at slot " << whatSlotNum[i] << endl;
                        whatSlotNum[i] = whatSlotNum[i] + 2;
                    }
                }
            }
            slotCount++;
        }
    }

    cout << "\nFinal Transmission Slots:" << endl;
    for (int i = 0; i < 5; i++) {
        int timeoutValue = whatSlotNum[i] * 51.2;
        cout << stationName[i] << " was successfully transmitted at slot " << whatSlotNum[i] << " with a timeout value of " << timeoutValue << "us\n";
    }
}
