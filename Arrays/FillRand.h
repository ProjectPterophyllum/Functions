#pragma once
//«аполнение массива случайными значени€ми
void FillRand(int start, int end, int array[], const int N);
void FillRand(double start, double end, double array[], const int N);
void FillRand(char start, char end, char array[], const int N);
void FillRand(int start, int end, int array[N1][N2], const int N1, const int N2);
void FillRand(double start, double end, double array[N1][N2], const int N1, const int N2);
void FillRand(char start, char end, char array[N1][N2], const int N1, const int N2);
//‘ункци€ дл€ заполнени€ массива уникальными значени€ми из диапазона.
void UniqueFillRand(int start, int end, int array[], const int N);
void UniqueFillRand(double start, double end, double array[], const int N);
void UniqueFillRand(char start, char end, char array[], const int N);
void UniqueFillRand(int start, int end, int array[N1][N2], const int N1, const int N2);
void UniqueFillRand(double start, double end, double array[N1][N2], const int N1, const int N2);
void UniqueFillRand(char start, char end, char array[N1][N2], const int N1, const int N2);
//√енераци€ случайного числа из диапазона.
int randomize(int start, int end);
double randomize(double start, double end);
char randomize(char start, char end);