#pragma once
#include "constants.h"

// Функции для одномерных массивов
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