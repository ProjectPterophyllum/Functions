#include <iostream>
using namespace std;
//Перегрузку и для двумерных массивов сделаю потом, мало времени из-за работы.
void Print(int array[], const int N);//Вывод массива в консоль.
int randomize(int start, int end);//Генерация случайного числа из диапазона.
void FillRand(int start, int end, int array[], const int N);//Заполнение массива случайными числами.
void UniqueFillRand(int start, int end, int array[], const int N);//Функция для заполнения массива уникальными числами из диапазона.
float Sum(int array[], const int N);//Сумма всех чисел массива.
float Avg(int array[], const int N);//Среднее арифметическое значение в массиве.
int minValueIn(int array[], const int N);//Минимальное значение в массиве.
int maxValueIn(int array[], const int N);//Максимальное значение в массиве.
void shiftLeft(int array[], const int N, int NumElem);//Сдвиг массива влево.
void shiftRight(int array[], const int N, int NumElem);//Сдвиг массива вправо.
void Sort(int array[], const int N);//Сортировка массива
bool SearchTarget(int array[], int N, int TargetKey);//Функция поиска значения в массиве.
void Search(int array[], const int N);//Функция поиска дубликатов в массиве.
void main()
{
	setlocale(LC_ALL, "");
	const int N = 10;
	int array[N];
	UniqueFillRand(1, 5, array, N);
	Print(array, N);
	Search(array, N);
}
void Print(int array[], const int N)//Вывод массива в консоль.
{
	for (int i = 0; i < N; i++)
		cout << array[i] << " ";
	cout << endl;
}
int randomize(int start, int end)//Генерация случайного числа из диапазона.
{
	int random = 0;
	random = start + rand() % (end - start + 1);
	return random;
}
void FillRand(int start, int end, int array[], const int N)//Заполнение массива случайными числами
{
	for (int i = 0; i < N; i++)
		array[i] = randomize(start, end);
}
void UniqueFillRand(int start, int end, int array[], const int N)//Функция для заполнения массива уникальными числами из диапазона.
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
	srand(time(NULL));
	int uniq = 0;
	for (int i = 0; i < N; i++)
	{
		do
		{
			uniq = randomize(start, end);
			array[i] = uniq;
		} while (SearchTarget(array, i, uniq));
	}
} 
float Sum(int array[], const int N)//Сумма всех чисел массива.
{
	float sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += array[i];
	}
	return sum;
}
float Avg(int array[], const int N)//Среднее арифметическое значение в массиве.
{
	float Mar = 0;
	return Mar = Sum(array, N) / N;
}
int minValueIn(int array[], const int N)//Минимальное значение в массиве
{
	int min = array[0];
	for (int i = 0; i < N; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}
int maxValueIn(int array[], const int N)//Максимальное значение в массиве
{
	int max = array[0];
	for (int i = 0; i < N; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}
void shiftLeft(int array[], const int N, int NumElem)//Сдвиг массива влево
{
	for (int j = 0; j < NumElem; j++)
	{
		int tmp = array[0];
		for (int i = 0; i < N - 1; i++)
		{
			array[i] = array[i + 1];
		}
		array[N - 1] = tmp;
	}
}
void shiftRight(int array[], const int N, int NumElem)//Сдвиг массива вправо
{
	for (int j = 0; j < NumElem; j++)
	{
		int tmp = array[N - 1];
		for (int i = N - 2; i >= 0; i--)
		{
			array[i + 1] = array[i];
		}
		array[0] = tmp;
	}
}
void Sort(int array[], const int N)//Сортировка массива
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
void Search(int array[], const int N)//Функция поиска дубликатов в массиве.PS.Возможно не самая лучшая реализация, но я хотел попробовать что такое динамический массив и как он будет работать в таких условиях.
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
bool SearchTarget(int array[], int N, int TargetKey)//Функция поиска значения в массиве, возвращает true или false, если значение найдено/не найдено.
{
	for (int i = 0; i < N; i++)
	{
		if (array[i] == TargetKey)
		{
			return true;
		}
	}
	return false;
}