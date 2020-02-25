/**********************Kevin Donovan***********************
*******CPE 348 Simulated exponential backoff protocol******
***********************************************************/

#include <iostream>  // inputs and outputs
using namespace std;
#include <iomanip>
#include <cmath>
#include <fstream>

static int i = 0;

int main()
{

	long int timeout;
	int mod[6] = {2};
	int slot[6] = {0};
	bool checkMe[6] = {false};
	int wait = 0;
	int check = 0;
	int count = 0;

	ifstream inFile;
	string file_name;
	inFile.open("Project2_part1_rn.txt");

	while (i != 6) {
		if (count > 5) {
			for (int j = 0; j < 6; j++) {
				cout << j << endl;
				for (int s = 0; s < 6; s++) {
					if (j != s) {
						if (slot[j] == slot[s]) {
							checkMe[j] = false;
							j++;
						}
						else {
							checkMe[j] = true;
						}
					}
					j++;
				}
			}
			count = 0;
			check++;
			cout << endl;
		}

		if (slot[count] == check) {
			inFile >> timeout;
			wait = timeout % mod[count];

			slot[count] = wait + slot[count] + 1;
			cout << "Signal " << count << " is moved to slot " << slot[count] << " with a timeout value of " << timeout << " " << checkMe[count] << endl;
			mod[count] = mod[count] * 2;
			count++;
			i++;
			if(checkMe[count]) {
				slot[count] = 0;
				i++;
				cout << i << endl;

			}
		}


		else {
			count++;
		}



	}


	// inFile.close();
	// return 0;
}
