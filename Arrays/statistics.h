#pragma once
#include "const.h"
//Сумма всех чисел массива.
template <typename T1>
T1 Sum(T1 array[], const int N)
{
	T1 sum = 0;
	for (int i = 0; i < N; i++) sum += array[i];
	return sum;
}
template <typename T1>
T1 Sum(T1 array[N1][N2], const int N1, const int N2)
{
	T1 sum = 0;
	for (int i = 0; i < N1; i++) for (int j = 0; j < N2; j++) sum += array[i][j];
	return sum;
}
//Среднее арифметическое значение в массиве.
template <typename T1>
double Avg(T1 array[], const int N)
{
	return (double)Sum(array, N) / N;
}
template <typename T1>
double Avg(T1 array[N1][N2], const int N1, const int N2)
{
	int a = N1 * N2;
	return (double)Sum(array, N1, N2) / a;
}
//Минимальное значение в массиве
template <typename T1>
T1 minValueIn(T1 array[], const int N)
{
	T1 min = array[0];
	for (int i = 0; i < N; i++) if (array[i] < min) min = array[i];
	return min;
}
template <typename T1>
T1 minValueIn(T1 array[N1][N2], const int N1, const int N2)
{
	T1 min = array[0][0];
	for (int i = 0; i < N1; i++) for (int j = 0; j < N2; j++) if (array[i][j] < min) min = array[i][j];
	return min;
}
//Максимальное значение в массиве
template <typename T1>
T1 maxValueIn(T1 array[], const int N)
{
	T1 max = array[0];
	for (int i = 0; i < N; i++) if (array[i] > max) max = array[i];
	return max;
}
template <typename T1>
T1 maxValueIn(T1 array[N1][N2], const int N1, const int N2)
{
	T1 max = array[0][0];
	for (int i = 0; i < N1; i++) for (int j = 0; j < N2; j++) if (array[i][j] > max) max = array[i][j];
	return max;
}