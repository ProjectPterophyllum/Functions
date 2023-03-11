//Сдвиг массива влево
#include "constants.h"
#include "stdafx.h"
void shiftLeft(int array[], const int N, int NumElem)
{
	for (int j = 0; j < NumElem; j++)
	{
		int tmp = array[0];
		for (int i = 0; i < N - 1; i++) array[i] = array[i + 1];
		array[N - 1] = tmp;
	}
}
void shiftLeft(double array[], const int N, int NumElem)
{
	for (int j = 0; j < NumElem; j++)
	{
		double tmp = array[0];
		for (int i = 0; i < N - 1; i++) array[i] = array[i + 1];
		array[N - 1] = tmp;
	}
}
void shiftLeft(char array[], const int N, int NumElem)
{
	for (int j = 0; j < NumElem; j++)
	{
		char tmp = array[0];
		for (int i = 0; i < N - 1; i++) array[i] = array[i + 1];
		array[N - 1] = tmp;
	}
}
void shiftLeft(int array[N1][N2], int N1, int N2, int NumElem)
{
	for (int k = 0; k < NumElem; k++)
	{
		int tmp = array[0][0];
		for (int j = 0; j < N1; j++)
		{
			for (int i = 0; i < N2 - 1; i++) array[j][i] = array[j][i + 1];
			if (j < N1 - 1) array[j][N2 - 1] = array[j + 1][0];
		}
		array[N1 - 1][N2 - 1] = tmp;
	}
}
void shiftLeft(double array[N1][N2], int N1, int N2, int NumElem)
{
	for (int k = 0; k < NumElem; k++)
	{
		double tmp = array[0][0];
		for (int j = 0; j < N1; j++)
		{
			for (int i = 0; i < N2 - 1; i++) array[j][i] = array[j][i + 1];
			if (j < N1 - 1) array[j][N2 - 1] = array[j + 1][0];
		}
		array[N1 - 1][N2 - 1] = tmp;
	}
}
void shiftLeft(char array[N1][N2], int N1, int N2, int NumElem)
{
	for (int k = 0; k < NumElem; k++)
	{
		char tmp = array[0][0];
		for (int j = 0; j < N1; j++)
		{
			for (int i = 0; i < N2 - 1; i++) array[j][i] = array[j][i + 1];
			if (j < N1 - 1) array[j][N2 - 1] = array[j + 1][0];
		}
		array[N1 - 1][N2 - 1] = tmp;
	}
}
//Сдвиг массива вправо
void shiftRight(int array[], const int N, int NumElem)
{
	for (int j = 0; j < NumElem; j++)
	{
		int tmp = array[N - 1];
		for (int i = N - 2; i >= 0; i--) array[i + 1] = array[i];
		array[0] = tmp;
	}
}
void shiftRight(double array[], const int N, int NumElem)
{
	for (int j = 0; j < NumElem; j++)
	{
		double tmp = array[N - 1];
		for (int i = N - 2; i >= 0; i--) array[i + 1] = array[i];
		array[0] = tmp;
	}
}
void shiftRight(char array[], const int N, int NumElem)
{
	for (int j = 0; j < NumElem; j++)
	{
		char tmp = array[N - 1];
		for (int i = N - 2; i >= 0; i--) array[i + 1] = array[i];
		array[0] = tmp;
	}
}
void shiftRight(int array[N1][N2], int N1, int N2, int NumElem)
{
	for (int k = 0; k < NumElem; k++)
	{
		int tmp = array[N1 - 1][N2 - 1];
		for (int j = N1 - 1; j >= 0; j--)
		{
			for (int i = N2 - 1; i >= 0; i--) array[j][i] = array[j][i - 1];
			if (j > 0) array[j][0] = array[j - 1][N2 - 1];
		}
		array[0][0] = tmp;
	}
}
void shiftRight(double array[N1][N2], int N1, int N2, int NumElem)
{
	for (int k = 0; k < NumElem; k++)
	{
		double tmp = array[N1 - 1][N2 - 1];
		for (int j = N1 - 1; j >= 0; j--)
		{
			for (int i = N2 - 1; i >= 0; i--) array[j][i] = array[j][i - 1];
			if (j > 0) array[j][0] = array[j - 1][N2 - 1];
		}
		array[0][0] = tmp;
	}
}
void shiftRight(char array[N1][N2], int N1, int N2, int NumElem)
{
	for (int k = 0; k < NumElem; k++)
	{
		char tmp = array[N1 - 1][N2 - 1];
		for (int j = N1 - 1; j >= 0; j--)
		{
			for (int i = N2 - 1; i >= 0; i--) array[j][i] = array[j][i - 1];
			if (j > 0) array[j][0] = array[j - 1][N2 - 1];
		}
		array[0][0] = tmp;
	}
}
