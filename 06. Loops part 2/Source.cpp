#include <iostream>
#include <time.h>

using namespace std;

void main() {

	/*int number = 0;

	cout << "Enter number ";
	cin >> number;


	for (int i = 0; i <= number; i++) {
		cout << "i = " << i << endl;
	}*/


	srand((unsigned)time(NULL));

	//// Get a random number
	//int random = rand() % 100;

	int random = 100 + (rand() % 100);

	//// Print the random number
	cout << random << endl;

}