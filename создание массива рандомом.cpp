
#include <iostream>
#include <ctime>
#include <algorithm>
#include <fstream>
using namespace std;
int main()
{
	system("chcp 1251");
	system("cls");
	fstream f,h;
	int i = 0, n = 0, j, a[100000], x;
	clock_t t1, t2;
	t1 = clock();
	char d;
	f.open("input.txt", fstream::in);
	h.open("output.txt", fstream::out);
	if (f.is_open())
	{
		while (!f.eof())
		{
			if (!f.eof())
			{
				f >> a[i++];
				n++;
			}
		}
	}
	else
	{
		cout << "no" << endl;
	}
	t2 = clock();
	cout << "Время тиков(считывание из файла): " << t2 - t1 << endl;
	cout << "Время в секундах(считывание из файла): " << double(t2 - t1) / CLOCKS_PER_SEC << endl;
	//вывод исходного массива
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	//cортировка
	t1 = clock();
	sort(a, a + n);
	t2 = clock();
	cout << endl << "Время тиков(сортировка): " << t2 - t1 << endl;
	cout << "Время в секундах(сортировка): " << double(t2 - t1) / CLOCKS_PER_SEC << endl;

	t1 = clock();
	for (i = 0; i < n; i++)
	{
		h << a[i];
		h << " ";
	}
	t2 = clock();
	cout << endl << "Время тиков(запись в файл): " << t2 - t1 << endl;
	cout << "Время в секундах(запись в файл): " << double(t2 - t1) / CLOCKS_PER_SEC << endl;
	f.close();
	h.close();
	system("pause");
	return 0;
}
