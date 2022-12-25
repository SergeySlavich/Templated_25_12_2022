//HOME WORK
#include<iostream>
#include<conio.h>
using namespace std;

//TODO:
//1. В ветке templated шаблонизировать все функции кроме FillRand();
//2. От ветки templated создать ветку templated_separation, и в ней, вынести шаблонные функции в отдельные файлы;

const int ROWS = 10;
const int COLS = 10;

//Функции для одномерных массивов
void Fill_rand(int arr[], const int SIZE, int minRand = 0, int maxRand = 100);
void Fill_rand(double arr[], const int SIZE, double minRand = 0, double maxRand = 100);
void Fill_rand(float arr[], const int SIZE, float minRand = 0, float maxRand = 100);
void Fill_rand(char arr[], const int SIZE, char minRand = 0, char maxRand = 100);
//Функции для двумерных массивов
void Fill_rand(int arr[][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void Fill_rand(double arr[][COLS], const int ROWS, const int COLS, double minRand = 0, double maxRand = 100);
void Fill_rand(float arr[][COLS], const int ROWS, const int COLS, float minRand = 0, float maxRand = 100);
void Fill_rand(char arr[][COLS], const int ROWS, const int COLS, char minRand = 0, char maxRand = 100);

//Функции для одномерных массивов
template <typename T> void Print(T arr[], const int SIZE);
//Функции для двумерных массивов
template <typename T> void Print(T arr[][COLS], const int ROWS, const int COLS);

//Функции для одномерных массивов
template <typename T> T Sum(T arr[], const int SIZE);
//Функции для двумерных массивов
template <typename T> T Sum(T arr[][COLS], const int ROWS, const int COLS);

//Функции для одномерных массивов
template <typename T> double Avg(T arr[], const int SIZE);
//Функции для двумерных массивов
template <typename T> double Avg(T arr[][COLS], const int ROWS, const int COLS);

//Функции для одномерных массивов
template <typename T> T min_value_in(T arr[], const int SIZE);
//Функции для двумерных массивов
template <typename T> T min_value_in(T arr[][COLS], const int ROWS, const int COLS);

//Функции для одномерных массивов
template <typename T> T max_value_in(T arr[], const int SIZE);
//Функции для двумерных массивов
template <typename T> T max_value_in(T arr[][COLS], const int ROWS, const int COLS);

//Функции для одномерных массивов
template <typename T> void shift_left(T arr[], const int SIZE, int shift);

//Функции для двумерных массивов
template <typename T> void shift_left(T arr[][COLS], const int ROWS, const int COLS, int shift);

//Функции для одномерных массивов
template <typename T> void shift_right(T arr[], const int SIZE, int shift);

//Функции для двумерных массивов
template <typename T> void shift_right(T arr[][COLS], const int ROWS, const int COLS, int shift);

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
