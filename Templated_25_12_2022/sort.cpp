#include"sort.h"

template <typename T> void Sort(T arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		T min = arr[i];
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[j] - arr[i] < 0)
			{
				min = arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
		}
	}
}

template <typename T> void Sort(T arr[][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			T min = arr[i][j];
			for (int k = j + 1; k < COLS; k++)
			{
				if (arr[i][k] - arr[i][j] < 0)
				{
					min = arr[i][k];
					arr[i][k] = arr[i][j];
					arr[i][j] = min;
				}
			}
		}
	}
}