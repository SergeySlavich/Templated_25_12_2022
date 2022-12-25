#pragma once
#include"stdafx.h"
#include"constants.h"

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