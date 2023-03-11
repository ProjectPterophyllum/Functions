//Сортировка массива
#include "stdafx.h"
#include "constants.h"

void Sort(int array[], const int N)
{
	int buffer = 0;
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
void Sort(double array[], const int N)
{
	double buffer = 0;
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
void Sort(char array[], const int N)
{
	char buffer = 0;
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
void Sort(int array[N1][N2], const int N1, const int N2)
{
	int buffer = 0;
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
void Sort(double array[N1][N2], const int N1, const int N2)
{
	double buffer = 0;
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
void Sort(char array[N1][N2], const int N1, const int N2)
{
	char buffer = 0;
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
