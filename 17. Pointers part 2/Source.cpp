#include <iostream>

using namespace std;
//
//void Counter(int &a) {
//	a++;
//}

void Fill(int arr[], const int size);
void Print(int arr[], const int size);
void Push_Back(int*& arr, int &size, int value);

void main() {
	srand((unsigned)time(NULL));
	//int a = 0;
	//Counter(a);
	//cout << "a = " << a << endl;

	//int *a = new int;
	//cout << "Enter value: " << endl;
	//cin >> *a;
	////*a = 10;
	//cout << "Address " << a  << "\nValue " << *a  << endl;
	//delete a;

	int size = 0;
	int value = 0;

	cout << "Enter arr size: ";
	cin >> size;

	int* arr = new int[size];


	Fill(arr, size);
	Print(arr, size);

	cout << "=========Before============" << endl;
	cout << "Enter value: " << endl;
	cin >> value;
	Push_Back(arr, size, value);
	cout << "=========After============" << endl;
	Print(arr, size);

	delete [] arr;
}


void Push_Back(int *&arr, int &size, int value) {
	int* tmpArr = new int[size + 1];
	for (int i = 0; i < size; i++) {
		tmpArr[i] = arr[i];
	}

	tmpArr[size] = value;

	delete[] arr;
	arr = tmpArr;
	size++;
}

void Fill(int arr[], const int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int size) {
	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

