#include <iostream>
#include <fstream>
using namespace std;
int chetchik();
int chet_nechet(int* mass2, int col);
int main()
{
	setlocale(LC_ALL, "Russian");

	int num = chetchik(); int a;
	int* mass = new int[num];

	ifstream f;
	f.open("123.txt");
	int i = 0;
	while (!f.eof())
	{
		f >> a;
		if (a % 2 == 0)
		{
			mass[i] = a;
			i++;
		}
	}

	f.close();
	int temp;
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (mass[j] > mass[j + 1])
			{
				// меняем элементы местами
				temp = mass[j];
				mass[j] = mass[j + 1];
				mass[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < num; i++) { cout << mass[i] << " "; }

	delete[] mass;

	int col;
	cout << endl << "Введите кольво чисел в новом массиве: ";
	cin >> col;
	int aa, bb;
	cout << endl << "Введите диапозон от ";
	cin >> aa;
	cout << "до  ";	cin >> bb;
	int* mass2 = new int[col];
	int numb;
	cout << "Ваш массив" << endl;
	for (int i = 0; i < col; i++)
	{
		numb = rand() % (aa + bb + 1) + aa;
		mass2[i] = numb;

	}
	for (int i = 0; i < col; i++) { cout << mass2[i] << " "; }
	cout << endl;

	int col_chet = col-chet_nechet(mass2, col);
	cout << "Новый массив" << endl;
	int* mass3 = new int[col_chet];
	
	int j = 0;
	for (int i = 0; i < col; i++)
	{
		if (mass2[i] % 2 == 0) {
			mass3[j] = mass2[i];
			j++;
		}
	}
 
	for (int i = 0; i < col_chet; i++)
	{
		cout << mass3[i] << " ";
	}
	cout << endl;
	delete[]mass3;
	delete[]mass2;



	return 0;
}



int chetchik()
{
	int a, num = 0;
	ifstream f;
	f.open("123.txt");
	if (!f)	return 0;

	while (!f.eof())
	{
		f >> a;
		if (a % 2 == 0)
			num++;
	}
	f.close();
	cout << "Колличество элементов массива =  " << num << endl;
	return num;
}
int chet_nechet(int* mass2, int col)
{
	int col_nechet = 0;
	for (int i = 0; i < col; i++)
		if (mass2[i] % 2 == 1)
			col_nechet++;
	return col_nechet;
}
