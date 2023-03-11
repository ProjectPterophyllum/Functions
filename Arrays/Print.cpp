//Вывод массива в консоль.
#include "stdafx.h"
#include "constants.h"
void Print(int array[], const int N)
{
	for (int i = 0; i < N; i++) cout << array[i] << " ";
	cout << endl;
}
void Print(double array[], const int N)
{
	for (int i = 0; i < N; i++) cout << array[i] << " ";
	cout << endl;
}
void Print(char array[], const int N)
{
	for (int i = 0; i < N; i++) cout << array[i] << " ";
	cout << endl;
}
void Print(int array[N1][N2], const int N1, const int N2)
{
	for (int i = 0; i < N1; i++)
	{
		for (int j = 0; j < N2; j++) cout << array[i][j] << "\t";
		cout << endl;
	}
}
void Print(double array[N1][N2], const int N1, const int N2)
{
	for (int i = 0; i < N1; i++)
	{
		for (int j = 0; j < N2; j++) cout << array[i][j] << "\t";
		cout << endl;
	}
}
void Print(char array[N1][N2], const int N1, const int N2)
{
	for (int i = 0; i < N1; i++)
	{
		for (int j = 0; j < N2; j++) cout << array[i][j] << "\t";
		cout << endl;
	}
}