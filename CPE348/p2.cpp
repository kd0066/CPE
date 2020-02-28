#include <iostream>  // inputs and outputs
using namespace std;
#include <iomanip>
#include <cmath>
#include <fstream>

static int i = 0;

int main()
{

	long int timeout;
	int mod[6] = {2, 2, 2, 2, 2, 2};
	int slot[6] = {0, 0, 0, 0, 0, 0};
	int wait = 0;
	int check = 0;
	int count = 0;
	int f = 0;
	int i = 0;
  int slotCount = 0;

	ifstream inFile;
	string file_name;
	inFile.open("Project2_part1_rn.txt");

	while (f < 6) {
    if (slot[count] == check) {
        if (f != 5) {
          if (slotCount != 1) {
            inFile >> timeout;
            wait = timeout % mod[count];
            slot[count] = wait + slot[count] + 1;
            mod[count] = mod[count] * 2;
            cout << "Signal " << count << " is moved to slot " << slot[count] << endl;
            if (slot[count] == check) {
              inFile >> timeout;
              wait = timeout % mod[count];
              slot[count] = wait + slot[count] + 1;\
              cout << "Signal " << count << " is moved to slot " << slot[count] << endl;

            }
          }
          else {
            f++;
          }
        }
          else {
            continue;
          }
        }
          else {
            count++;
            continue;
          }
        }
        if (count > 5) {
          count = 0;
        }
    for (int j = 0; j < 6; j++) {
      if (slot[j] == check) {
        slotCount++;
      }
    }
      count++;
      check++;
  }
