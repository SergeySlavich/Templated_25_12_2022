#include"statistics.h"

template <typename T> T Sum(T arr[], const int SIZE)
{
	T sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template <typename T> T Sum(T arr[][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template <typename T> double Avg(T arr[], const int SIZE)
{
	return (double)Sum(arr, SIZE) / SIZE;
}

template <typename T> double Avg(T arr[][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template <typename T> T min_value_in(T arr[], const int SIZE)
{
	T min = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] - min < 0) min = arr[i];
	}
	return min;
}

template <typename T> T min_value_in(T arr[][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] - min < 0) min = arr[i][j];
		}
	}
	return min;
}

template <typename T> T max_value_in(T arr[], const int SIZE)
{
	T max = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] - max > 0) max = arr[i];
	}
	return max;
}

template <typename T> T max_value_in(T arr[][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] - max > 0) max = arr[i][j];
		}
	}
	return max;
}