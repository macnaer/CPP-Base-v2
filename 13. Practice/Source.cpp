#include <iostream>

using namespace std;

// Prototypes
void FillArray(int arr[], const int SIZE, int start = 1, int end = 100);
//void FillArray(float arr[], const int SIZE, int start, int end);
void PrintArray(float arr[], const int SIZE);
void PrintArray(int arr[], const int SIZE);

void main() {
	srand((unsigned)time(NULL));

	const int SIZE = 10;
	int arr[SIZE];

	FillArray(arr, SIZE, 200, 800);
	PrintArray(arr, SIZE);
}

/// <summary>
///  Input integer array, size and start and end range for randomising.
/// </summary>
/// <param name="arr"></param>
/// <param name="SIZE"></param>
void FillArray(int arr[], const int SIZE, int start, int end) {
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = start + rand() % end;
	}
}

/// <summary>
///  Input float array, size and start and end range for randomising.
/// </summary>
/// <param name="arr"></param>
/// <param name="SIZE"></param>
//void FillArray(float arr[], const int SIZE, int start, int end) {
//	for (int i = 0; i < SIZE; i++)
//	{
//		arr[i] = start + rand() % end;
//	}
//}

/// <summary>
///  Print integer array.
/// </summary>
/// <param name="arr"></param>
/// <param name="SIZE"></param>

void PrintArray(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
}


/// <summary>
///  Print float array.
/// </summary>
/// <param name="arr"></param>
/// <param name="SIZE"></param>



void PrintArray(float arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
}
