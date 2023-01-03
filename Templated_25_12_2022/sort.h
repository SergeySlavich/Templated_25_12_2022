#pragma once
#include"constants.h"

//Функции для одномерных массивов
template <typename T> void Sort(T arr[], const int SIZE);

//Функции для двумерных массивов
template <typename T> void Sort(T arr[][COLS], const int ROWS, const int COLS);