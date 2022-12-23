#include <iostream>

using namespace std;

void main() {

	//int iterator = 10;

	//while (iterator != 0) {
	//	cout << "While.... " << iterator << endl;
	//	/*iterator++;*/
	//	iterator--;
	//}

	/*int iterator = 10;

	do {
		cout << "do while ..." << iterator << endl;
		iterator--;
	} while (iterator != 0);*/

	/*int value = 0, sum = 0, iterator = 1;

	while (iterator <= 10)
	{
		cout << "Enter number: " << iterator << ": ";
		cin >> value;
		sum += value;
		iterator++;
	}*/
	

	//cout << "Sum = " << sum << endl;
	//cout << "AVG = " << sum / (--iterator) << endl;

	/*bool exit = false;
	int choise = 0;

	while (!exit) {
		cout << "1. Create user\n2. Print users\n0. Exit" << endl;
		cin >> choise;
		if (choise == 1) {
			cout << "Create new user" << endl;
		}
		else if (choise == 2) {
			cout << "Print users" << endl;
		}
		else if (choise == 0) {
			cout << "Bye!" << endl;
			exit = true;
		}
		else
		{
			cout << "Error. Wring choise." << endl;
		}
	}*/

	int temp = 0;
	int dayCounter = 0;
	int iterator = 1;

	while (iterator <= 7)
	{
		cout << "Enter temp... day " << iterator << endl;
		cin >> temp;
		if (temp > 10) {
			dayCounter++;
		}
		iterator++;
	}
	
	cout << "Day when temperature more then 10*: " << dayCounter << endl;
}