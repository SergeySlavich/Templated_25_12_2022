//HOME WORK
#include<iostream>
#include<conio.h>
using namespace std;

//TODO:
//1. � ����� templated ��������������� ��� ������� ����� FillRand();
//2. �� ����� templated ������� ����� templated_separation, � � ���, ������� ��������� ������� � ��������� �����;

const int ROWS = 10;
const int COLS = 10;

//������� ��� ���������� ��������
void Fill_rand(int arr[], const int SIZE, int minRand = 0, int maxRand = 100);
void Fill_rand(double arr[], const int SIZE, double minRand = 0, double maxRand = 100);
void Fill_rand(float arr[], const int SIZE, float minRand = 0, float maxRand = 100);
void Fill_rand(char arr[], const int SIZE, char minRand = 0, char maxRand = 100);
//������� ��� ��������� ��������
void Fill_rand(int arr[][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void Fill_rand(double arr[][COLS], const int ROWS, const int COLS, double minRand = 0, double maxRand = 100);
void Fill_rand(float arr[][COLS], const int ROWS, const int COLS, float minRand = 0, float maxRand = 100);
void Fill_rand(char arr[][COLS], const int ROWS, const int COLS, char minRand = 0, char maxRand = 100);

//������� ��� ���������� ��������
template <typename T> void Print(T arr[], const int SIZE);
//������� ��� ��������� ��������
template <typename T> void Print(T arr[][COLS], const int ROWS, const int COLS);

//������� ��� ���������� ��������
template <typename T> T Sum(T arr[], const int SIZE);
//������� ��� ��������� ��������
template <typename T> T Sum(T arr[][COLS], const int ROWS, const int COLS);

//������� ��� ���������� ��������
template <typename T> double Avg(T arr[], const int SIZE);
//������� ��� ��������� ��������
template <typename T> double Avg(T arr[][COLS], const int ROWS, const int COLS);

//������� ��� ���������� ��������
template <typename T> T min_value_in(T arr[], const int SIZE);
//������� ��� ��������� ��������
template <typename T> T min_value_in(T arr[][COLS], const int ROWS, const int COLS);

//������� ��� ���������� ��������
template <typename T> T max_value_in(T arr[], const int SIZE);
//������� ��� ��������� ��������
template <typename T> T max_value_in(T arr[][COLS], const int ROWS, const int COLS);

//������� ��� ���������� ��������
template <typename T> void shift_left(T arr[], const int SIZE, int shift);

//������� ��� ��������� ��������
template <typename T> void shift_left(T arr[][COLS], const int ROWS, const int COLS, int shift);

//������� ��� ���������� ��������
template <typename T> void shift_right(T arr[], const int SIZE, int shift);

//������� ��� ��������� ��������
template <typename T> void shift_right(T arr[][COLS], const int ROWS, const int COLS, int shift);

//������� ��� ���������� ��������
template <typename T> void Sort(T arr[], const int SIZE);

//������� ��� ��������� ��������
template <typename T> void Sort(T arr[][COLS], const int ROWS, const int COLS);

//������� ��� ���������� ��������
template <typename T> void Search(T arr[], const int SIZE);

//������� ��� ��������� ��������
template <typename T> void Search(T arr[][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "\t\tHomeWork FUNCTIONS. Overload function\n";
	cout << "\t\t***�������� ������� \"�������. ���������� �������. �������. ����� Templated.\"***\n\n";
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

	cout << "������ \"int\":\n";
	Fill_rand(arr_int, SIZE);
	Print(arr_int, SIZE);
	cout << "������ \"double\":\n";
	Fill_rand(arr_double, SIZE);
	Print(arr_double, SIZE);
	cout << "������ \"float\":\n";
	Fill_rand(arr_float, SIZE);
	Print(arr_float, SIZE);
	cout << "������ \"char\":\n";
	Fill_rand(arr_char, SIZE);
	Print(arr_char, SIZE);

	cout << "��� ����������� ������� ����� �������.\n"; input = _getch();

	cout << "��������� ������ \"int\":\n";
	Fill_rand(arr_2_int, ROWS, COLS);
	Print(arr_2_int, ROWS, COLS);
	cout << "��������� ������ \"double\":\n";
	Fill_rand(arr_2_double, ROWS, COLS);
	Print(arr_2_double, ROWS, COLS);
	cout << "��������� ������ \"float\":\n";
	Fill_rand(arr_2_float, ROWS, COLS);
	Print(arr_2_float, ROWS, COLS);
	cout << "��������� ������ \"char\":\n";
	Fill_rand(arr_2_char, ROWS, COLS);
	Print(arr_2_char, ROWS, COLS);

	cout << "��� ����������� ������� ����� �������.\n"; input = _getch();

	Print(arr_int, SIZE);
	cout << "\t����� ���� ��������� ����������� ������� \"int\" �����: " << Sum(arr_int, SIZE) << endl;
	Print(arr_double, SIZE);
	cout << "\t����� ���� ��������� ����������� ������� \"double\" �����: " << Sum(arr_double, SIZE) << endl;
	Print(arr_float, SIZE);
	cout << "\t����� ���� ��������� ����������� ������� \"float\" �����: " << Sum(arr_float, SIZE) << endl;
	Print(arr_char, SIZE);
	cout << "\t����� ���� ��������� ����������� ������� \"char\" �����: " << Sum(arr_char, SIZE) << endl;

	cout << "��� ����������� ������� ����� �������.\n"; input = _getch();

	Print(arr_2_int, ROWS, COLS);
	cout << "\t����� ���� ��������� ���������� ������� \"int\" �����: " << Sum(arr_2_int, ROWS, COLS) << endl;
	Print(arr_2_double, ROWS, COLS);
	cout << "\t����� ���� ��������� ���������� ������� \"double\" �����: " << Sum(arr_2_double, ROWS, COLS) << endl;
	Print(arr_2_float, ROWS, COLS);
	cout << "\t����� ���� ��������� ���������� ������� \"float\" �����: " << Sum(arr_2_float, ROWS, COLS) << endl;
	Print(arr_2_char, ROWS, COLS);
	cout << "\t����� ���� ��������� ���������� ������� \"char\" �����: " << Sum(arr_2_char, ROWS, COLS) << endl;

	cout << "��� ����������� ������� ����� �������.\n"; input = _getch();

	Print(arr_int, SIZE);
	cout << "\t������-�������������� �������� ����������� ������� \"int\" �����: " << Avg(arr_int, SIZE) << endl;
	Print(arr_double, SIZE);
	cout << "\t������-�������������� �������� ����������� ������� \"double\" �����: " << Avg(arr_double, SIZE) << endl;
	Print(arr_float, SIZE);
	cout << "\t������-�������������� �������� ����������� ������� \"float\" �����: " << Avg(arr_float, SIZE) << endl;
	Print(arr_char, SIZE);
	cout << "\t������-�������������� �������� ����������� ������� \"char\" �����: " << Avg(arr_char, SIZE) << endl;

	cout << "��� ����������� ������� ����� �������.\n"; input = _getch();

	Print(arr_2_int, ROWS, COLS);
	cout << "\t������-�������������� �������� ���������� ������� \"int\" �����: " << Avg(arr_2_int, ROWS, COLS) << endl;
	Print(arr_2_double, ROWS, COLS);
	cout << "\t������-�������������� �������� ���������� ������� \"double\" �����: " << Avg(arr_2_double, ROWS, COLS) << endl;
	Print(arr_2_float, ROWS, COLS);
	cout << "\t������-�������������� �������� ���������� ������� \"float\" �����: " << Avg(arr_2_float, ROWS, COLS) << endl;
	Print(arr_2_char, ROWS, COLS);
	cout << "\t������-�������������� �������� ���������� ������� \"char\" �����: " << Avg(arr_2_char, ROWS, COLS) << endl;

	cout << "��� ����������� ������� ����� �������.\n"; input = _getch();

	Print(arr_int, SIZE);
	cout << "\t����������� �������� ����������� ������� \"int\" �����: " << min_value_in(arr_int, SIZE) << endl;
	Print(arr_double, SIZE);
	cout << "\t����������� �������� ����������� ������� \"double\" �����: " << min_value_in(arr_double, SIZE) << endl;
	Print(arr_float, SIZE);
	cout << "\t����������� �������� ����������� ������� \"float\" �����: " << min_value_in(arr_float, SIZE) << endl;
	Print(arr_char, SIZE);
	cout << "\t����������� �������� ����������� ������� \"char\" �����: " << min_value_in(arr_char, SIZE) << endl;

	cout << "��� ����������� ������� ����� �������.\n"; input = _getch();

	Print(arr_2_int, ROWS, COLS);
	cout << "\t����������� �������� ���������� ������� \"int\" �����: " << min_value_in(arr_2_int, ROWS, COLS) << endl;
	Print(arr_2_double, ROWS, COLS);
	cout << "\t����������� �������� ���������� ������� \"double\" �����: " << min_value_in(arr_2_double, ROWS, COLS) << endl;
	Print(arr_2_float, ROWS, COLS);
	cout << "\t����������� �������� ���������� ������� \"float\" �����: " << min_value_in(arr_2_float, ROWS, COLS) << endl;
	Print(arr_2_char, ROWS, COLS);
	cout << "\t����������� �������� ���������� ������� \"char\" �����: " << min_value_in(arr_2_char, ROWS, COLS) << endl;

	cout << "��� ����������� ������� ����� �������.\n"; input = _getch();

	Print(arr_int, SIZE);
	cout << "\t������������ �������� ����������� ������� \"int\" �����: " << max_value_in(arr_int, SIZE) << endl;
	Print(arr_double, SIZE);
	cout << "\t������������ �������� ����������� ������� \"double\" �����: " << max_value_in(arr_double, SIZE) << endl;
	Print(arr_float, SIZE);
	cout << "\t������������ �������� ����������� ������� \"float\" �����: " << max_value_in(arr_float, SIZE) << endl;
	Print(arr_char, SIZE);
	cout << "\t������������ �������� ����������� ������� \"char\" �����: " << max_value_in(arr_char, SIZE) << endl;

	cout << "��� ����������� ������� ����� �������.\n"; input = _getch();

	Print(arr_2_int, ROWS, COLS);
	cout << "\t������������ �������� ���������� ������� \"int\" �����: " << max_value_in(arr_2_int, ROWS, COLS) << endl;
	Print(arr_2_double, ROWS, COLS);
	cout << "\t������������ �������� ���������� ������� \"double\" �����: " << max_value_in(arr_2_double, ROWS, COLS) << endl;
	Print(arr_2_float, ROWS, COLS);
	cout << "\t������������ �������� ���������� ������� \"float\" �����: " << max_value_in(arr_2_float, ROWS, COLS) << endl;
	Print(arr_2_char, ROWS, COLS);
	cout << "\t������������ �������� ���������� ������� \"char\" �����: " << max_value_in(arr_2_char, ROWS, COLS) << endl;

	cout << "��� ����������� ������� ����� �������.\n"; input = _getch();

	cout << "������� ��������, �� ������� ����� �������� ������ �����: "; cin >> shift;
	
	cout << "������ \"int\":\n";
	Print(arr_int, SIZE);
	shift_left(arr_int, SIZE, shift);
	Print(arr_int, SIZE);
	cout << "������ \"double\":\n";
	Print(arr_double, SIZE);
	shift_left(arr_double, SIZE, shift);
	Print(arr_double, SIZE);
	cout << "������ \"float\":\n";
	Print(arr_float, SIZE);
	shift_left(arr_float, SIZE, shift);
	Print(arr_float, SIZE);
	cout << "������ \"char\":\n";
	Print(arr_char, SIZE);
	shift_left(arr_char, SIZE, shift);
	Print(arr_char, SIZE);

	cout << "��� ����������� ������� ����� �������.\n"; input = _getch();

	cout << "������� ��������, �� ������� ����� �������� ��������� ������ �����: "; cin >> shift;
	cout << "��������� ������ \"int\":\n";
	Print(arr_2_int, ROWS, COLS);
	shift_left(arr_2_int, ROWS, COLS, shift);
	Print(arr_2_int, ROWS, COLS);
	cout << "��������� ������ \"double\":\n";
	Print(arr_2_double, ROWS, COLS);
	shift_left(arr_2_double, ROWS, COLS, shift);
	Print(arr_2_double, ROWS, COLS);
	cout << "��������� ������ \"float\":\n";
	Print(arr_2_float,ROWS, COLS);
	shift_left(arr_2_float, ROWS, COLS, shift);
	Print(arr_2_float,ROWS, COLS);
	cout << "��������� ������ \"char\":\n";
	Print(arr_2_char, ROWS, COLS);
	shift_left(arr_2_char, ROWS, COLS, shift);
	Print(arr_2_char, ROWS, COLS);

	cout << "��� ����������� ������� ����� �������\n"; input = _getch();

	cout << "������� ��������, �� ������� ����� �������� ���������� ������ ������: "; cin >> shift;
	cout << "������ \"int\":\n";
	Print(arr_int, SIZE);
	shift_right(arr_int, SIZE, shift);
	Print(arr_int, SIZE);
	cout << "������ \"double\":\n";
	Print(arr_double, SIZE);
	shift_right(arr_double, SIZE, shift);
	Print(arr_double, SIZE);
	cout << "������ \"float\":\n";
	Print(arr_float, SIZE);
	shift_right(arr_float, SIZE, shift);
	Print(arr_float, SIZE);
	cout << "������ \"char\":\n";
	Print(arr_char, SIZE);
	shift_right(arr_char, SIZE, shift);
	Print(arr_char, SIZE);

	cout << "��� ����������� ������� ����� �������\n"; input = _getch();

	cout << "������� ��������, �� ������� ����� �������� ��������� ������ ������: "; cin >> shift;

	cout << "��������� ������ \"int\":\n";
	Print(arr_2_int, ROWS, COLS);
	shift_right(arr_2_int, ROWS, COLS, shift);
	Print(arr_2_int, ROWS, COLS);
	cout << "��������� ������ \"double\":\n";
	Print(arr_2_double, ROWS, COLS);
	shift_right(arr_2_double, ROWS, COLS, shift);
	Print(arr_2_double, ROWS, COLS);
	cout << "��������� ������ \"float\":\n";
	Print(arr_2_float, ROWS, COLS);
	shift_right(arr_2_float, ROWS, COLS, shift);
	Print(arr_2_float, ROWS, COLS);
	cout << "��������� ������ \"char\":\n";
	Print(arr_2_char, ROWS, COLS);
	shift_right(arr_2_char, ROWS, COLS, shift);
	Print(arr_2_char, ROWS, COLS);

	cout << "��� ����������� ������� ����� �������\n"; input = _getch();

	cout << "\t\t���������� ����������� �������.\n";
	cout << "������ ���� \"int\":\n";
	Print(arr_int, SIZE);
	Sort(arr_int, SIZE);
	Print(arr_int, SIZE);
	cout << "������ ���� \"double\":\n";
	Print(arr_double, SIZE);
	Sort(arr_double, SIZE);
	Print(arr_double, SIZE);
	cout << "������ ���� \"float\":\n";
	Print(arr_float, SIZE);
	Sort(arr_float, SIZE);
	Print(arr_float, SIZE);
	cout << "������ ���� \"char\":\n";
	Print(arr_char, SIZE);
	Sort(arr_char, SIZE);
	Print(arr_char, SIZE);

	cout << "��� ����������� ������� ����� �������\n"; input = _getch();

	cout << "\t\t���������� ���������� ������� ���������.\n";
	cout << "������ ���� \"int\":\n";
	Print(arr_2_int, ROWS, COLS);
	Sort(arr_2_int, ROWS, COLS);
	Print(arr_2_int, ROWS, COLS);
	cout << "������ ���� \"double\":\n";
	Print(arr_2_double, ROWS, COLS);
	Sort(arr_2_double, ROWS, COLS);
	Print(arr_2_double, ROWS, COLS);
	cout << "������ ���� \"float\":\n";
	Print(arr_2_float, ROWS, COLS);
	Sort(arr_2_float, ROWS, COLS);
	Print(arr_2_float, ROWS, COLS);
	cout << "������ ���� \"char\":\n";
	Print(arr_2_char, ROWS, COLS);
	Sort(arr_2_char, ROWS, COLS);
	Print(arr_2_char, ROWS, COLS);

	cout << "��� ����������� ������� ����� �������\n"; input = _getch();

	cout << "\n\t����� ������������� �������� ������� \"int arr[]\":\n";
	Print(arr_int, SIZE);
	Search(arr_int, SIZE);
	cout << "\n\t����� ������������� �������� ������� \"double arr[]\":\n";
	Print(arr_double, SIZE);
	Search(arr_double, SIZE);
	cout << "\n\t����� ������������� �������� ������� \"float arr[]\":\n";
	Print(arr_float, SIZE);
	Search(arr_float, SIZE);
	cout << "\n\t����� ������������� �������� ������� \"char arr[]\":\n";
	Print(arr_char, SIZE);
	Search(arr_char, SIZE);

	cout << "��� ����������� ������� ����� �������\n"; input = _getch();

	cout << "\n\t����� ������������� �������� ���������� ������� \"int arr[][]\":\n";
	Print(arr_2_int, ROWS, COLS);
	Search(arr_2_int, ROWS, COLS);
	cout << "\n\t����� ������������� �������� ���������� ������� \"double arr[][]\":\n";
	Print(arr_2_double, ROWS, COLS);
	Search(arr_2_double, ROWS, COLS);
	cout << "\n\t����� ������������� �������� ���������� ������� \"float arr[][]\":\n";
	Print(arr_2_float, ROWS, COLS);
	Search(arr_2_float, ROWS, COLS);
	cout << "\n\t����� ������������� �������� ���������� ������� \"char arr[][]\":\n";
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
				cout << "\t��������: ";
				counting = false;
				printing = true;
			}
		}
		if (count > 0) cout << arr[i] << " ����������� " << count + 1 << (((count - 1) % 10 < 5 || (count - 1) % 10 > 1) ? " ����.\n" : " ���.\n");
	}
	if (!printing) cout << "������������� �������� �� ����������.\n";
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
						cout << "\t��������: ";
						counting = false;
						printing = true;
					}
				}
			}
			if (count > 0) cout << arr[i][j] << " ����������� " << count + 1 << (((count - 1) % 10 < 5 || (count - 1) % 10 > 1) ? " ����.\n" : " ���.\n");
		}
	}
	if (!printing) cout << "������������� �������� �� ����������.\n";
}
