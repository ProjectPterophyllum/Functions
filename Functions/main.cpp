#include <iostream>
using namespace std;

int Sum(int a, int b);
int Dif(int a, int b);
int Multiplication(int a, int b);
double Divide(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите числа: "; cin >> a >> b;
	int c = Sum(a, b);
	cout << "Сумма чисел: " << c;
	cout << "\nРазность чисел: " << Dif(a, b);
	cout << "\nПроизведение чисел: " << Multiplication(a, b);
	cout << "\nЧастное чисел: " << Divide(a, b);
}
int Sum(int a, int b)
{
	return a + b;
}
int Dif(int a, int b)
{
	return a - b;
}
int Multiplication(int a, int b)
{
	return a * b;
}
double Divide(int a, int b)
{
	return (double)a / b;
}

/*for (int i = 0; i < N1; i++)
	{
		for (int j = 1; j < N2; j++)
		{
			for (int k = j; k > 0 && array[i][k - 1] > array[i][k]; k--)
			{
				buffer = array[i][k - 1];
				array[i][k - 1] = array[i][k];
				array[i][k] = buffer;
			}
		}//Строки
	}*/
	/*for (int i = 0; i < N1; i++)
	{
		for (int j = 1; j < N2; j++)
		{
			for (int k = j; k > 0 && array[k - 1][i] > array[k][i]; k--)
			{
				buffer = array[k - 1][i];
				array[k - 1][i] = array[k][i];
				array[k][i] = buffer;
			}//Столбцы
		}
	}*/