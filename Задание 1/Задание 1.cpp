﻿// Задание 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>

int main()
{
	setlocale(0, "");
	int* a, n;
	cout << "Размерность массива = " << endl;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 30;
		cout << a[i] << " ";
	}
	cout << "\n";

	int b, c;
	cout << "Введите промежуток = ";
	cin >> b >> c;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= b && a[i] <= c)
		{
			a[i] = 0;
		}
		cout << a[i] << " ";
	}
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
