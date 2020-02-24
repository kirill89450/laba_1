
#include <iostream>
#include <fstream>
using namespace std;

int mass_in_file();
int chetchik();
int main()

{
	setlocale(LC_ALL, "Russian");

	int* mass = new int[chetchik()];
	cout << chetchik();






	return 0;
}

int chetchik()
{
	int a, num = 0;
	ifstream f;
	f.open("123.txt");
	if (!f)
	{
		return 0;

	}
	while (!f.eof())
	{

		f >> a;
		if (a % 2 == 0)
			num++;

	}
	return num;
}

int mass_in_file()
{

	return 0;
}