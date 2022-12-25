#pragma once
#include"stdafx.h"
#include"constants.h"

//Функции для одномерных массивов
template <typename T> void Print(T arr[], const int SIZE);
//Функции для двумерных массивов
template <typename T> void Print(T arr[][COLS], const int ROWS, const int COLS);