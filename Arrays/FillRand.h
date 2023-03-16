#pragma once
#include "randomize.h"
#include "Search.h"
//Заполнение массива случайными значениями
template <typename T1>
void FillRand(T1 start, T1 end, T1 array[], const int N)
{
	for (int i = 0; i < N; i++) array[i] = randomize(start, end);
}
template <typename T1>
void FillRand(T1 start, T1 end, T1 array[N1][N2], const int N1, const int N2)
{
	for (int i = 0; i < N1; i++)
		for (int j = 0; j < N2; j++) array[i][j] = randomize(start, end);
}

//Функция для заполнения массива уникальными числами из диапазона.
template <typename T1>
void UniqueFillRand(T1 start, T1 end, T1 array[], const int N)
{
	if (end - start < N)
	{
		cout << "Диапазон Start-End не подходит для заполнения массива уникальными числами, массив будет заполнен с повторениями.\nПродолжить? Y/N" << endl;
		char choose = 0;
		cin >> choose;
		if (choose == 'Y' || choose == 'y')
			FillRand(start, end, array, N);
		return;
	}
	T1 uniq = 0;
	for (int i = 0; i < N; i++)
	{
		do
		{
			uniq = randomize(start, end);
		} while (SearchTarget(array, i, uniq));
		array[i] = uniq;
	}
}
template <typename T1>
void UniqueFillRand(T1 start, T1 end, T1 array[N1][N2], const int N1, const int N2)
{
	if (end - start < N1 * N2)
	{
		cout << "Диапазон Start-End не подходит для заполнения массива уникальными числами, массив будет заполнен с повторениями.\nПродолжить? Y/N" << endl;
		char choose = 0;
		cin >> choose;
		if (choose == 'Y' || choose == 'y')
			FillRand(start, end, array, N1, N2);
		return;
	}
	T1 uniq = 0;
	for (int i = 0; i < N1; i++)
		for (int j = 0; j < N2; j++)
		{
			do
			{
				uniq = randomize(start, end);
			} while (SearchTarget(array, N1, N2, uniq));
			array[i][j] = uniq;
		}
}