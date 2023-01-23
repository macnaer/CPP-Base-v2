#include <iostream>

using namespace std;

void main() {

	srand((unsigned) time(NULL));
	//int a = 10;
	//cout << "Value = " << a << " Size =  " << sizeof(a) << " Address = " << &a << endl;

	/*const int SIZE = 5;
	int arr[SIZE] = {4,1,9,5,0};

	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr [" << i << "] = " << arr[i] << " size " << sizeof(arr[i]) << " Address " << (arr + i) << endl;
	}

	cout << "arr total size = " << sizeof(arr) << endl;*/

	const int SIZE = 100;
	int arr[SIZE];


	cout << "===============Before=============== " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = 0 + rand() % 100;
		cout << arr[i] << endl;
	}

	int temp = 0;
	int counter = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[j] < arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			counter++;
		}
	}

	cout << "===============After=============== " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	cout << "Count of iteration = " << counter << endl;

}
