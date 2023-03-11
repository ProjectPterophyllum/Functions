//Сумма всех чисел массива.
#include "stdafx.h"
#include "constants.h"

int Sum(int array[], const int N)
{
	int sum = 0;
	for (int i = 0; i < N; i++) sum += array[i];
	return sum;
}
double Sum(double array[], const int N)
{
	double sum = 0;
	for (int i = 0; i < N; i++) sum += array[i];
	return sum;
}
char Sum(char array[], const int N)
{
	char sum = 0;
	for (int i = 0; i < N; i++) sum += array[i];
	return sum;
}
int Sum(int array[N1][N2], const int N1, const int N2)
{
	int sum = 0;
	for (int i = 0; i < N1; i++) for (int j = 0; j < N2; j++) sum += array[i][j];
	return sum;
}
double Sum(double array[N1][N2], const int N1, const int N2)
{
	double sum = 0;
	for (int i = 0; i < N1; i++) for (int j = 0; j < N2; j++) sum += array[i][j];
	return sum;
}
char Sum(char array[N1][N2], const int N1, const int N2)
{
	char sum = 0;
	for (int i = 0; i < N1; i++) for (int j = 0; j < N2; j++) sum += array[i][j];
	return sum;
}
//Среднее арифметическое значение в массиве.
int Avg(int array[], const int N)
{
	return (double)Sum(array, N) / N;
}
double Avg(double array[], const int N)
{
	return Sum(array, N) / N;
}
char Avg(char array[], const int N)
{
	return Sum(array, N) / N;
}
int Avg(int array[N1][N2], const int N1, const int N2)
{
	return (double)Sum(array, N1, N2) / N1 * N2;
}
double Avg(double array[N1][N2], const int N1, const int N2)
{
	return Sum(array, N1, N2) / N1 * N2;
}
char Avg(char array[N1][N2], const int N1, const int N2)
{
	return Sum(array, N1, N2) / N1 * N2;
}
//Минимальное значение в массиве
int minValueIn(int array[], const int N)
{
	int min = array[0];
	for (int i = 0; i < N; i++) if (array[i] < min) min = array[i];
	return min;
}
double minValueIn(double array[], const int N)
{
	double min = array[0];
	for (int i = 0; i < N; i++) if (array[i] < min) min = array[i];
	return min;
}
char minValueIn(char array[], const int N)
{
	char min = array[0];
	for (int i = 0; i < N; i++) if (array[i] < min) min = array[i];
	return min;
}
int minValueIn(int array[N1][N2], const int N1, const int N2)
{
	int min = array[0][0];
	for (int i = 0; i < N1; i++) for (int j = 0; j < N2; j++) if (array[i][j] < min) min = array[i][j];
	return min;
}
double minValueIn(double array[N1][N2], const int N1, const int N2)
{
	double min = array[0][0];
	for (int i = 0; i < N1; i++) for (int j = 0; j < N2; j++) if (array[i][j] < min) min = array[i][j];
	return min;
}
char minValueIn(char array[N1][N2], const int N1, const int N2)
{
	char min = array[0][0];
	for (int i = 0; i < N1; i++) for (int j = 0; j < N2; j++) if (array[i][j] < min) min = array[i][j];
	return min;
}
//Максимальное значение в массиве
int maxValueIn(int array[], const int N)
{
	int max = array[0];
	for (int i = 0; i < N; i++) if (array[i] > max) max = array[i];
	return max;
}
double maxValueIn(double array[], const int N)
{
	double max = array[0];
	for (int i = 0; i < N; i++) if (array[i] > max) max = array[i];
	return max;
}
char maxValueIn(char array[], const int N)
{
	char max = array[0];
	for (int i = 0; i < N; i++) if (array[i] > max) max = array[i];
	return max;
}
int maxValueIn(int array[N1][N2], const int N1, const int N2)
{
	int max = array[0][0];
	for (int i = 0; i < N1; i++) for (int j = 0; j < N2; j++) if (array[i][j] > max) max = array[i][j];
	return max;
}
double maxValueIn(double array[N1][N2], const int N1, const int N2)
{
	double max = array[0][0];
	for (int i = 0; i < N1; i++) for (int j = 0; j < N2; j++) if (array[i][j] > max) max = array[i][j];
	return max;
}
char maxValueIn(char array[N1][N2], const int N1, const int N2)
{
	char max = array[0][0];
	for (int i = 0; i < N1; i++) for (int j = 0; j < N2; j++) if (array[i][j] > max) max = array[i][j];
	return max;
}