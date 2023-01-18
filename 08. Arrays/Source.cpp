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


	//const int SIZE = 7;

	//int arr[7];

	//int plusCouner = 0, minusCounter = 0;

	//for (int i = 0; i < SIZE; i++)
	//{
	//	arr[i] = -12 + rand() % 50;
	//}

	//cout << "=============== Print array================" << endl;



	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << "Arr [" << i << "] = " << arr[i] << endl;
	//	/*if (arr[i] > 0) {
	//		plusCouner++;
	//	}
	//	else if (arr[i] < 0) {
	//		minusCounter++;
	//	}*/
	//}

	//int max = -13;
	//int min = 100;
	//int maxIndex = 0;

	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (max < arr[i]) {
	//		max = arr[i];
	//		maxIndex = i;
	//	}
	//}


	//cout << "=============================" << endl;
	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << "Arr [" << i << "] = " << arr[i] << endl;
	//	/*if (arr[i] > 0) {
	//		plusCouner++;
	//	}
	//	else if (arr[i] < 0) {
	//		minusCounter++;
	//	}*/
	//}

	//cout << "maxIndex = " << maxIndex << endl;
	//cout << "More then 0 = " << plusCouner << endl;
	//cout << "Less then 0 = " << minusCounter << endl;

	const int SIZE = 10;
	int arr[SIZE];
	int minValue = 100, minIndex = 0, maxValue = -100, maxIndex = 0, tmp = 0;;

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = -100 + rand() % 200;
	}

	cout << "======================Print=================" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr [" << i << "] = " << arr[i] << endl;
		if (maxValue < arr[i]) {
			maxValue = arr[i];
			maxIndex = i;
		}
		if (minValue > arr[i]) {
			minValue = arr[i];
			minIndex = i;
		}
	}

	cout << "==========================" << endl;
	cout << "Max value = " << maxValue << " index = " << maxIndex << endl;;
	cout << "Min value = " << minValue << " index = " << minIndex << endl;;


	tmp = minValue;
	arr[minIndex] = maxValue;
	arr[maxIndex] = tmp;

	
	cout << "===========After changing values============" << endl;
	for (int i = 0; i < SIZE; i++)
	{	
		cout << "arr [" << i << "] = " << arr[i] << endl;
	
	}
}