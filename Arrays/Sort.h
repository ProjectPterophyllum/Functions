#pragma once
#include "const.h"
//Сортировка массива
template <typename T1>void Sort(T1 array[], const int N)
{
	T1 buffer = 0;
	for (int i = 1; i < N; i++)
	{
		for (int j = i; j > 0 && array[j - 1] > array[j]; j--)
		{
			buffer = array[j - 1];
			array[j - 1] = array[j];
			array[j] = buffer;
		}
	}
}
template <typename T1>void Sort(T1 array[N1][N2], const int N1, const int N2)
{
	T1 buffer = 0;
	for (int i = 0; i < N1; i++)
		for (int j = 0; j < N2; j++)
			for (int k = i; k < N1; k++)
				for (int l = k == i ? j + i : 0; l < N2; l++)
					if (array[i][j] > array[k][l])
					{
						buffer = array[k][l];
						array[k][l] = array[i][j];
						array[i][j] = buffer;
					}
}