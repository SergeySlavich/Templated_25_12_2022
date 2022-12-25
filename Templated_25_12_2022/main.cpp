//HOME WORK
#include"stdafx.h"
#include"constants.h"
#include"Fill_rand.h"
#include"Print.h"
#include"Shift.h"
#include"statistics.h"

//TODO:
//1. В ветке templated шаблонизировать все функции кроме FillRand();
//2. От ветки templated создать ветку templated_separation, и в ней, вынести шаблонные функции в отдельные файлы;

//Функции для одномерных массивов
template <typename T> void Sort(T arr[], const int SIZE);

//Функции для двумерных массивов
template <typename T> void Sort(T arr[][COLS], const int ROWS, const int COLS);

//Функции для одномерных массивов
template <typename T> void Search(T arr[], const int SIZE);

//Функции для двумерных массивов
template <typename T> void Search(T arr[][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "\t\tHomeWork FUNCTIONS. Overload function\n";
	cout << "\t\t***Домашнее задание \"Функции. Перегрузка функций. Шаблоны. Ветка Templated.\"***\n\n";
	const int SIZE = 10;
	int shift = 0;
	int limit, min_rand, max_rand;
	char input;

	int arr_int[SIZE] = {};
	double arr_double[SIZE] = {};
	float arr_float[SIZE] = {};
	char arr_char[SIZE] = {};

	int arr_2_int[ROWS][COLS] = {};
	double arr_2_double[ROWS][COLS] = {};
	float arr_2_float[ROWS][COLS] = {};
	char arr_2_char[ROWS][COLS] = {};

	cout << "Массив \"int\":\n";
	Fill_rand(arr_int, SIZE);
	Print(arr_int, SIZE);
	cout << "Массив \"double\":\n";
	Fill_rand(arr_double, SIZE);
	Print(arr_double, SIZE);
	cout << "Массив \"float\":\n";
	Fill_rand(arr_float, SIZE);
	Print(arr_float, SIZE);
	cout << "Массив \"char\":\n";
	Fill_rand(arr_char, SIZE);
	Print(arr_char, SIZE);

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	cout << "Двумерный массив \"int\":\n";
	Fill_rand(arr_2_int, ROWS, COLS);
	Print(arr_2_int, ROWS, COLS);
	cout << "Двумерный массив \"double\":\n";
	Fill_rand(arr_2_double, ROWS, COLS);
	Print(arr_2_double, ROWS, COLS);
	cout << "Двумерный массив \"float\":\n";
	Fill_rand(arr_2_float, ROWS, COLS);
	Print(arr_2_float, ROWS, COLS);
	cout << "Двумерный массив \"char\":\n";
	Fill_rand(arr_2_char, ROWS, COLS);
	Print(arr_2_char, ROWS, COLS);

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	Print(arr_int, SIZE);
	cout << "\tСумма всех элементов одномерного массива \"int\" равна: " << Sum(arr_int, SIZE) << endl;
	Print(arr_double, SIZE);
	cout << "\tСумма всех элементов одномерного массива \"double\" равна: " << Sum(arr_double, SIZE) << endl;
	Print(arr_float, SIZE);
	cout << "\tСумма всех элементов одномерного массива \"float\" равна: " << Sum(arr_float, SIZE) << endl;
	Print(arr_char, SIZE);
	cout << "\tСумма всех элементов одномерного массива \"char\" равна: " << Sum(arr_char, SIZE) << endl;

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	Print(arr_2_int, ROWS, COLS);
	cout << "\tСумма всех элементов двумерного массива \"int\" равна: " << Sum(arr_2_int, ROWS, COLS) << endl;
	Print(arr_2_double, ROWS, COLS);
	cout << "\tСумма всех элементов двумерного массива \"double\" равна: " << Sum(arr_2_double, ROWS, COLS) << endl;
	Print(arr_2_float, ROWS, COLS);
	cout << "\tСумма всех элементов двумерного массива \"float\" равна: " << Sum(arr_2_float, ROWS, COLS) << endl;
	Print(arr_2_char, ROWS, COLS);
	cout << "\tСумма всех элементов двумерного массива \"char\" равна: " << Sum(arr_2_char, ROWS, COLS) << endl;

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	Print(arr_int, SIZE);
	cout << "\tСредне-арифметическое значение одномерного массива \"int\" равно: " << Avg(arr_int, SIZE) << endl;
	Print(arr_double, SIZE);
	cout << "\tСредне-арифметическое значение одномерного массива \"double\" равно: " << Avg(arr_double, SIZE) << endl;
	Print(arr_float, SIZE);
	cout << "\tСредне-арифметическое значение одномерного массива \"float\" равно: " << Avg(arr_float, SIZE) << endl;
	Print(arr_char, SIZE);
	cout << "\tСредне-арифметическое значение одномерного массива \"char\" равно: " << Avg(arr_char, SIZE) << endl;

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	Print(arr_2_int, ROWS, COLS);
	cout << "\tСредне-арифметическое значение двумерного массива \"int\" равно: " << Avg(arr_2_int, ROWS, COLS) << endl;
	Print(arr_2_double, ROWS, COLS);
	cout << "\tСредне-арифметическое значение двумерного массива \"double\" равно: " << Avg(arr_2_double, ROWS, COLS) << endl;
	Print(arr_2_float, ROWS, COLS);
	cout << "\tСредне-арифметическое значение двумерного массива \"float\" равно: " << Avg(arr_2_float, ROWS, COLS) << endl;
	Print(arr_2_char, ROWS, COLS);
	cout << "\tСредне-арифметическое значение двумерного массива \"char\" равно: " << Avg(arr_2_char, ROWS, COLS) << endl;

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	Print(arr_int, SIZE);
	cout << "\tМинимальное значение одномерного массива \"int\" равно: " << min_value_in(arr_int, SIZE) << endl;
	Print(arr_double, SIZE);
	cout << "\tМинимальное значение одномерного массива \"double\" равно: " << min_value_in(arr_double, SIZE) << endl;
	Print(arr_float, SIZE);
	cout << "\tМинимальное значение одномерного массива \"float\" равно: " << min_value_in(arr_float, SIZE) << endl;
	Print(arr_char, SIZE);
	cout << "\tМинимальное значение одномерного массива \"char\" равно: " << min_value_in(arr_char, SIZE) << endl;

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	Print(arr_2_int, ROWS, COLS);
	cout << "\tМинимальное значение двумерного массива \"int\" равно: " << min_value_in(arr_2_int, ROWS, COLS) << endl;
	Print(arr_2_double, ROWS, COLS);
	cout << "\tМинимальное значение двумерного массива \"double\" равно: " << min_value_in(arr_2_double, ROWS, COLS) << endl;
	Print(arr_2_float, ROWS, COLS);
	cout << "\tМинимальное значение двумерного массива \"float\" равно: " << min_value_in(arr_2_float, ROWS, COLS) << endl;
	Print(arr_2_char, ROWS, COLS);
	cout << "\tМинимальное значение двумерного массива \"char\" равно: " << min_value_in(arr_2_char, ROWS, COLS) << endl;

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	Print(arr_int, SIZE);
	cout << "\tМаксимальное значение одномерного массива \"int\" равно: " << max_value_in(arr_int, SIZE) << endl;
	Print(arr_double, SIZE);
	cout << "\tМаксимальное значение одномерного массива \"double\" равно: " << max_value_in(arr_double, SIZE) << endl;
	Print(arr_float, SIZE);
	cout << "\tМаксимальное значение одномерного массива \"float\" равно: " << max_value_in(arr_float, SIZE) << endl;
	Print(arr_char, SIZE);
	cout << "\tМаксимальное значение одномерного массива \"char\" равно: " << max_value_in(arr_char, SIZE) << endl;

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	Print(arr_2_int, ROWS, COLS);
	cout << "\tМаксимальное значение двумерного массива \"int\" равно: " << max_value_in(arr_2_int, ROWS, COLS) << endl;
	Print(arr_2_double, ROWS, COLS);
	cout << "\tМаксимальное значение двумерного массива \"double\" равно: " << max_value_in(arr_2_double, ROWS, COLS) << endl;
	Print(arr_2_float, ROWS, COLS);
	cout << "\tМаксимальное значение двумерного массива \"float\" равно: " << max_value_in(arr_2_float, ROWS, COLS) << endl;
	Print(arr_2_char, ROWS, COLS);
	cout << "\tМаксимальное значение двумерного массива \"char\" равно: " << max_value_in(arr_2_char, ROWS, COLS) << endl;

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	cout << "Введите значение, на которое нужно сдвинуть массив влево: "; cin >> shift;
	
	cout << "Массив \"int\":\n";
	Print(arr_int, SIZE);
	shift_left(arr_int, SIZE, shift);
	Print(arr_int, SIZE);
	cout << "Массив \"double\":\n";
	Print(arr_double, SIZE);
	shift_left(arr_double, SIZE, shift);
	Print(arr_double, SIZE);
	cout << "Массив \"float\":\n";
	Print(arr_float, SIZE);
	shift_left(arr_float, SIZE, shift);
	Print(arr_float, SIZE);
	cout << "Массив \"char\":\n";
	Print(arr_char, SIZE);
	shift_left(arr_char, SIZE, shift);
	Print(arr_char, SIZE);

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	cout << "Введите значение, на которое нужно сдвинуть двумерный массив влево: "; cin >> shift;
	cout << "Двумерный массив \"int\":\n";
	Print(arr_2_int, ROWS, COLS);
	shift_left(arr_2_int, ROWS, COLS, shift);
	Print(arr_2_int, ROWS, COLS);
	cout << "Двумерный массив \"double\":\n";
	Print(arr_2_double, ROWS, COLS);
	shift_left(arr_2_double, ROWS, COLS, shift);
	Print(arr_2_double, ROWS, COLS);
	cout << "Двумерный массив \"float\":\n";
	Print(arr_2_float,ROWS, COLS);
	shift_left(arr_2_float, ROWS, COLS, shift);
	Print(arr_2_float,ROWS, COLS);
	cout << "Двумерный массив \"char\":\n";
	Print(arr_2_char, ROWS, COLS);
	shift_left(arr_2_char, ROWS, COLS, shift);
	Print(arr_2_char, ROWS, COLS);

	cout << "Для продолжения нажмите любую клавишу\n"; input = _getch();

	cout << "Введите значение, на которое нужно сдвинуть одномерный массив вправо: "; cin >> shift;
	cout << "Массив \"int\":\n";
	Print(arr_int, SIZE);
	shift_right(arr_int, SIZE, shift);
	Print(arr_int, SIZE);
	cout << "Массив \"double\":\n";
	Print(arr_double, SIZE);
	shift_right(arr_double, SIZE, shift);
	Print(arr_double, SIZE);
	cout << "Массив \"float\":\n";
	Print(arr_float, SIZE);
	shift_right(arr_float, SIZE, shift);
	Print(arr_float, SIZE);
	cout << "Массив \"char\":\n";
	Print(arr_char, SIZE);
	shift_right(arr_char, SIZE, shift);
	Print(arr_char, SIZE);

	cout << "Для продолжения нажмите любую клавишу\n"; input = _getch();

	cout << "Введите значение, на которое нужно сдвинуть двумерный массив вправо: "; cin >> shift;

	cout << "Двумерный массив \"int\":\n";
	Print(arr_2_int, ROWS, COLS);
	shift_right(arr_2_int, ROWS, COLS, shift);
	Print(arr_2_int, ROWS, COLS);
	cout << "Двумерный массив \"double\":\n";
	Print(arr_2_double, ROWS, COLS);
	shift_right(arr_2_double, ROWS, COLS, shift);
	Print(arr_2_double, ROWS, COLS);
	cout << "Двумерный массив \"float\":\n";
	Print(arr_2_float, ROWS, COLS);
	shift_right(arr_2_float, ROWS, COLS, shift);
	Print(arr_2_float, ROWS, COLS);
	cout << "Двумерный массив \"char\":\n";
	Print(arr_2_char, ROWS, COLS);
	shift_right(arr_2_char, ROWS, COLS, shift);
	Print(arr_2_char, ROWS, COLS);

	cout << "Для продолжения нажмите любую клавишу\n"; input = _getch();

	cout << "\t\tСортировка одномерного массива.\n";
	cout << "Массив типа \"int\":\n";
	Print(arr_int, SIZE);
	Sort(arr_int, SIZE);
	Print(arr_int, SIZE);
	cout << "Массив типа \"double\":\n";
	Print(arr_double, SIZE);
	Sort(arr_double, SIZE);
	Print(arr_double, SIZE);
	cout << "Массив типа \"float\":\n";
	Print(arr_float, SIZE);
	Sort(arr_float, SIZE);
	Print(arr_float, SIZE);
	cout << "Массив типа \"char\":\n";
	Print(arr_char, SIZE);
	Sort(arr_char, SIZE);
	Print(arr_char, SIZE);

	cout << "Для продолжения нажмите любую клавишу\n"; input = _getch();

	cout << "\t\tСортировка двумерного массива построчно.\n";
	cout << "Массив типа \"int\":\n";
	Print(arr_2_int, ROWS, COLS);
	Sort(arr_2_int, ROWS, COLS);
	Print(arr_2_int, ROWS, COLS);
	cout << "Массив типа \"double\":\n";
	Print(arr_2_double, ROWS, COLS);
	Sort(arr_2_double, ROWS, COLS);
	Print(arr_2_double, ROWS, COLS);
	cout << "Массив типа \"float\":\n";
	Print(arr_2_float, ROWS, COLS);
	Sort(arr_2_float, ROWS, COLS);
	Print(arr_2_float, ROWS, COLS);
	cout << "Массив типа \"char\":\n";
	Print(arr_2_char, ROWS, COLS);
	Sort(arr_2_char, ROWS, COLS);
	Print(arr_2_char, ROWS, COLS);

	cout << "Для продолжения нажмите любую клавишу\n"; input = _getch();

	cout << "\n\tПоиск повторяющихся значений массива \"int arr[]\":\n";
	Print(arr_int, SIZE);
	Search(arr_int, SIZE);
	cout << "\n\tПоиск повторяющихся значений массива \"double arr[]\":\n";
	Print(arr_double, SIZE);
	Search(arr_double, SIZE);
	cout << "\n\tПоиск повторяющихся значений массива \"float arr[]\":\n";
	Print(arr_float, SIZE);
	Search(arr_float, SIZE);
	cout << "\n\tПоиск повторяющихся значений массива \"char arr[]\":\n";
	Print(arr_char, SIZE);
	Search(arr_char, SIZE);

	cout << "Для продолжения нажмите любую клавишу\n"; input = _getch();

	cout << "\n\tПоиск повторяющихся значений двумерного массива \"int arr[][]\":\n";
	Print(arr_2_int, ROWS, COLS);
	Search(arr_2_int, ROWS, COLS);
	cout << "\n\tПоиск повторяющихся значений двумерного массива \"double arr[][]\":\n";
	Print(arr_2_double, ROWS, COLS);
	Search(arr_2_double, ROWS, COLS);
	cout << "\n\tПоиск повторяющихся значений двумерного массива \"float arr[][]\":\n";
	Print(arr_2_float, ROWS, COLS);
	Search(arr_2_float, ROWS, COLS);
	cout << "\n\tПоиск повторяющихся значений двумерного массива \"char arr[][]\":\n";
	Print(arr_2_char, ROWS, COLS);
	Search(arr_2_char, ROWS, COLS);
}

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
