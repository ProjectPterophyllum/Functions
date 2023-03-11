#include "stdafx.h"
#include "constants.h"
#include "Staticstics.h"
#include "FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Search.h"
#include "Shift.h"

//Главная функция.
void main()
{
	setlocale(LC_ALL, "");
	int array[N1][N2];
	UniqueFillRand(0, 101, array, N1, N2);
	Print(array, N1, N2);
	cout << endl;
	Sort(array, N1, N2);
	Print(array, N1, N2);
	Search(array, N1, N2);
	cout << endl << "Минимальное значение: " << minValueIn(array, N1, N2)
		<< endl << "Максимальное значение: " << maxValueIn(array, N1, N2) 
		<< endl;
	shiftLeft(array, N1, N2, 3);
	Print(array, N1, N2);
}