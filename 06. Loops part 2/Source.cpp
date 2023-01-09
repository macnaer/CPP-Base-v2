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

	//int random = 100 + (rand() % 100);

	//// Print the random number
	//cout << random << endl;

	//Користувач з клавіатури вводить числа.Порахувати їхню суму і вивести на екран, щойно користувач
	//	введе нуль.

	int sum = 0;
	int number = 0;

	for (int i = 0; i < 1;) {
		cout << "Enter number: ";
		cin >> number;
		sum += number;
		if (number == 0) {
			i++;
		}
	}

	cout << "Sum = " << sum << endl;
}