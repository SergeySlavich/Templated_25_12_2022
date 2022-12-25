#include"Fill_rand.h"

void Fill_rand(int arr[], const int SIZE, int minRand, int maxRand)
{
	if (minRand == maxRand) maxRand++;
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void Fill_rand(double arr[], const int SIZE, double min_rand, double max_rand)
{
	if ((max_rand - min_rand) == 0) max_rand++;
	if ((min_rand - max_rand) > 0)
	{
		int buffer = min_rand;
		min_rand = max_rand;
		max_rand = buffer;
	}
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand();
		while (arr[i] >= max_rand) arr[i] /= 10;
	}
}

void Fill_rand(float arr[], const int SIZE, float min_rand, float max_rand)
{
	if ((max_rand - min_rand) == 0) max_rand++;
	if ((min_rand - max_rand) > 0)
	{
		int buffer = min_rand;
		min_rand = max_rand;
		max_rand = buffer;
	}
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand();
		while (arr[i] >= max_rand) arr[i] /= 10;
	}
}

void Fill_rand(char arr[], const int SIZE, char min_rand, char max_rand)
{
	if ((max_rand - min_rand) == 0) max_rand++;
	if ((min_rand - max_rand) > 0)
	{
		int buffer = min_rand;
		min_rand = max_rand;
		max_rand = buffer;
	}
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % (int)(max_rand - min_rand) + min_rand;
	}
}

void Fill_rand(int arr[][COLS], const int ROWS, const int COLS, int min_rand, int max_rand)
{
	if (min_rand == max_rand) max_rand++;
	if (min_rand > max_rand)
	{
		int buffer = min_rand;
		min_rand = max_rand;
		max_rand = buffer;
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (max_rand - min_rand) + min_rand;
		}
	}
}

void Fill_rand(double arr[][COLS], const int ROWS, const int COLS, double min_rand, double max_rand)
{
	if ((max_rand - min_rand) == 0) max_rand++;
	if ((min_rand - max_rand) > 0)
	{
		int buffer = min_rand;
		min_rand = max_rand;
		max_rand = buffer;
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
			while (arr[i][j] - max_rand >= 0) arr[i][j] /= 10;
		}
	}
}

void Fill_rand(float arr[][COLS], const int ROWS, const int COLS, float min_rand, float max_rand)
{
	if ((max_rand - min_rand) == 0) max_rand++;
	if ((min_rand - max_rand) > 0)
	{
		int buffer = min_rand;
		min_rand = max_rand;
		max_rand = buffer;
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
			while (arr[i][j] - max_rand >= 0) arr[i][j] /= 10;
		}
	}
}

void Fill_rand(char arr[][COLS], const int ROWS, const int COLS, char min_rand, char max_rand)
{
	if ((max_rand - min_rand) == 0) max_rand++;
	if ((min_rand - max_rand) > 0)
	{
		int buffer = min_rand;
		min_rand = max_rand;
		max_rand = buffer;
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (int)(max_rand - min_rand) + min_rand;
		}
	}
}