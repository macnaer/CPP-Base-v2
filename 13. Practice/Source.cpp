#include <iostream>

using namespace std;

// Prototypes
void FillArray(int arr[], const int SIZE);
void FillArray(float arr[], const int SIZE);
void FillArray(int arr[], const int SIZE, int start, int end);
void FillArray(float arr[], const int SIZE, int start, int end);
void PrintArray(float arr[], const int SIZE);
void PrintArray(int arr[], const int SIZE);

void main() {
	srand((unsigned)time(NULL));

	const int SIZE = 10;
	float arr[SIZE];

	FillArray(arr, SIZE);
	PrintArray(arr, SIZE);
}



/// <summary>
///  Input integer array and size
/// </summary>
/// <param name="arr"></param>
/// <param name="SIZE"></param>
void FillArray(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}
}

/// <summary>
///  Input float array and size
/// </summary>
/// <param name="arr"></param>
/// <param name="SIZE"></param>
void FillArray(float arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}
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
void FillArray(float arr[], const int SIZE, int start, int end) {
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = start + rand() % end;
	}
}

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