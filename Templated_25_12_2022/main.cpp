//HOME WORK
#include"stdafx.h"
#include"constants.h"
#include"Fill_rand.h"
#include"Print.h"
#include"Print.cpp"
#include"Shift.h"
#include"Shift.cpp"
#include"statistics.h"
#include"statistics.cpp"
#include"sort.h"
#include"sort.cpp"
#include"search.h"
#include"search.cpp"

//TODO:
//1. � ����� templated ��������������� ��� ������� ����� FillRand();
//2. �� ����� templated ������� ����� templated_separation, � � ���, ������� ��������� ������� � ��������� �����;

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "\t\tHomeWork FUNCTIONS. Overload function\n";
	cout << "\t\t***�������� ������� \"�������. ���������� �������. �������. ����� Templated.\"***\n\n";
	const int SIZE = 10;
	int shift = 0;
	int min_rand, max_rand;
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