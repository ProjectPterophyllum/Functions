#include "stdfx.h"
#include "const.h"
#include "Print.h"
#include "FillRand.h"
#include "Sort.h"
#include "Shift.h"
#include "randomize.h"
////Вывод массива в консоль.
//template <typename T1>
//void Print(T1 array[], int N);
//template <typename T1>
//void Print(T1 array[N1][N2], int N1, int N2);
//Заполнение массива случайными значениями.
//template <typename T1>
//void FillRand(T1 start, T1 end, T1 array[], const int N);
//template <typename T1>
//void FillRand(T1 start, T1 end, T1 array[N1][N2], const int N1, const int N2);
////Функция для заполнения массива уникальными значениями из диапазона.
//template <typename T1>
//void UniqueFillRand(T1 start, T1 end, T1 array[], const int N);
//template <typename T1>
//void UniqueFillRand(T1 start, T1 end, T1 array[N1][N2], const int N1, const int N2);
//Сумма всех чисел массива.
//template <typename T1>
//T1 Sum(T1 array[], const int N);
//template <typename T1>
//T1 Sum(T1 array[N1][N2], const int N1, const int N2);
////Среднее арифметическое значение в массиве.
//template <typename T1>
//T1 Avg(T1 array[], const int N);
//template <typename T1>
//T1 Avg(T1 array[N1][N2], const int N1, const int N2);
////Минимальное значение в массиве.
//template <typename T1>
//T1 minValueIn(T1 array[], const int N);
//template <typename T1>
//T1 minValueIn(T1 array[N1][N2], const int N1, const int N2);
////Максимальное значение в массиве.
//template <typename T1>
//T1 maxValueIn(T1 array[], const int N);
//template <typename T1>
//T1 maxValueIn(T1 array[N1][N2], const int N1, const int N2);
//Сдвиг массива влево.
//template <typename T1>
//void shiftLeft(T1 array[], const int N, int NumElem);
//template <typename T1>
//void shiftLeft(T1 array[N1][N2], int N1, int N2, int NumElem);
////Сдвиг массива вправо.
//template <typename T1>
//void shiftRight(T1 array[], const int N, int NumElem);
//template <typename T1>
//void shiftRight(T1 array[N1][N2], int N1, int N2, int NumElem);
//Сортировка массива
//template <typename T1>
//void Sort(T1 array[], const int N);
//template <typename T1>
//void Sort(T1 array[N1][N2], const int N1, const int N2);
////Функция поиска значения в массиве.
//template <typename T1>
//bool SearchTarget(T1 array[], int N, T1 TargetKey);
//template <typename T1>
//bool SearchTarget(T1 array[N1][N2], int N1, int N2, T1 TargetKey);
////Функция поиска дубликатов.
//template <typename T1>
//void Search(T1 array[], const int N);
//template <typename T1>
//void Search(T1 array[N1][N2], const int N1, const int N2);
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


