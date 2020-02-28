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

	ifstream inFile;
	string file_name;
	inFile.open("Project2_part1_rn.txt");

	while (f < 6) {
		if (slot[count] == check) {
			inFile >> timeout;
			wait = timeout % mod[count];
			slot[count] = wait + slot[count] + 1;
			cout << "Signal " << count << " is moved to slot " << slot[count] << " with a timeout value of " << timeout << " " << endl;
			mod[count] = mod[count] * 2;
			count++;

		}
		else if (slot[count] == check) {
			inFile >> timeout;
			wait = timeout % mod[count];
			slot[count] = wait + slot[count] + 1;
			cout << "Signal " << count << " is moved to slot " << slot[count] << " with a timeout value of " << timeout << " " << endl;
			mod[count] = mod[count] * 2;
			count++;

		}
		else {
			count++;
		}

		if (count > 5) {
			for (int j = 0; j < 6; j++) {
				for (int s = 0; s < 6; s++) {
					if (j != s) {
						if (slot[j] == slot[s]) {
							i = 0;
							break;
						}
						else {
							i++;
							if (i == 5) {
								cout << j << endl;
								i = 0;
								f++;
							}
							continue;
						}
					}
				}
			}

			count = 0;
			check++;
			cout << endl;
		}
	}
	i = 0;
	return 0;
}
