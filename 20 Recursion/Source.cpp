#include <iostream>

using namespace std;

int Recurs(int counter);

void main() {
	int count = 0;
	cout << "Number of itteration: ";
	cin >> count;

	Recurs(count);
	
}


int Recurs(int counter) {
	//counter--;

	if (counter == 0) {
		return 0;
	}

	cout << "Counter = " << counter << endl;

	Recurs(counter);
}