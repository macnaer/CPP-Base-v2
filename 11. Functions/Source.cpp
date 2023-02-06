#include <iostream>

using namespace std;

void Fill(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}
}


void Print(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

void main() {

	srand((unsigned)time(NULL));

	const int SIZE = 10;
	int arr[SIZE];

	Fill(arr, SIZE);
	Print(arr, SIZE);
}