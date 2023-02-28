#include <iostream>
using namespace std;

const int N1 = 10;
const int N2 = 10;
//Вывод массива в консоль.
void Print(int array[], int N);
void Print(double array[], int N);
void Print(char array[], int N);
void Print(int array[N1][N2], int N1, int N2);
void Print(double array[N1][N2], int N1, int N2);
void Print(char array[N1][N2], int N1, int N2);
//Генерация случайного числа из диапазона.
int randomize(int start, int end);
double randomize(double start, double end);
char randomize(char start, char end);
//Заполнение массива случайными значениями.
void FillRand(int start, int end, int array[], const int N);
void FillRand(double start, double end, double array[], const int N);
void FillRand(char start, char end, char array[], const int N);
void FillRand(int start, int end, int array[N1][N2], const int N1, const int N2);
void FillRand(double start, double end, double array[N1][N2], const int N1, const int N2);
void FillRand(char start, char end, char array[N1][N2], const int N1, const int N2);
//Функция для заполнения массива уникальными значениями из диапазона.
void UniqueFillRand(int start, int end, int array[], const int N);
void UniqueFillRand(double start, double end, double array[], const int N);
void UniqueFillRand(char start, char end, char array[], const int N);
void UniqueFillRand(int start, int end, int array[N1][N2], const int N1, const int N2);
void UniqueFillRand(double start, double end, double array[N1][N2], const int N1, const int N2);
void UniqueFillRand(char start, char end, char array[N1][N2], const int N1, const int N2);
//Сумма всех чисел массива.
int Sum(int array[], const int N);
double Sum(double array[], const int N);
char Sum(char array[], const int N);
int Sum(int array[N1][N2], const int N1, const int N2);
double Sum(double array[N1][N2], const int N1, const int N2);
char Sum(char array[N1][N2], const int N1, const int N2);
//Среднее арифметическое значение в массиве.
int Avg(int array[], const int N);
double Avg(double array[], const int N);
char Avg(char array[], const int N);
int Avg(int array[N1][N2], const int N1, const int N2);
double Avg(double array[N1][N2], const int N1, const int N2);
char Avg(char array[N1][N2], const int N1, const int N2);
//Минимальное значение в массиве.
int minValueIn(int array[], const int N);
double minValueIn(double array[], const int N);
char minValueIn(char array[], const int N);
int minValueIn(int array[N1][N2], const int N1, const int N2);
double minValueIn(double array[N1][N2], const int N1, const int N2);
char minValueIn(char array[N1][N2], const int N1, const int N2);
//Максимальное значение в массиве.
int maxValueIn(int array[], const int N);
double maxValueIn(double array[], const int N);
char maxValueIn(char array[], const int N);
int maxValueIn(int array[N1][N2], const int N1, const int N2);
double maxValueIn(double array[N1][N2], const int N1, const int N2);
char maxValueIn(char array[N1][N2], const int N1, const int N2);
//Сдвиг массива влево.
void shiftLeft(int array[], const int N, int NumElem);
void shiftLeft(double array[], const int N, int NumElem);
void shiftLeft(char array[], const int N, int NumElem);
void shiftLeft(int array[N1][N2], int N1, int N2, int NumElem);
void shiftLeft(double array[N1][N2], int N1, int N2, int NumElem);
void shiftLeft(char array[N1][N2], int N1, int N2, int NumElem);
//Сдвиг массива вправо.
void shiftRight(int array[], const int N, int NumElem);
void shiftRight(double array[], const int N, int NumElem);
void shiftRight(char array[], const int N, int NumElem);
void shiftRight(int array[N1][N2], int N1, int N2, int NumElem);
void shiftRight(double array[N1][N2], int N1, int N2, int NumElem);
void shiftRight(char array[N1][N2], int N1, int N2, int NumElem);
//Сортировка массива
void Sort(int array[], const int N);
void Sort(double array[], const int N);
void Sort(char array[], const int N);
void Sort(int array[N1][N2], const int N1, const int N2);
void Sort(double array[N1][N2], const int N1, const int N2);
void Sort(char array[N1][N2], const int N1, const int N2);
//Функция поиска значения в массиве.
bool SearchTarget(int array[], int N, int TargetKey);
bool SearchTarget(double array[], int N, double TargetKey);
bool SearchTarget(char array[], int N, char TargetKey);
bool SearchTarget(int array[N1][N2], int N1, int N2, int TargetKey);
bool SearchTarget(double array[N1][N2], int N1, int N2, double TargetKey);
bool SearchTarget(char array[N1][N2], int N1, int N2, char TargetKey);
//Функция поиска дубликатов.
void Search(int array[], const int N);
void Search(double array[], const int N);
void Search(char array[], const int N);
void Search(int array[N1][N2], const int N1, const int N2);
void Search(double array[N1][N2], const int N1, const int N2);
void Search(char array[N1][N2], const int N1, const int N2);
//Главная функция.
void main()
{
	setlocale(LC_ALL, "");
	int array[N1][N2];
	UniqueFillRand(10, 100, array, N1, N2);
	Print(array, N1, N2);
	cout << endl;
	Sort(array, N1, N2);
	Print(array, N1, N2);
	Search(array, N1, N2);
}
//Вывод массива в консоль.
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
//Генерация случайного числа из диапазона
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
			} while (SearchTarget(array, i, j, uniq));
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
			} while (SearchTarget(array, i, j, uniq));
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
			} while (SearchTarget(array, i, j, uniq));
			array[i][j] = uniq;
		}
}
//Сумма всех чисел массива.
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
//Сдвиг массива влево
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
//Сортировка массива
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
			for (int k = 0; k < N1; k++)
				for (int l = 0; l < N2; l++)
					if (array[i][j] < array[k][l])
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
			for (int k = 0; k < N1; k++)
				for (int l = 0; l < N2; l++)
					if (array[i][j] < array[k][l])
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
			for (int k = 0; k < N1; k++)
				for (int l = 0; l < N2; l++)
					if (array[i][j] < array[k][l])
					{
						buffer = array[k][l];
						array[k][l] = array[i][j];
						array[i][j] = buffer;
					}
}
//Функция поиска дубликатов в массиве.
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