#include <iostream>

using namespace std;


void main() {

	srand((unsigned) time(NULL));
	//const int SIZE = 6;
	//int size = 0;

	//int arr[SIZE] = {3, 4, 7, 1, 0, 11};

	//cout << "Arr = " << arr[0] << endl;
	//cout << "Arr = " << arr[1] << endl;
	//cout << "Arr = " << arr[2] << endl;
	//cout << "Arr = " << arr[3] << endl;
	//cout << "Arr = " << arr[4] << endl;
	//cout << "Arr = " << arr[5] << endl;

	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << "Before [" << i << "] = " << arr[i] << endl;
	//	if (arr[i] == 4) {
	//		arr[i] = 0;
	//	}
	//	cout << "After [" << i << "] = " << arr[i] << endl;
	//	
	//}


	const int SIZE = 7;

	int arr[7];

	int plusCouner = 0, minusCounter = 0;

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = -12 + rand() % 50;
	}

	cout << "=============== Print array================" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Arr [" << i << "] = " << arr[i] << endl;
		if (arr[i] > 0) {
			plusCouner++;
		}
		else if (arr[i] < 0) {
			minusCounter++;
		}
	}

	cout << "More then 0 = " << plusCouner << endl;
	cout << "Less then 0 = " << minusCounter << endl;
}