#include "Shift.h"

template <typename T> void shift_left(T arr[], const int SIZE, int shift)
{

	for (int j = 0; j < shift; j++)
	{
		T temp = arr[0];
		for (int i = 1; i < SIZE; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[SIZE - 1] = temp;
	}
}

template <typename T> void shift_left(T arr[][COLS], const int ROWS, const int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < shift; j++)
		{
			T temp = arr[i][0];
			for (int k = 1; k < COLS; k++)
			{
				arr[i][k - 1] = arr[i][k];
			}
			arr[i][COLS - 1] = temp;
		}
	}
}

template <typename T> void shift_right(T arr[], const int SIZE, int shift)
{
	for (int j = 0; j < shift; j++)
	{
		T temp = arr[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}

template <typename T> void shift_right(T arr[][COLS], const int ROWS, const int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < shift; j++)
		{
			T temp = arr[i][COLS - 1];
			for (int k = COLS - 1; k > 0; k--)
			{
				arr[i][k] = arr[i][k - 1];
			}
			arr[i][0] = temp;
		}
	}
}