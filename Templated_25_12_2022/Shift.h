#pragma once
#include "stdafx.h"
#include "constants.h"

//Функции для одномерных массивов
template <typename T> void shift_left(T arr[], const int SIZE, int shift);

//Функции для двумерных массивов
template <typename T> void shift_left(T arr[][COLS], const int ROWS, const int COLS, int shift);

//Функции для одномерных массивов
template <typename T> void shift_right(T arr[], const int SIZE, int shift);

//Функции для двумерных массивов
template <typename T> void shift_right(T arr[][COLS], const int ROWS, const int COLS, int shift);