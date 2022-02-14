#include<iostream>
#include<algorithm>
using namespace std;

//prototype
void print(char* array, int diskCount);

int main()
{
	int n, m;// n is a positive integer and represents the number of single colored disks, 
             // m is the number of swaps required
    char continueTheLogic = 'N'; // Ask user whether to continue with one more example
	char diskRepresentation[20]; //Store the representation of disks intially and also while swapping

        // read the input
		cout << "Enter the number of the single color disks (dark or light): ";
		cin >> n; // read the input, the number of single colored disks.
		cout << endl;
		cout << "Initial Reperesentation of disks\n";

		//intialization the alternating values starting with light and then a dark disk
        // 'l' - light disks, 'd' - dark disks
		for (int iterator = 0; iterator < n; iterator++) {
			diskRepresentation[2 * iterator] = 'l';
			diskRepresentation[2 * iterator + 1] = 'd';
		}

		//print the initial representation of the disk for user clarity
		for (int iterator = 0; iterator < 2 * n; iterator++)
			cout << diskRepresentation[iterator] << " ";
		cout << endl;

		m = 0; //reset m before entering in the loop so that no garbage value stores

		//sorting ----Right to left algorithm
		for (int iterator = 0; iterator < n; iterator++) {
			for (int j = 0; j < 2 * n; j++) {
				if (diskRepresentation[j] == 'l' && diskRepresentation[j+1] == 'd'){
					swap(diskRepresentation[j], diskRepresentation[j+1]);
		            m++;
                }
			}
		}
        
		//sorting again - repeatative step
		for (int iterator = 0; iterator < n; iterator++) {
			for (int j = 0; j < 2 * n; j++) {
				if (diskRepresentation[j] == 'l' && diskRepresentation[j + 1] == 'd') {
					swap(diskRepresentation[j], diskRepresentation[j + 1]);
					m++;
				}
			}
			for (int iterator = n - 1; iterator >= 0; iterator--) {
				if (diskRepresentation[iterator] == 'd' && diskRepresentation[iterator - 1] == 'l') {
					swap(diskRepresentation[iterator], diskRepresentation[iterator - 1]);
					m++;
				}
			}
		}

        //print the final arragemet of disk after sorting
		cout << "After moving darker ones to the right\nList of disks\n";
		print(diskRepresentation, 2 * n);
        //print the Number of swaps required
		cout << endl << "Number of Swaps required are " << m << endl;
		return 0;
}

// print the array elements
void print(char* diskArray, int disksCount) {
	for (int i = 0; i < disksCount; i++)
		cout << diskArray[i] << " ";
}
