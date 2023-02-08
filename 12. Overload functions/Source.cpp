#include <iostream>

using namespace std;

// Prototype
//int Plus(int a, int b);
//int Plus(int a, int b, int c);
//float Plus(float a, float b);
const int ROW = 6;
const int COL = 7;

void FillArray(int arr[ROW][COL]);
void PrintArray(int arr[ROW][COL]);
void Print(int arr[], const int SIZE);
void FillArray(int arr[ROW][COL], int start, int end);
//void PrintArray(int** arr, const int ROW, const int COL);

void main()
{
	srand((unsigned) time(NULL));
	
	int arr[ROW][COL];

	FillArray(arr, -50, 100);
	PrintArray(arr);

	const int SIZE = 10;
	int arrA[SIZE];
	Print(arrA, SIZE);

	

	/*int a = 4, b = 6, c = 7;
	float d = 4.4, e = 6.1;
	cout << Plus(a, b) << endl;
	cout << Plus(a, b, c) << endl;
	cout << Plus(d, e) << endl;*/
}


void Print(int arr[], const int SIZE) {
	cout << arr << " works " << SIZE << endl;
}

void FillArray(int arr[ROW][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			arr[i][j] = rand() % 100;
		}
	}
}

void FillArray(int arr[ROW][COL], int start, int count) {
	if (start <= 0) {
		for (int i = 0; i < ROW; i++) {
			for (int j = 0; j < COL; j++) {
				arr[i][j] = start + rand() % count;
			}
		}
	}
	else {
		for (int i = 0; i < ROW; i++) {
			for (int j = 0; j < COL; j++) {
				arr[i][j] = -start + rand() % count;
			}
		}
	}
}

void PrintArray(int arr[ROW][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			/*cout << "arr[" << i << "][" << j << "] = " << arr[i][j];*/
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

//int Plus(int a, int b, int c) {
//	return a + b + c;
//}
//
//int Plus(int a, int b) {
//	return a + b;
//}
//
//float Plus(float a, float b) {
//	return a + b;
//}