#include"search.h"

template <typename T> void Search(T arr[], const int SIZE)
{
	bool printing = false;
	for (int i = 0; i < SIZE; i++)
	{
		int count = 0;
		bool counting = true;
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[i] - arr[j] == 0) count++;
			for (int l = 0; l < i; l++)
			{
				if (arr[i] - arr[l] == 0)
				{
					counting = false;
					count = 0;
				}
			}
			if (count == 1 && counting)
			{
				cout << "\tЗначение: ";
				counting = false;
				printing = true;
			}
		}
		if (count > 0) cout << arr[i] << " повторяется " << count + 1 << (((count - 1) % 10 < 5 || (count - 1) % 10 > 1) ? " раза.\n" : " раз.\n");
	}
	if (!printing) cout << "Повторяющихся значений не обнаружено.\n";
}

template <typename T> void Search(T arr[][COLS], const int ROWS, const int COLS)
{
	bool printing = false;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int count = 0;
			bool counting = true;
			for (int k = i + 1; k < ROWS; k++)
			{
				for (int l = j + 1; l < COLS; l++)
				{
					if ((arr[i][j] - arr[k][l]) == 0) count++;
					for (int l = 0; l < i; l++)
					{
						if ((arr[i][j] - arr[k][l]) == 0)
						{
							counting = false;
							count = 0;
						}
					}
					if (count == 1 && counting)
					{
						cout << "\tЗначение: ";
						counting = false;
						printing = true;
					}
				}
			}
			if (count > 0) cout << arr[i][j] << " повторяется " << count + 1 << (((count - 1) % 10 < 5 || (count - 1) % 10 > 1) ? " раза.\n" : " раз.\n");
		}
	}
	if (!printing) cout << "Повторяющихся значений не обнаружено.\n";
}