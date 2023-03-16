#include "stdfx.h"
#include "const.h"
#include "Print.h"
#include "FillRand.h"
#include "Sort.h"
#include "Shift.h"
#include "randomize.h"
#include "Search.h"
#include "statistics.h"

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
	cout << endl << "Max: " << maxValueIn(array, N1, N2)
		<< endl << "Min: " << minValueIn(array, N1, N2)
		<< endl << "Sum: " << Sum(array, N1, N2)
		<< endl << "Avg: " << Avg(array, N1, N2);

}


