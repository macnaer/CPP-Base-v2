#include <iostream>

using namespace std;

void main() {

	/*int row = 10;
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
	}*/

	/*int row = 5;
	int col = 1;*/

	/*for (int i = 1; i < row; i++)
	{
		for (int j = 10; j > col; j--)
		{
			cout << "i => " << i << " ";
			cout << "j => " << j << endl;
			 
		}
		cout << endl;
	}*/

	int rows, i, j, space;

	cout << "Enter number of rows: ";
	cin >> rows;

	for (i = 1; i <= rows; i++)
	{
		for (space = i; space < rows; space++)
		{
			cout << " ";
		}
		for (j = 1; j <= (2 * i - 1); j++)
		{
			cout << "*";
		}

		cout << endl;;
	}
}