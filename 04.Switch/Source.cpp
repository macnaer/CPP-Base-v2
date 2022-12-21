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
}