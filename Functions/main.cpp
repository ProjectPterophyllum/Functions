#include <iostream>
using namespace std;

int Sum(int a, int b)
{
	return a + b;
}
int Dif(int a, int b)
{
	return a - b;
}
void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите числа: "; cin >> a >> b;
	int c = Sum(a, b);
	cout << "Сумма чисел: " << c;
	cout << "\nРазность чисел: " << Dif(a, b);
}