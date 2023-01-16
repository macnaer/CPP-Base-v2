#include <iostream>

using namespace std;

void main() {

	int row = 10;
	int col = 10;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++) {
			if (i % 2 == 0) {
				cout << "* ";
			}
			else {
				cout << "# ";
			}

		}
		cout << endl;
	}
}