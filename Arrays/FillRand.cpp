//Генерация случайного числа из диапазона
#include "constants.h"
#include "stdafx.h"
#include "Search.h"
#include "FillRand.h"

int randomize(int start, int end)
{
	int random = 0;
	random = start + rand() % (end - start + 1);
	return random;
}
double randomize(double start, double end)
{
	double random = 0;
	random = start + ((double)rand() / (double)RAND_MAX) * (end - start + 0.01);
	return random;
}
char randomize(char start, char end)
{
	char random = 0;
	random = start + rand() % (end - start + 1);
	return random;
}
//Заполнение массива случайными значениями
void FillRand(int start, int end, int array[], const int N)
{
	for (int i = 0; i < N; i++) array[i] = randomize(start, end);
}
void FillRand(double start, double end, double array[], const int N)
{
	for (int i = 0; i < N; i++) array[i] = randomize(start, end);
}
void FillRand(char start, char end, char array[], const int N)
{
	for (int i = 0; i < N; i++) array[i] = randomize(start, end);
}
void FillRand(int start, int end, int array[N1][N2], const int N1, const int N2)
{
	for (int i = 0; i < N1; i++)
		for (int j = 0; j < N2; j++) array[i][j] = randomize(start, end);
}
void FillRand(double start, double end, double array[N1][N2], const int N1, const int N2)
{
	for (int i = 0; i < N1; i++)
		for (int j = 0; j < N2; j++) array[i][j] = randomize(start, end);
}
void FillRand(char start, char end, char array[N1][N2], const int N1, const int N2)
{
	for (int i = 0; i < N1; i++)
		for (int j = 0; j < N2; j++) array[i][j] = randomize(start, end);
}
//Функция для заполнения массива уникальными числами из диапазона.
void UniqueFillRand(int start, int end, int array[], const int N)
{
	if (end - start + 1 < N)
	{
		cout << "Диапазон Start-End не подходит для заполнения массива уникальными числами, массив будет заполнен с повторениями.\nПродолжить? Y/N" << endl;
		char choose = 0;
		cin >> choose;
		if (choose == 'Y' || choose == 'y')
			FillRand(start, end, array, N);
		return;
	}
	int uniq = 0;
	for (int i = 0; i < N; i++)
	{
		do
		{
			uniq = randomize(start, end);
		} while (SearchTarget(array, i, uniq));
		array[i] = uniq;
	}
}
void UniqueFillRand(double start, double end, double array[], const int N)
{
	double uniq = 0;
	for (int i = 0; i < N; i++)
	{
		do
		{
			uniq = randomize(start, end);
		} while (SearchTarget(array, i, uniq));
		array[i] = uniq;
	}
}
void UniqueFillRand(char start, char end, char array[], const int N)
{
	if (end - start + 1 < N)
	{
		cout << "Диапазон Start-End не подходит для заполнения массива уникальными числами, массив будет заполнен с повторениями.\nПродолжить? Y/N" << endl;
		char choose = 0;
		cin >> choose;
		if (choose == 'Y' || choose == 'y')
			FillRand(start, end, array, N);
		return;
	}
	char uniq = 0;
	for (int i = 0; i < N; i++)
	{
		do
		{
			uniq = randomize(start, end);
		} while (SearchTarget(array, i, uniq));
		array[i] = uniq;
	}
}
void UniqueFillRand(int start, int end, int array[N1][N2], const int N1, const int N2)
{
	if (end - start + 1 < N1 * N2)
	{
		cout << "Диапазон Start-End не подходит для заполнения массива уникальными числами, массив будет заполнен с повторениями.\nПродолжить? Y/N" << endl;
		char choose = 0;
		cin >> choose;
		if (choose == 'Y' || choose == 'y')
			FillRand(start, end, array, N1, N2);
		return;
	}
	int uniq = 0;
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
void UniqueFillRand(double start, double end, double array[N1][N2], const int N1, const int N2)
{
	double uniq = 0;
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
void UniqueFillRand(char start, char end, char array[N1][N2], const int N1, const int N2)
{
	if (end - start + 1 < N1 * N2)
	{
		cout << "Диапазон Start-End не подходит для заполнения массива уникальными числами, массив будет заполнен с повторениями.\nПродолжить? Y/N" << endl;
		char choose = 0;
		cin >> choose;
		if (choose == 'Y' || choose == 'y')
			FillRand(start, end, array, N1, N2);
		return;
	}
	char uniq = 0;
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
