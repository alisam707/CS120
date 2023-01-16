//Alisa Majarov
// 11-10-2021
//Assignment 8
#include <iostream>
using namespace std;

double qSales;
double sales1, sales2, sales3, sales4;
double getSales(int division);
void findHighest();

int main() {

	cout << "Start with the Northeast division\n";
	sales1 = getSales(1);
	cout << "Next is the Southeast division\n";
	sales2 = getSales(2);
	cout << "Next is the Northwest division\n";
	sales3 = getSales(3);
	cout << "Last is the Southwest division\n";
	sales4 = getSales(4);
	findHighest();

	system("pause>nul");
	return 0;
}

double getSales(int division) {

	cout << "Enter the quarterly sales figure\n";
	cin >> qSales;
	while (qSales <= 0) {
		cout << "Please enter a number over 0\n";
		cin >> qSales;
	}
	return qSales;

}

void findHighest() {
	int allSales[4];
	allSales[0] = sales1;
	allSales[1] = sales2;
	allSales[2] = sales3;
	allSales[3] = sales4;
	int i, max = 0;
	for (i = 0; i < 4; i++) {
		if (allSales[i] > max) {
			max = allSales[i];
		}
	}
	if (max == sales1) {
		cout << "The Northeast division had the most sales with $" << max;
	}
	else if (max == sales2) {
		cout << "The Southeast division had the most sales with $" << max;
	}
	else if (max == sales3) {
		cout << "The Northwest division had the most sales with $" << max;
	}
	else if (max == sales4) {
		cout << "The Southwest division had the most sales with $" << max;
	}
}