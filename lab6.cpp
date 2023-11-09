// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> 
#include <iomanip> 
#include "windows.h"

/* Зміна коду файлу для лабораторної роботи №6 з предмету "Основи програмної інженерії"*/

using namespace std;

int main()
{
	double a, b, h, y, x;
	cout << "Enter [a; b], h" << endl;
	cin >> a >> b >> h;
	x = a;
	/* while (x <= b + h / 2)
	{
		y = sin(x) * fabs (x) + pow (2,x);
		cout << '|' << setw(6) << x << "\t|\t" << setw(10) << y << '|' << endl;
		x += h;
	}*/
	do {
		y = sin(x) * fabs(x) + pow(2, x);
		cout << '|' << setw(6) << x << "\t|\t" << setw(10) << y << '|' << endl;
		x += h;
	} while (x <= b + h / 2);
}