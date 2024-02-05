// Arrays

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	//arr[2] = 2048;
	//cout << arr[2] << endl;
	// Size - 1
	// n - 1

	cout << "Hello Arrays" << endl;
	const int SIZE = 5;
	int arr[SIZE] = {3, 5, 8};

	cout << int() << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	return 0;
}