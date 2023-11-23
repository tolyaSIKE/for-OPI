#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;

int main()
{
	// Варіант номер 1

	// Зміна коду файлу для 7 лабораторної роботи з предмету "Основи програмної інженерії"
	srand(time(NULL));
	const int n = 10;
	int mas[n], sum=0, max, maxInd;
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 41 - 20;
		cout << "mas[" << i << "]=" << mas[i] << endl;
	}
	cout << "++++++++++++++++++++++++++\n";
	for (int i = 0; i < n; i++) {
		if (mas[i]>0) {
			sum = sum + mas[i];	
		}
	}
	cout << sum << " " << endl;
	cout << "++++++++++++++++++++++++++\n";
	max = mas[n];
	maxInd = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] > max) {
			max = mas[i];
			maxInd = i;
		}
	}
	cout << "max=" << max << endl << "maxInd=" << maxInd;
}