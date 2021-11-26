#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;


int search_gaps(int z, int n, int array[])
{
	for (int i = 1; i < n - 2; i++)
		if ((array[i] > array[i - 1]) & (array[i] < array[i + 1]))
		{
			z++;
			while ((array[i + 1] <= array[i + 2]) & (i < n - 3))
			{
				i++;
			}
		}

	if ((array[n - 2] < array[n - 1]) & (array[n - 2] > array[n - 3]) & (array[n - 3] <= array[n - 4]))
		z++;
	return z;
}
int main()
{
	int z;
	setlocale(LC_ALL, "rus");
	do
	{
		cout << "Выберите действие: " << endl << "1.Выполнить задание" << endl<< "2.Стоп" << endl << "»" << endl;
		cin >> z;
		{
			switch (z)
			{
			case(1):
			{
				int q = 0;
				int x = 0;
				int y = 1;
				int s;
				cout << "Введите размер массива:\n" << ">";
				cin >> s;
				int* a = new int[s];
				for (int i = 0; i < s; ++i)
				{
					a[i] = rand() % 101;
				}
				for (int i = 0; i < s; ++i)
				{
					cout << a[i] << " ";
				}

				cout << endl << "В масииве " << search_gaps(q, s, a) << " промежутков возрастания." <<endl;
				break;
			}
			case(2):
			{
				cout << "Работа успешно завершена!\n";
				break;
			}
			default:
			{
				cout << "Введен недопустимый номер\n";
				break;
			}
			}
		}
	} while (z != 2);
	return 0;
	cin.get();
}
