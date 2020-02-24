
#include <iostream>
#include <fstream>
using namespace std;


int chetchik();
int main()

{
	setlocale(LC_ALL, "Russian");
	int num = chetchik();
	int* mass = new int[num];
	int a;
	ifstream f;
	f.open("123.txt");
	while (!f.eof())
	{
		f >> a;
		if (a % 2 == 0)
		{
			int i=0;
			mass[i] = a;
			i++;
		}

	}
	int s;
	for (s = 0; s < num; s++)
	{
		cout << mass[s];
	}



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
	f.close();
	return num;
}
