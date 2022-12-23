#include <iostream>

using namespace std;

void main() {

	short seasson = 0;
	cout << "Enter seasson: " << endl;
	cin >> seasson;

	switch (seasson)
	{
		case 1: cout << "Winter" << endl; break;
		case 2: cout << "Spring" << endl; break;
		case 3: cout << "Summer" << endl; break;
		case 4: cout << "Autumn" << endl; break;
		//case 'y':  cout << "You press y" << endl; break;
		default:
			cout << "Wring choise. Enter 1-4 for seassons" << endl;
			break;
	}


	/*const int HOURS = 10;
	cout << "Hours " << HOURS << endl;*/

	//bool exit = false;
	//int choise = 0;
	//cout << "1.Add book...... 0. Exit" << endl;
	//cin >> choise;
	/*if (choise == 0) {
		exit = true;
	}*/

	/*choise == 0 ? cout << "Exit = true" : cout << "Exit = false" << endl;*/

	/*char value = 'a';
	cout << "Value = " << value << " Code = " << int(value) << endl;

	int number = 42;
	cout << "Number = " << number << " Code = " << char(number) << endl;*/

	// https://en.cppreference.com/w/cpp/language/ascii



}