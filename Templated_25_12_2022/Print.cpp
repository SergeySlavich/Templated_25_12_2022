#include"Print.h"

template <typename T> void Print(T arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << '\t' << arr[i];
	}
	cout << endl;
}

template <typename T> void Print(T arr[][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << '\t' << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}