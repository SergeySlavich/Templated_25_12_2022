//HOME WORK
#include"stdafx.h"
#include"constants.h"
#include"Fill_rand.h"
#include"Print.h"
#include"Shift.h"
#include"statistics.h"

//TODO:
//1. � ����� templated ��������������� ��� ������� ����� FillRand();
//2. �� ����� templated ������� ����� templated_separation, � � ���, ������� ��������� ������� � ��������� �����;

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
