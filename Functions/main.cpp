#include <iostream>
using namespace std;

int Sum(int a, int b);
int Dif(int a, int b);
int multiplication(int a, int b);
double Divide(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите числа: "; cin >> a >> b;
	int c = Sum(a, b);
	cout << "Сумма чисел: " << c;
	cout << "\nРазность чисел: " << Dif(a, b);
	cout << "\nПроизведение чисел: " << multiplication(a, b);
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
int multiplication(int a, int b)
{
	return a * b;
}
double Divide(int a, int b)
{
	return (double)a / b;
}