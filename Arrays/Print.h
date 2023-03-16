#pragma once
#include "const.h"
//Вывод массива в консоль.
template <typename T1>
void Print(T1 array[], const int N)
{
	for (int i = 0; i < N; i++) cout << array[i] << " ";
	cout << endl;
}
template <typename T1>
void Print(T1 array[N1][N2], const int N1, const int N2)
{
	for (int i = 0; i < N1; i++)
	{
		for (int j = 0; j < N2; j++) cout << array[i][j] << "\t";
		cout << endl;
	}
}