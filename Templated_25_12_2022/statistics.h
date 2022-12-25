#pragma once
#include "constants.h"

// ������� ��� ���������� ��������
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