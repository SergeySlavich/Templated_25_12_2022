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
void Print(int arr[], const int SIZE);
void Print(double arr[], const int SIZE);
void Print(float arr[], const int SIZE);
void Print(char arr[], const int SIZE);
//Функции для двумерных массивов
void Print(int arr[][COLS], const int ROWS, const int COLS);
void Print(double arr[][COLS], const int ROWS, const int COLS);
void Print(float arr[][COLS], const int ROWS, const int COLS);
void Print(char arr[][COLS], const int ROWS, const int COLS);

//Функции для одномерных массивов
int Sum(int arr[], const int SIZE);
double Sum(double arr[], const int SIZE);
float Sum(float arr[], const int SIZE);
char Sum(char arr[], const int SIZE);
//Функции для двумерных массивов
int Sum(int arr[][COLS], const int ROWS, const int COLS);
double Sum(double arr[][COLS], const int ROWS, const int COLS);
float Sum(float arr[][COLS], const int ROWS, const int COLS);
char Sum(char arr[][COLS], const int ROWS, const int COLS);

//Функции для одномерных массивов
double Avg_int(int arr[], const int SIZE);
double Avg_double(double arr[], const int SIZE);
double Avg_float(float arr[], const int SIZE);
double Avg_char(char arr[], const int SIZE);
//Функции для двумерных массивов
double Avg_int(int arr[][COLS], const int ROWS, const int COLS);
double Avg_double(double arr[][COLS], const int ROWS, const int COLS);
double Avg_float(float arr[][COLS], const int ROWS, const int COLS);
double Avg_char(char arr[][COLS], const int ROWS, const int COLS);

//Функции для одномерных массивов
int min_value_in(int arr[], const int SIZE);
double min_value_in(double arr[], const int SIZE);
float min_value_in(float arr[], const int SIZE);
char min_value_in(char arr[], const int SIZE);
//Функции для двумерных массивов
int min_value_in(int arr[][COLS], const int ROWS, const int COLS);
double min_value_in(double arr[][COLS], const int ROWS, const int COLS);
float min_value_in(float arr[][COLS], const int ROWS, const int COLS);
char min_value_in(char arr[][COLS], const int ROWS, const int COLS);

//Функции для одномерных массивов
int max_value_in(int arr[], const int SIZE);
double max_value_in(double arr[], const int SIZE);
float max_value_in(float arr[], const int SIZE);
char max_value_in(char arr[], const int SIZE);
//Функции для двумерных массивов
int max_value_in(int arr[][COLS], const int ROWS, const int COLS);
double max_value_in(double arr[][COLS], const int ROWS, const int COLS);
float max_value_in(float arr[][COLS], const int ROWS, const int COLS);
char max_value_in(char arr[][COLS], const int ROWS, const int COLS);

//Функции для одномерных массивов
void shift_left(int arr[], const int SIZE, int shift);
void shift_left(double arr[], const int SIZE, int shift);
void shift_left(float arr[], const int SIZE, int shift);
void shift_left(char arr[], const int SIZE, int shift);
//Функции для двумерных массивов
void shift_left(int arr[][COLS], const int ROWS, const int COLS, int shift);
void shift_left(double arr[][COLS], const int ROWS, const int COLS, int shift);
void shift_left(float arr[][COLS], const int ROWS, const int COLS, int shift);
void shift_left(char arr[][COLS], const int ROWS, const int COLS, int shift);

//Функции для одномерных массивов
void shift_right(int arr[], const int SIZE, int shift);
void shift_right(double arr[], const int SIZE, int shift);
void shift_right(float arr[], const int SIZE, int shift);
void shift_right(char arr[], const int SIZE, int shift);
//Функции для двумерных массивов
void shift_right(int arr[][COLS], const int ROWS, const int COLS, int shift);
void shift_right(double arr[][COLS], const int ROWS, const int COLS, int shift);
void shift_right(float arr[][COLS], const int ROWS, const int COLS, int shift);
void shift_right(char arr[][COLS], const int ROWS, const int COLS, int shift);

//Функции для одномерных массивов
void Sort(int arr[], const int SIZE);
void Sort(double arr[], const int SIZE);
void Sort(float arr[], const int SIZE);
void Sort(char arr[], const int SIZE);
//Функции для двумерных массивов
void Sort(int arr[][COLS], const int ROWS, const int COLS);
void Sort(double arr[][COLS], const int ROWS, const int COLS);
void Sort(float arr[][COLS], const int ROWS, const int COLS);
void Sort(char arr[][COLS], const int ROWS, const int COLS);

//Функции для одномерных массивов
void Unique_rand(int arr[], const int SIZE, int limit = 9);
void Unique_rand(double arr[], const int SIZE, double limit = 9);
void Unique_rand(float arr[], const int SIZE, float limit = 9);
void Unique_rand(char arr[], const int SIZE, char limit = 9);
//Функции для двумерных массивов
void Unique_rand(int arr[][COLS], const int ROWS, const int COLS, int limit = 9);
void Unique_rand(double arr[][COLS], const int ROWS, const int COLS, double limit = 9);
void Unique_rand(float arr[][COLS], const int ROWS, const int COLS, float limit = 9);
void Unique_rand(char arr[][COLS], const int ROWS, const int COLS, char limit = 9);

//Функции для одномерных массивов
void Search(int arr[], const int SIZE);
void Search(double arr[], const int SIZE);
void Search(float arr[], const int SIZE);
void Search(char arr[], const int SIZE);
//Функции для двумерных массивов
void Search(int arr[][COLS], const int ROWS, const int COLS);
void Search(double arr[][COLS], const int ROWS, const int COLS);
void Search(float arr[][COLS], const int ROWS, const int COLS);
void Search(char arr[][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "\t\tHomeWork FUNCTIONS. Overload function\n";
	cout << "\t\t***Домышнее задание \"Функции. Перегрузка функций.\"***\n\n";
	const int SIZE = 10;
	int shift = 0;
	int limit;

	int arr_int[SIZE] = {};
	double arr_double[SIZE] = {};
	float arr_float[SIZE] = {};
	char arr_char[SIZE] = {};

	int arr_2_int[ROWS][COLS] = {};
	double arr_2_double[ROWS][COLS] = {};
	float arr_2_float[ROWS][COLS] = {};
	char arr_2_char[ROWS][COLS] = {};

	int uniq_arr_int[SIZE] = {};
	double uniq_arr_double[SIZE] = {};
	float uniq_arr_float[SIZE] = {};
	char uniq_arr_char[SIZE] = {};

	int uniq_arr_2_int[ROWS][COLS] = {};
	double uniq_arr_2_double[ROWS][COLS] = {};
	float uniq_arr_2_float[ROWS][COLS] = {};
	char uniq_arr_2_char[ROWS][COLS] = {};

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

	cout << "Для продолжения нажмите любую клавишу.\n"; char input = _getch();

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

	cout << "\tСумма всех элементов одномерного массива \"int\" равна: " << Sum(arr_int, SIZE) << endl;
	cout << "\tСумма всех элементов одномерного массива \"double\" равна: " << Sum(arr_double, SIZE) << endl;
	cout << "\tСумма всех элементов одномерного массива \"float\" равна: " << Sum(arr_float, SIZE) << endl;
	cout << "\tСумма всех элементов одномерного массива \"char\" равна: " << Sum(arr_char, SIZE) << endl;

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	cout << "\tСумма всех элементов двумерного массива \"int\" равна: " << Sum(arr_2_int, ROWS, COLS) << endl;
	cout << "\tСумма всех элементов двумерного массива \"double\" равна: " << Sum(arr_2_double, ROWS, COLS) << endl;
	cout << "\tСумма всех элементов двумерного массива \"float\" равна: " << Sum(arr_2_float, ROWS, COLS) << endl;
	cout << "\tСумма всех элементов двумерного массива \"char\" равна: " << Sum(arr_2_char, ROWS, COLS) << endl;

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	cout << "\tСредне-арифметическое значение одномерного массива \"int\" равно: " << Avg_int(arr_int, SIZE) << endl;
	cout << "\tСредне-арифметическое значение одномерного массива \"double\" равно: " << Avg_double(arr_double, SIZE) << endl;
	cout << "\tСредне-арифметическое значение одномерного массива \"float\" равно: " << Avg_float(arr_float, SIZE) << endl;
	cout << "\tСредне-арифметическое значение одномерного массива \"char\" равно: " << Avg_char(arr_char, SIZE) << endl;

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	cout << "\tСредне-арифметическое значение двумерного массива \"int\" равно: " << Avg_int(arr_2_int, ROWS, COLS) << endl;
	cout << "\tСредне-арифметическое значение двумерного массива \"double\" равно: " << Avg_double(arr_2_double, ROWS, COLS) << endl;
	cout << "\tСредне-арифметическое значение двумерного массива \"float\" равно: " << Avg_float(arr_2_float, ROWS, COLS) << endl;
	cout << "\tСредне-арифметическое значение двумерного массива \"char\" равно: " << Avg_char(arr_2_char, ROWS, COLS) << endl;

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	cout << "\tМинимальное значение одномерного массива \"int\" равно: " << min_value_in(arr_int, SIZE) << endl;
	cout << "\tМинимальное значение одномерного массива \"double\" равно: " << min_value_in(arr_double, SIZE) << endl;
	cout << "\tМинимальное значение одномерного массива \"float\" равно: " << min_value_in(arr_float, SIZE) << endl;
	cout << "\tМинимальное значение одномерного массива \"char\" равно: " << min_value_in(arr_char, SIZE) << endl;

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	cout << "\tМинимальное значение двумерного массива \"int\" равно: " << min_value_in(arr_2_int, ROWS, COLS) << endl;
	cout << "\tМинимальное значение двумерного массива \"double\" равно: " << min_value_in(arr_2_double, ROWS, COLS) << endl;
	cout << "\tМинимальное значение двумерного массива \"float\" равно: " << min_value_in(arr_2_float, ROWS, COLS) << endl;
	cout << "\tМинимальное значение двумерного массива \"char\" равно: " << min_value_in(arr_2_char, ROWS, COLS) << endl;

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	cout << "\tМаксимальное значение одномерного массива \"int\" равно: " << max_value_in(arr_int, SIZE) << endl;
	cout << "\tМаксимальное значение одномерного массива \"double\" равно: " << max_value_in(arr_double, SIZE) << endl;
	cout << "\tМаксимальное значение одномерного массива \"float\" равно: " << max_value_in(arr_float, SIZE) << endl;
	cout << "\tМаксимальное значение одномерного массива \"char\" равно: " << max_value_in(arr_char, SIZE) << endl;

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	cout << "\tМаксимальное значение двумерного массива \"int\" равно: " << max_value_in(arr_2_int, ROWS, COLS) << endl;
	cout << "\tМаксимальное значение двумерного массива \"double\" равно: " << max_value_in(arr_2_double, ROWS, COLS) << endl;
	cout << "\tМаксимальное значение двумерного массива \"float\" равно: " << max_value_in(arr_2_float, ROWS, COLS) << endl;
	cout << "\tМаксимальное значение двумерного массива \"char\" равно: " << max_value_in(arr_2_char, ROWS, COLS) << endl;

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	cout << "Введите значение, на которое нужно сдвинуть массив влево: "; cin >> shift;
	shift_left(arr_int, SIZE, shift);
	Print(arr_int, SIZE);
	shift_left(arr_double, SIZE, shift);
	Print(arr_double, SIZE);
	shift_left(arr_float, SIZE, shift);
	Print(arr_float, SIZE);
	shift_left(arr_char, SIZE, shift);
	Print(arr_char, SIZE);

	cout << "Для продолжения нажмите любую клавишу.\n"; input = _getch();

	cout << "Введите значение, на которое нужно сдвинуть двумерный массив влево: "; cin >> shift;

	shift_left(arr_2_int, ROWS, COLS, shift);
	Print(arr_2_int, ROWS, COLS);
	shift_left(arr_2_double, ROWS, COLS, shift);
	Print(arr_2_double, ROWS, COLS);
	shift_left(arr_2_float, ROWS, COLS, shift);
	Print(arr_2_float, ROWS, COLS);
	shift_left(arr_2_char, ROWS, COLS, shift);
	Print(arr_2_char, ROWS, COLS);

	cout << "Для продолжения нажмите любую клавишу\n"; input = _getch();

	cout << "Введите значение, на которое нужно сдвинуть одномерный массив вправо: "; cin >> shift;
	shift_right(arr_int, SIZE, shift);
	Print(arr_int, SIZE);
	shift_right(arr_double, SIZE, shift);
	Print(arr_double, SIZE);
	shift_right(arr_float, SIZE, shift);
	Print(arr_float, SIZE);
	shift_right(arr_char, SIZE, shift);
	Print(arr_char, SIZE);

	cout << "Для продолжения нажмите любую клавишу\n"; input = _getch();

	cout << "Введите значение, на которое нужно сдвинуть двумерный массив вправо: "; cin >> shift;
	shift_right(arr_2_int, ROWS, COLS, shift);
	Print(arr_2_int, ROWS, COLS);
	shift_right(arr_2_double, ROWS, COLS, shift);
	Print(arr_2_double, ROWS, COLS);
	shift_right(arr_2_float, ROWS, COLS, shift);
	Print(arr_2_float, ROWS, COLS);
	shift_right(arr_2_char, ROWS, COLS, shift);
	Print(arr_2_char, ROWS, COLS);

	cout << "Для продолжения нажмите любую клавишу\n"; input = _getch();

	cout << "\t\tСортировка одномерного массива.\n";
	cout << "Массив типа \"int\":\n";
	Sort(arr_int, SIZE);
	Print(arr_int, SIZE);
	cout << "Массив типа \"double\":\n";
	Sort(arr_double, SIZE);
	Print(arr_double, SIZE);
	cout << "Массив типа \"float\":\n";
	Sort(arr_float, SIZE);
	Print(arr_float, SIZE);
	cout << "Массив типа \"char\":\n";
	Sort(arr_char, SIZE);
	Print(arr_char, SIZE);

	cout << "Для продолжения нажмите любую клавишу\n"; input = _getch();

	cout << "\t\tСортировка двумерного массива построчно.\n";
	cout << "Массив типа \"int\":\n";
	Sort(arr_2_int, ROWS, COLS);
	Print(arr_2_int, ROWS, COLS);
	cout << "Массив типа \"double\":\n";
	Sort(arr_2_double, ROWS, COLS);
	Print(arr_2_double, ROWS, COLS);
	cout << "Массив типа \"float\":\n";
	Sort(arr_2_float, ROWS, COLS);
	Print(arr_2_float, ROWS, COLS);
	cout << "Массив типа \"char\":\n";
	Sort(arr_2_char, ROWS, COLS);
	Print(arr_2_char, ROWS, COLS);

	cout << "Для продолжения нажмите любую клавишу\n"; input = _getch();

	cout << "\n\tМассивы уникальных значений.\n";
	cout << "Введите максимальное значение массива: "; cin >> limit;
	cout << "Массив типа \"int\":\n";
	Unique_rand(uniq_arr_int, SIZE, limit);
	Print(uniq_arr_int, SIZE);
	cout << "Массив типа \"double\":\n";
	Unique_rand(uniq_arr_double, SIZE, limit);
	Print(uniq_arr_double, SIZE);
	cout << "Массив типа \"float\":\n";
	Unique_rand(uniq_arr_float, SIZE, limit);
	Print(uniq_arr_float, SIZE);
	cout << "Массив типа \"char\":\n";
	Unique_rand(uniq_arr_char, SIZE, limit);
	Print(uniq_arr_char, SIZE);

	cout << "Для продолжения нажмите любую клавишу\n"; input = _getch();

	cout << "\n\tДвумерные массивы уникальных значений.\n";
	cout << "Введите максимальное значение двумерного массива"; cin >> limit;
	cout << "Массив типа \"int\":\n";
	Unique_rand(uniq_arr_2_int, ROWS, COLS, limit);
	Print(uniq_arr_2_int, ROWS, COLS);
	cout << "Массив типа \"double\":\n";
	Unique_rand(uniq_arr_2_double, ROWS, COLS, limit);
	Print(uniq_arr_2_double, ROWS, COLS);
	cout << "Массив типа \"float\":\n";
	Unique_rand(uniq_arr_2_float, ROWS, COLS, limit);
	Print(uniq_arr_2_float, ROWS, COLS);
	cout << "Массив типа \"char\":\n";
	Unique_rand(uniq_arr_2_char, ROWS, COLS, limit);
	Print(uniq_arr_2_char, ROWS, COLS);

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

void Print(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << '\t' << arr[i];
	}
	cout << endl;
}

void Print(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << '\t' << arr[i];
	}
	cout << endl;
}

void Print(float arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << '\t' << arr[i];
	}
	cout << endl;
}

void Print(char arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << '\t' << arr[i];
	}
	cout << endl;
}

void Print(int arr[][COLS], const int ROWS, const int COLS)
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

void Print(double arr[][COLS], const int ROWS, const int COLS)
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

void Print(float arr[][COLS], const int ROWS, const int COLS)
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

void Print(char arr[][COLS], const int ROWS, const int COLS)
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

int Sum(int arr[], const int SIZE)
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Sum(double arr[], const int SIZE)
{
	double sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}

float Sum(float arr[], const int SIZE)
{
	float sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}

char Sum(char arr[], const int SIZE)
{
	char sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Sum(int arr[][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Sum(double arr[][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

float Sum(float arr[][COLS], const int ROWS, const int COLS)
{
	float sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

char Sum(char arr[][COLS], const int ROWS, const int COLS)
{
	char sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Avg_int(int arr[], const int SIZE)
{
	return (double)Sum(arr, SIZE) / SIZE;
}

double Avg_double(double arr[], const int SIZE)
{
	return (double)Sum(arr, SIZE) / SIZE;
}

double Avg_float(float arr[], const int SIZE)
{
	return (double)Sum(arr, SIZE) / SIZE;
}

double Avg_char(char arr[], const int SIZE)
{
	return (double)Sum(arr, SIZE) / SIZE;
}

double Avg_int(int arr[][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

double Avg_double(double arr[][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

double Avg_float(float arr[][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

double Avg_char(char arr[][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

int min_value_in(int arr[], const int SIZE)
{
	int min = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

double min_value_in(double arr[], const int SIZE)
{
	double min = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (min - arr[i] > 0) min = arr[i];
	}
	return min;
}

float min_value_in(float arr[], const int SIZE)
{
	float min = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (min - arr[i] > 0) min = arr[i];
	}
	return min;
}

char min_value_in(char arr[], const int SIZE)
{
	char min = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

int min_value_in(int arr[][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}

double min_value_in(double arr[][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min - arr[i][j] > 0) min = arr[i][j];
		}
	}
	return min;
}

float min_value_in(float arr[][COLS], const int ROWS, const int COLS)
{
	float min = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min - arr[i][j] > 0) min = arr[i][j];
		}
	}
	return min;
}

char min_value_in(char arr[][COLS], const int ROWS, const int COLS)
{
	char min = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}

int max_value_in(int arr[], const int SIZE)
{
	int max = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

double max_value_in(double arr[], const int SIZE)
{
	double max = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if ((max - arr[i]) < 0) max = arr[i];
	}
	return max;
}

float max_value_in(float arr[], const int SIZE)
{
	float max = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if ((max - arr[i]) < 0) max = arr[i];
	}
	return max;
}

char max_value_in(char arr[], const int SIZE)
{
	char max = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

int max_value_in(int arr[][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}

double max_value_in(double arr[][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if ((max - arr[i][j]) < 0) max = arr[i][j];
		}
	}
	return max;
}

float max_value_in(float arr[][COLS], const int ROWS, const int COLS)
{
	float max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if ((max - arr[i][j]) < 0) max = arr[i][j];
		}
	}
	return max;
}

char max_value_in(char arr[][COLS], const int ROWS, const int COLS)
{
	char max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}

void shift_left(int arr[], const int SIZE, int shift)
{

	for (int j = 0; j < shift; j++)
	{
		int temp = arr[0];
		for (int i = 1; i < SIZE; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[SIZE - 1] = temp;
	}
}

void shift_left(double arr[], const int SIZE, int shift)
{

	for (int j = 0; j < shift; j++)
	{
		double temp = arr[0];
		for (int i = 1; i < SIZE; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[SIZE - 1] = temp;
	}
}

void shift_left(float arr[], const int SIZE, int shift)
{

	for (int j = 0; j < shift; j++)
	{
		float temp = arr[0];
		for (int i = 1; i < SIZE; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[SIZE - 1] = temp;
	}
}

void shift_left(char arr[], const int SIZE, int shift)
{

	for (int j = 0; j < shift; j++)
	{
		char temp = arr[0];
		for (int i = 1; i < SIZE; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[SIZE - 1] = temp;
	}
}

void shift_left(int arr[][COLS], const int ROWS, const int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < shift; j++)
		{
			int temp = arr[i][0];
			for (int k = 1; k < COLS; k++)
			{
				arr[i][k - 1] = arr[i][k];
			}
			arr[i][COLS - 1] = temp;
		}
	}
}

void shift_left(double arr[][COLS], const int ROWS, const int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < shift; j++)
		{
			double temp = arr[i][0];
			for (int k = 1; k < COLS; k++)
			{
				arr[i][k - 1] = arr[i][k];
			}
			arr[i][COLS - 1] = temp;
		}
	}
}

void shift_left(float arr[][COLS], const int ROWS, const int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < shift; j++)
		{
			float temp = arr[i][0];
			for (int k = 1; k < COLS; k++)
			{
				arr[i][k - 1] = arr[i][k];
			}
			arr[i][COLS - 1] = temp;
		}
	}
}

void shift_left(char arr[][COLS], const int ROWS, const int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < shift; j++)
		{
			char temp = arr[i][0];
			for (int k = 1; k < COLS; k++)
			{
				arr[i][k - 1] = arr[i][k];
			}
			arr[i][COLS - 1] = temp;
		}
	}
}

void shift_right(int arr[], const int SIZE, int shift)
{
	for (int j = 0; j < shift; j++)
	{
		int temp = arr[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}

void shift_right(double arr[], const int SIZE, int shift)
{
	for (int j = 0; j < shift; j++)
	{
		double temp = arr[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}

void shift_right(float arr[], const int SIZE, int shift)
{
	for (int j = 0; j < shift; j++)
	{
		float temp = arr[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}

void shift_right(char arr[], const int SIZE, int shift)
{
	for (int j = 0; j < shift; j++)
	{
		char temp = arr[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}

void shift_right(int arr[][COLS], const int ROWS, const int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < shift; j++)
		{
			int temp = arr[i][COLS - 1];
			for (int k = COLS - 1; k > 0; k--)
			{
				arr[i][k] = arr[i][k - 1];
			}
			arr[i][0] = temp;
		}
	}
}

void shift_right(double arr[][COLS], const int ROWS, const int COLS, int shift)
{
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < shift; j++)
		{
			double temp = arr[i][COLS - 1];
			for (int k = COLS - 1; k > 0; k--)
			{
				arr[i][k] = arr[i][k - 1];
			}
			arr[i][0] = temp;
		}
	}
}

void shift_right(float arr[][COLS], const int ROWS, const int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < shift; j++)
		{
			float temp = arr[i][COLS - 1];
			for (int k = COLS - 1; k > 0; k--)
			{
				arr[i][k] = arr[i][k - 1];
			}
			arr[i][0] = temp;
		}
	}
}

void shift_right(char arr[][COLS], const int ROWS, const int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < shift; j++)
		{
			char temp = arr[i][COLS - 1];
			for (int k = COLS - 1; k > 0; k--)
			{
				arr[i][k] = arr[i][k - 1];
			}
			arr[i][0] = temp;
		}
	}
}

void Sort(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		int min = arr[i];
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[j] < arr[i])
			{
				min = arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
		}
	}
}

void Sort(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		double min = arr[i];
		for (int j = i + 1; j < SIZE; j++)
		{
			if ((arr[j] - arr[i]) < 0)
			{
				min = arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
		}
	}
}

void Sort(float arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		float min = arr[i];
		for (int j = i + 1; j < SIZE; j++)
		{
			if ((arr[j] - arr[i]) < 0)
			{
				min = arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
		}
	}
}

void Sort(char arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		char min = arr[i];
		for (int j = i + 1; j < SIZE; j++)
		{
			if ((arr[j] - arr[i]) < 0)
			{
				min = arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
		}
	}
}

void Sort(int arr[][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int min = arr[i][j];
			for (int k = j + 1; k < COLS; k++)
			{
				if (arr[i][k] < arr[i][j])
				{
					min = arr[i][k];
					arr[i][k] = arr[i][j];
					arr[i][j] = min;
				}
			}
		}
	}
}

void Sort(double arr[][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			double min = arr[i][j];
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

void Sort(float arr[][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			float min = arr[i][j];
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

void Sort(char arr[][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			char min = arr[i][j];
			for (int k = j + 1; k < COLS; k++)
			{
				if (arr[i][k] < arr[i][j])
				{
					min = arr[i][k];
					arr[i][k] = arr[i][j];
					arr[i][j] = min;
				}
			}
		}
	}
}

void Unique_rand(int arr[], const int SIZE, int limit)
{
	for (int i = 0; i < SIZE; i++)
	{
		bool uniq = true;
		do
		{
			arr[i] = rand() % (limit + 1);
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j]) uniq = false;
			}
			uniq = !uniq;
		} while (uniq);
	}
}

void Unique_rand(double arr[], const int SIZE, double limit)
{
	for (int i = 0; i < SIZE; i++)
	{
		bool uniq = true;
		do
		{
			arr[i] = rand() % (int)(limit + 1);
			for (int j = 0; j < i; j++)
			{
				if ((arr[i] - arr[j]) == 0) uniq = false;
			}
			uniq = !uniq;
		} while (uniq);
	}
}

void Unique_rand(float arr[], const int SIZE, float limit)
{
	for (int i = 0; i < SIZE; i++)
	{
		bool uniq = true;
		do
		{
			arr[i] = rand() % (int)(limit + 1);
			for (int j = 0; j < i; j++)
			{
				if ((arr[i] - arr[j]) == 0) uniq = false;
			}
			uniq = !uniq;
		} while (uniq);
	}
}

void Unique_rand(char arr[], const int SIZE, char limit)
{
	for (int i = 0; i < SIZE; i++)
	{
		bool uniq = true;
		do
		{
			arr[i] = rand() % (limit + 1);
			for (int j = 0; j < i; j++)
			{
				if ((arr[i] - arr[j]) == 0) uniq = false;
			}
			uniq = !uniq;
		} while (uniq);
	}
}

void Unique_rand(int arr[][COLS], const int ROWS, const int COLS, int limit)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool uniq = true;
			do
			{
				arr[i][j] = rand() % (limit + 1) * (limit + 1);
				for (int k = 0; k < i; k++)
				{
					for (int l = 0; (k < i - 1) ? (l < COLS) : (l < j); l++)
					{
						if (arr[i][j] == arr[k][l]) uniq = false;
					}
				}
				uniq = !uniq;
			} while (uniq);
		}
	}
}

void Unique_rand(double arr[][COLS], const int ROWS, const int COLS, double limit)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool uniq = true;
			do
			{
				arr[i][j] = rand() % (int)(limit + 1) * (limit + 1);
				for (int k = 0; k < i; k++)
				{
					for (int l = 0; (k < i - 1) ? (l < COLS) : (l < j); l++)
					{
						if (arr[i][j] - arr[k][l] == 0) uniq = false;
					}
				}
				uniq = !uniq;
			} while (uniq);
		}
	}
}

void Unique_rand(float arr[][COLS], const int ROWS, const int COLS, float limit)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool uniq = true;
			do
			{
				arr[i][j] = rand() % (int)(limit + 1) * (limit + 1);
				for (int k = 0; k < i; k++)
				{
					for (int l = 0; (k < i - 1) ? (l < COLS) : (l < j); l++)
					{
						if (arr[i][j] - arr[k][l] == 0) uniq = false;
					}
				}
				uniq = !uniq;
			} while (uniq);
		}
	}
}

void Unique_rand(char arr[][COLS], const int ROWS, const int COLS, char limit)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool uniq = true;
			do
			{
				arr[i][j] = rand() % (limit + 1) * (limit + 1);
				for (int k = 0; k < i; k++)
				{
					for (int l = 0; (k < i - 1) ? (l < COLS) : (l < j); l++)
					{
						if (arr[i][j] == arr[k][l]) uniq = false;
					}
				}
				uniq = !uniq;
			} while (uniq);
		}
	}
}

void Search(int arr[], const int SIZE)
{
	bool printing = false;
	for (int i = 0; i < SIZE; i++)
	{
		int count = 0;
		bool counting = true;
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[i] == arr[j]) count++;
			for (int l = 0; l < i; l++)
			{
				if (arr[i] == arr[l])
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

void Search(double arr[], const int SIZE)
{
	bool printing = false;
	for (int i = 0; i < SIZE; i++)
	{
		int count = 0;
		bool counting = true;
		for (int j = i + 1; j < SIZE; j++)
		{
			if ((arr[i] - arr[j]) == 0) count++;
			for (int l = 0; l < i; l++)
			{
				if ((arr[i] - arr[l]) == 0)
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

void Search(float arr[], const int SIZE)
{
	bool printing = false;
	for (int i = 0; i < SIZE; i++)
	{
		int count = 0;
		bool counting = true;
		for (int j = i + 1; j < SIZE; j++)
		{
			if ((arr[i] - arr[j]) == 0) count++;
			for (int l = 0; l < i; l++)
			{
				if ((arr[i] - arr[l]) == 0)
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

void Search(char arr[], const int SIZE)
{
	bool printing = false;
	for (int i = 0; i < SIZE; i++)
	{
		int count = 0;
		bool counting = true;
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[i] == arr[j]) count++;
			for (int l = 0; l < i; l++)
			{
				if (arr[i] == arr[l])
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
			if (count > 0) cout << arr[i] << " повторяется " << count + 1 << (((count - 1) % 10 < 5 || (count - 1) % 10 > 1) ? " раза.\n" : " раз.\n");
		}
	}
	if (!printing) cout << "Повторяющихся значений не обнаружено.\n";
}

void Search(int arr[][COLS], const int ROWS, const int COLS)
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

void Search(double arr[][COLS], const int ROWS, const int COLS)
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

void Search(float arr[][COLS], const int ROWS, const int COLS)
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

void Search(char arr[][COLS], const int ROWS, const int COLS)
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