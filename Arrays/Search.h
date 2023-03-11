#pragma once
//Функция поиска значения в массиве.
bool SearchTarget(int array[], int N, int TargetKey);
bool SearchTarget(double array[], int N, double TargetKey);
bool SearchTarget(char array[], int N, char TargetKey);
bool SearchTarget(int array[N1][N2], int N1, int N2, int TargetKey);
bool SearchTarget(double array[N1][N2], int N1, int N2, double TargetKey);
bool SearchTarget(char array[N1][N2], int N1, int N2, char TargetKey);
//Функция поиска дубликатов.
void Search(int array[], const int N);
void Search(double array[], const int N);
void Search(char array[], const int N);
void Search(int array[N1][N2], const int N1, const int N2);
void Search(double array[N1][N2], const int N1, const int N2);
void Search(char array[N1][N2], const int N1, const int N2);