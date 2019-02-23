#include <iostream>
#include <iomanip>
#include<math.h>
#include<ctime>
// #include"stdafx.h"

using namespace std;

// 1.	*Написать программу, которая содержит функцию,
// принимающую в качестве аргумента, указатель на массив и размер массива,
// и заменяет все отрицательные элементы на 0.

void neg_to_zero(int *a, int n) {
	for (int* p = a; p < a + n; p++)
		if (*p < 0) *p = 0;
}

// 2.	*Написать программу, которая содержит функцию,
// принимающую в качестве аргумента, указатель на массив и размер массива,
// и заменяет все четные элементы на - 1.

void even_el(int *a, int n) {
	int *p = a;
	for (; p < a + n; p++)
		if ((p - a) % 2 == 0) *p = -1;
}

// 3.	*Написать программу, которая вычисляет сумму элементов массива,
// используя ДВА указателя на массив целых чисел.
// Первый указатель двигается с начала массива, второй – с конца.

void sum(int *a, int n) {
	int *p1, *p2;
	p1 = a;
	p2 = a + n - 1;
	int sum = 0;
	while (p1 <= p2)
	{
		if (p1 == p2) sum += *p1;
		else
			sum += *p1 + *p2;
		p1++;
		p2--;
	}
	cout << sum << endl << endl;
}

int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");


			int *a;
			int n = 10;
			a = new int[n];

			for (int i = 0; i < n; i++)
			{
				a[i] = rand() % 31 - 20;

				cout << a[i] << " ";
			}
			cout << endl;

			neg_to_zero(a, n); //1

			for (int i = 0; i < n; i++)
				cout << a[i] << " ";
			cout << endl << endl;

			even_el(a, n); //2

			for (int i = 0; i < n; i++)
				cout << a[i] << " ";
			cout << endl << endl;

			sum(a, n); //3

			delete[] a;

	system("pause");
	return 0;
}