//Alisa Majarov
//11-17-2021
//Assignment 9 Question 1

#include <iostream>
#include <string>
using namespace std;

double countLarger(int number, int array[]);

int main() {
	const int arrayLim = 20;
	int userArray[arrayLim];
	int integer, i;
	for (i = 0; i < 20; i++) {
		cout << "Enter a number in order from least to most\n";
		cin >> userArray[i];
	}
	cout << "Please enter a whole number\n";
	cin >> integer;
	cout << "These are the numbers in the array larger than your integer:\n";
	cout << countLarger(integer, userArray);
	
	system("pause>nul");
	return 0;
}

double countLarger(int number, int array[]) {
	int total = 20 - number;
	cout << "There are " << total << " numbers that are larger than the integer";
	return total;
}