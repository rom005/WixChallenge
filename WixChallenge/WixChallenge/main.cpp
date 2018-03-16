#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

//counts level of a building.
int f1()
{
	int count = 0;
	string str;
	cout << "Input for first: " << endl;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ')') count--;
		else count++;
	}

	return count;
}

//counts stepped places in a field.
int f2()
{
	int arr[500][500]{ 0 };
	int x = 250, y = 250, counter = 0;
	string str;
	arr[y][x] = 1;
	cout << "Input for second: " << endl;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '<') { x--; }
		if (str[i] == '>') { x++; }
		if (str[i] == '^') { y++; }
		if (str[i] == 'v') { y--; }
		if (arr[y][x] == 0) //new place
			arr[y][x]++;
		else if (arr[y][x] == 1) //already stepped on
		{
			counter++;
			arr[y][x]++;
		}
	}
	return counter;
}

int main()
{
	cout << f1() << endl;
	cout << f2() << endl;

	system("pause");
	return 0;
}
