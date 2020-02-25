#include <iostream>  // inputs and outputs
using namespace std;
#include <iomanip>
#include <cmath>
#include <fstream>

int main()
{

	long int timeout;
	int mod[6] = {2, 2, 2, 2, 2, 2};
	int slot[6] = {0, 0, 0, 0, 0, 0};
	int wait = 0;
	int check = 0;
	int count = 0;
	bool checkMe[6] = {false};
	int i = 0;

	ifstream inFile;
	string file_name;
	inFile.open("Project2_part1_rn.txt");

	while (i != 6) {
		if (slot[count] == check) {
			inFile >> timeout;
			wait = timeout % mod[count];
			for (int j = 0; j < 6; j++) {
				for (int s = 0; s < 6; s++) {
					if (j != s) {
						if (slot[j] == slot[s]) {
							checkMe[s] = false;
							break;
						}
						else {
							checkMe[s] = true;
						}
					}
				}
			}

			slot[count] = wait + slot[count] + 1;
			cout << "Signal " << count << " is moved to slot " << slot[count] << " with a timeout value of " << timeout << endl;
			mod[count] = mod[count] * 2;
			count++;
		}

		else {
			count++;
		}
    if(checkMe[count]) {
      checkMe[count] = NULL;
      slot[count] = 0;
      i++;

    }

		if (count > 5) {
			count = 0;
			check++;
			cout << endl;
		}
	}
	inFile.close();
	return 0;
}
