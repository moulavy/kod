// создание массива рандомом.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	system("chcp 1251");
	system("cls");
	FILE* f;
	int i = 0, n = 0, j, a[100000], x,v;
	fopen_s(&f, "input.txt", "w+");
	cout << "Заполнить массив самостоятельно или случайно?" << endl;
	cout << "1. Самостоятельно." << endl;
	cout << "2. Случайно." << endl;
	cin >> v;
	cout << "Введите количество элементов" << endl;
	cin >> n;
	if (v == 1)
	{
		cout << "Введите элементы: " << endl;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		cout << endl<< "Массив введен." << endl;
	}
	else if (v == 2)
	{
		for (i = 0; i < n; i++)
		{
			a[i] = rand() % 10000 + 1;
		}
		cout << endl << "Массив заполнен случайными числами от 1 до 10000." << endl;
	}
	for (i = 0; i < n-1; i++)
	{
		fprintf_s(f, "%d", a[i]);
		fprintf_s(f, "%c", ' ');
	}
	fprintf_s(f, "%d", a[n-1]);
	fclose(f);
	system("pause");
	
	return 0;
}