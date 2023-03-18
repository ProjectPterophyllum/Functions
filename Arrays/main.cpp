#include <iostream>
using namespace std;

const int N1 = 10;
const int N2 = 10;
//Вывод массива в консоль.
template <typename T1>void Print(T1 array[], int N);
template <typename T1>void Print(T1 array[N1][N2], int N1, int N2);
//Генерация случайного числа из диапазона.
int randomize(int start, int end);
double randomize(double start, double end);
char randomize(char start, char end);
//Заполнение массива случайными значениями.
template <typename T1>void FillRand(T1 start, T1 end, T1 array[], const int N);
template <typename T1>void FillRand(T1 start, T1 end, T1 array[N1][N2], const int N1, const int N2);
//Функция для заполнения массива уникальными значениями из диапазона.
template <typename T1>void UniqueFillRand(T1 start, T1 end, T1 array[], const int N);
template <typename T1>void UniqueFillRand(T1 start, T1 end, T1 array[N1][N2], const int N1, const int N2);
//Сумма всех чисел массива.
template <typename T1>T1 Sum(T1 array[], const int N);
template <typename T1>T1 Sum(T1 array[N1][N2], const int N1, const int N2);
//Среднее арифметическое значение в массиве.
template <typename T1>T1 Avg(T1 array[], const int N);
template <typename T1>T1 Avg(T1 array[N1][N2], const int N1, const int N2);
//Минимальное значение в массиве.
template <typename T1>T1 minValueIn(T1 array[], const int N);
template <typename T1>T1 minValueIn(T1 array[N1][N2], const int N1, const int N2);
//Максимальное значение в массиве.
template <typename T1>T1 maxValueIn(T1 array[], const int N);
template <typename T1>T1 maxValueIn(T1 array[N1][N2], const int N1, const int N2);
//Сдвиг массива влево.
template <typename T1>void shiftLeft(T1 array[], const int N, int NumElem);
template <typename T1>void shiftLeft(T1 array[N1][N2], int N1, int N2, int NumElem);
//Сдвиг массива вправо.
template <typename T1>void shiftRight(T1 array[], const int N, int NumElem);
template <typename T1>void shiftRight(T1 array[N1][N2], int N1, int N2, int NumElem);
//Сортировка массива
template <typename T1>void Sort(T1 array[], const int N);
template <typename T1>void Sort(T1 array[N1][N2], const int N1, const int N2);
//Функция поиска значения в массиве.
template <typename T1>bool SearchTarget(T1 array[], int N, T1 TargetKey);
template <typename T1>bool SearchTarget(T1 array[N1][N2], int N1, int N2, T1 TargetKey);
//Функция поиска дубликатов.
template <typename T1>void Search(T1 array[], const int N);
template <typename T1>void Search(T1 array[N1][N2], const int N1, const int N2);
//Главная функция.
void main()
{
	setlocale(LC_ALL, "");
	int array[N1][N2];
	UniqueFillRand(10, 15, array, N1, N2);
	Print(array, N1, N2);
	cout << endl;
	Sort(array, N1, N2);
	Print(array, N1, N2);
	Search(array, N1, N2);
}
//Вывод массива в консоль.
template <typename T1>void Print(T1 array[], const int N)
{
	for (int i = 0; i < N; i++) cout << array[i] << " ";
	cout << endl;
}
template <typename T1>void Print(T1 array[N1][N2], const int N1, const int N2)
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
template <typename T1>void FillRand(T1 start, T1 end, T1 array[], const int N)
{
	for (int i = 0; i < N; i++) array[i] = randomize(start, end);
}
template <typename T1>void FillRand(T1 start, T1 end, T1 array[N1][N2], const int N1, const int N2)
{
	for (int i = 0; i < N1; i++)
		for (int j = 0; j < N2; j++) array[i][j] = randomize(start, end);
}
//Функция для заполнения массива уникальными числами из диапазона.
template <typename T1>void UniqueFillRand(T1 start, T1 end, T1 array[], const int N)
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
template <typename T1>void UniqueFillRand(T1 start, T1 end, T1 array[N1][N2], const int N1, const int N2)
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
//Сумма всех чисел массива.
template <typename T1>T1 Sum(T1 array[], const int N)
{
	T1 sum = 0;
	for (int i = 0; i < N; i++) sum += array[i];
	return sum;
}
template <typename T1>T1 Sum(T1 array[N1][N2], const int N1, const int N2)
{
	T1 sum = 0;
	for (int i = 0; i < N1; i++) for (int j = 0; j < N2; j++) sum += array[i][j];
	return sum;
}
//Среднее арифметическое значение в массиве.
template <typename T1>double Avg(int array[], const int N)
{
	return (double)Sum(array, N) / N;
}
template <typename T1>double Avg(T1 array[N1][N2], const int N1, const int N2)
{
	return (double)Sum(array, N1, N2) / N1 * N2;
}
//Минимальное значение в массиве
template <typename T1>T1 minValueIn(T1 array[], const int N)
{
	T1 min = array[0];
	for (int i = 0; i < N; i++) if (array[i] < min) min = array[i];
	return min;
}
template <typename T1>T1 minValueIn(T1 array[N1][N2], const int N1, const int N2)
{
	T1 min = array[0][0];
	for (int i = 0; i < N1; i++) for (int j = 0; j < N2; j++) if (array[i][j] < min) min = array[i][j];
	return min;
}
//Максимальное значение в массиве
template <typename T1>T1 maxValueIn(T1 array[], const int N)
{
	T1 max = array[0];
	for (int i = 0; i < N; i++) if (array[i] > max) max = array[i];
	return max;
}
template <typename T1>T1 maxValueIn(T1 array[N1][N2], const int N1, const int N2)
{
	T1 max = array[0][0];
	for (int i = 0; i < N1; i++) for (int j = 0; j < N2; j++) if (array[i][j] > max) max = array[i][j];
	return max;
}
//Сдвиг массива влево
template <typename T1>void shiftLeft(T1 array[], const int N, int NumElem)
{
	for (int j = 0; j < NumElem; j++)
	{
		T1 tmp = array[0];
		for (int i = 0; i < N - 1; i++) array[i] = array[i + 1];
		array[N - 1] = tmp;
	}
}
template <typename T1>void shiftLeft(T1 array[N1][N2], int N1, int N2, int NumElem)
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
template <typename T1>void shiftRight(T1 array[], const int N, int NumElem)
{
	for (int j = 0; j < NumElem; j++)
	{
		T1 tmp = array[N - 1];
		for (int i = N - 2; i >= 0; i--) array[i + 1] = array[i];
		array[0] = tmp;
	}
}
template <typename T1>void shiftRight(T1 array[N1][N2], int N1, int N2, int NumElem)
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
//Функция поиска дубликатов в массиве.
template <typename T1>void Search(T1 array[], const int N)
{
	int dynamicrange = 1;
	int count = 1;
	T1* arr = new T1[dynamicrange];
	for (int i = 0; i < N - 1; i++)
	{
		if (SearchTarget(arr, dynamicrange, array[i]))
			continue;
		for (int j = i + 1; j < N; j++)
		{
			if (array[i] == array[j])
			{
				count++;
			}
		}
		if (count > 1)
		{
			arr[dynamicrange - 1] = array[i];
			cout << "Число - " << arr[dynamicrange - 1] << " повторяется - " << count << " раз" << endl;
			dynamicrange++;
		}
		count = 1;
	}
}
template <typename T1>void Search(T1 array[N1][N2], const int N1, const int N2)
{
	int dynamicrange = 1;
	int count = 1;
	T1* arr = new T1[dynamicrange];
	for (int k = 0; k < N1; k++)
		for (int i = 0; i < N2 - 1; i++)
		{
			if (SearchTarget(arr, dynamicrange, array[k][i]))
				continue;
			for (int j = i + 1; j < N2; j++)
			{
				if (array[k][i] == array[k][j])
				{
					count++;
				}
			}
			if (count > 1)
			{
				arr[dynamicrange - 1] = array[k][i];
				cout << "Число - " << arr[dynamicrange - 1] << " повторяется - " << count << " раз" << endl;
				dynamicrange++;
			}
			count = 1;
		}
}
//Функция поиска значения в массиве, возвращает true или false, если значение найдено/не найдено.
template <typename T1>bool SearchTarget(T1 array[], int N, T1 TargetKey)
{
	for (int i = 0; i < N; i++)
		if (array[i] == TargetKey) return true;
	return false;
}
template <typename T1>bool SearchTarget(T1 array[N1][N2], int N1, int N2, T1 TargetKey)
{
	for (int i = 0; i < N1; i++)
		for (int j = 0; j < N2; j++)
			if (array[i][j] == TargetKey) return true;
	return false;
}