#pragma once
//Сдвиг массива влево
template <typename T1>
void shiftLeft(T1 array[], const int N, int NumElem)
{
	for (int j = 0; j < NumElem; j++)
	{
		T1 tmp = array[0];
		for (int i = 0; i < N - 1; i++) array[i] = array[i + 1];
		array[N - 1] = tmp;
	}
}
template <typename T1>
void shiftLeft(T1 array[N1][N2], int N1, int N2, int NumElem)
{
	for (int k = 0; k < NumElem; k++)
	{
		T1 tmp = array[0][0];
		for (int j = 0; j < N1; j++)
		{
			for (int i = 0; i < N2 - 1; i++) array[j][i] = array[j][i + 1];
			if (j < N1 - 1) array[j][N2 - 1] = array[j + 1][0];
		}
		array[N1 - 1][N2 - 1] = tmp;
	}
}
//Сдвиг массива вправо
template <typename T1>
void shiftRight(T1 array[], const int N, int NumElem)
{
	for (int j = 0; j < NumElem; j++)
	{
		T1 tmp = array[N - 1];
		for (int i = N - 2; i >= 0; i--) array[i + 1] = array[i];
		array[0] = tmp;
	}
}
template <typename T1>
void shiftRight(T1 array[N1][N2], int N1, int N2, int NumElem)
{
	for (int k = 0; k < NumElem; k++)
	{
		T1 tmp = array[N1 - 1][N2 - 1];
		for (int j = N1 - 1; j >= 0; j--)
		{
			for (int i = N2 - 1; i >= 0; i--) array[j][i] = array[j][i - 1];
			if (j > 0) array[j][0] = array[j - 1][N2 - 1];
		}
		array[0][0] = tmp;
	}
}
