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


void CopyTo(int sourceArr[], int destinationArr[], const int SIZE) {

	for (int i = 0; i < SIZE; i++)
	{
		destinationArr[i] = sourceArr[i];
	}
}

void ExtendArray(int arrA[], int arrB[], int arrC[], const int SIZE) 
{
	int iterator = 0;
	for (int i = 0; i < (SIZE * 2); i++)
	{
		if (i < SIZE) {
			arrC[i] = arrA[i];
		}
		else {
			arrC[i] = arrB[iterator];
			iterator++;
		}
	}
}

void main() {

	srand((unsigned)time(NULL));

	const int SIZE = 5;
	int arrA[SIZE];
	int arrB[SIZE];
	int arrC[SIZE * 2];

	Fill(arrA, SIZE);
	Fill(arrB, SIZE);
	ExtendArray(arrA, arrB, arrC, SIZE);
	Print(arrC, SIZE * 2);
	/*CopyTo(arrA, arrB, SIZE);*/
	/*Print(arrB, SIZE);*/
}