//Функция поиска дубликатов в массиве.
#include "stdafx.h"
#include "constants.h"
#include "Search.h"

void Search(int array[], const int N)
{
	int dynamicrange = 0;
	int count = 1;
	int* arr = new int[dynamicrange];
	for (int i = 0; i < N - 1; i++)
	{
		if (SearchTarget(arr, dynamicrange, array[i]))
			continue;
		else
		{
			for (int j = i + 1; j < N; j++)
			{
				if (array[i] == array[j])
				{
					count++;
				}
			}
			if (count > 1)
			{
				dynamicrange++;
				arr[dynamicrange - 1] = array[i];
				cout << "Число - " << arr[dynamicrange - 1] << " повторяется - " << count << " раз" << endl;
			}
			count = 1;
		}
	}
}
void Search(double array[], const int N)
{
	int dynamicrange = 0;
	int count = 1;
	double* arr = new double[dynamicrange];
	for (int i = 0; i < N - 1; i++)
	{
		if (SearchTarget(arr, dynamicrange, array[i]))
			continue;
		else
		{
			for (int j = i + 1; j < N; j++)
			{
				if (array[i] == array[j])
				{
					count++;
				}
			}
			if (count > 1)
			{
				dynamicrange++;
				arr[dynamicrange - 1] = array[i];
				cout << "Число - " << arr[dynamicrange - 1] << " повторяется - " << count << " раз" << endl;
			}
			count = 1;
		}
	}
}
void Search(char array[], const int N)
{
	int dynamicrange = 0;
	int count = 1;
	char* arr = new char[dynamicrange];
	for (int i = 0; i < N - 1; i++)
	{
		if (SearchTarget(arr, dynamicrange, array[i]))
			continue;
		else
		{
			for (int j = i + 1; j < N; j++)
			{
				if (array[i] == array[j])
				{
					count++;
				}
			}
			if (count > 1)
			{
				dynamicrange++;
				arr[dynamicrange - 1] = array[i];
				cout << "Число - " << arr[dynamicrange - 1] << " повторяется - " << count << " раз" << endl;
			}
			count = 1;
		}
	}
}
void Search(int array[N1][N2], const int N1, const int N2)
{
	int dynamicrange = 0;
	int count = 1;
	int* arr = new int[dynamicrange];
	for (int k = 0; k < N1; k++)
		for (int i = 0; i < N2 - 1; i++)
		{
			if (SearchTarget(arr, dynamicrange, array[k][i]))
				continue;
			else
			{
				for (int j = i + 1; j < N2; j++)
				{
					if (array[k][i] == array[k][j])
					{
						count++;
					}
				}
				if (count > 1)
				{
					dynamicrange++;
					arr[dynamicrange - 1] = array[k][i];
					cout << "Число - " << arr[dynamicrange - 1] << " повторяется - " << count << " раз" << endl;
				}
				count = 1;
			}
		}
}
void Search(double array[N1][N2], const int N1, const int N2)
{
	int dynamicrange = 0;
	int count = 1;
	double* arr = new double[dynamicrange];
	for (int k = 0; k < N1; k++)
		for (int i = 0; i < N2 - 1; i++)
		{
			if (SearchTarget(arr, dynamicrange, array[k][i]))
				continue;
			else
			{
				for (int j = i + 1; j < N2; j++)
				{
					if (array[k][i] == array[k][j])
					{
						count++;
					}
				}
				if (count > 1)
				{
					dynamicrange++;
					arr[dynamicrange - 1] = array[k][i];
					cout << "Число - " << arr[dynamicrange - 1] << " повторяется - " << count << " раз" << endl;
				}
				count = 1;
			}
		}
}
void Search(char array[N1][N2], const int N1, const int N2)
{
	int dynamicrange = 0;
	int count = 1;
	char* arr = new char[dynamicrange];
	for (int k = 0; k < N1; k++)
		for (int i = 0; i < N2 - 1; i++)
		{
			if (SearchTarget(arr, dynamicrange, array[k][i]))
				continue;
			else
			{
				for (int j = i + 1; j < N2; j++)
				{
					if (array[k][i] == array[k][j])
					{
						count++;
					}
				}
				if (count > 1)
				{
					dynamicrange++;
					arr[dynamicrange - 1] = array[k][i];
					cout << "Число - " << arr[dynamicrange - 1] << " повторяется - " << count << " раз" << endl;
				}
				count = 1;
			}
		}
}
//Функция поиска значения в массиве, возвращает true или false, если значение найдено/не найдено.
bool SearchTarget(int array[], int N, int TargetKey)
{
	for (int i = 0; i < N; i++)
		if (array[i] == TargetKey) return true;
	return false;
}
bool SearchTarget(double array[], int N, double TargetKey)
{
	for (int i = 0; i < N; i++)
		if (array[i] == TargetKey) return true;
	return false;
}
bool SearchTarget(char array[], int N, char TargetKey)
{
	for (int i = 0; i < N; i++)
		if (array[i] == TargetKey) return true;
	return false;
}
bool SearchTarget(int array[N1][N2], int N1, int N2, int TargetKey)
{
	for (int i = 0; i < N1; i++)
		for (int j = 0; j < N2; j++)
			if (array[i][j] == TargetKey) return true;
	return false;
}
bool SearchTarget(double array[N1][N2], int N1, int N2, double TargetKey)
{
	for (int i = 0; i < N1; i++)
		for (int j = 0; j < N2; j++)
			if (array[i][j] == TargetKey) return true;
	return false;
}
bool SearchTarget(char array[N1][N2], int N1, int N2, char TargetKey)
{
	for (int i = 0; i < N1; i++)
		for (int j = 0; j < N2; j++)
			if (array[i][j] == TargetKey) return true;
	return false;
}