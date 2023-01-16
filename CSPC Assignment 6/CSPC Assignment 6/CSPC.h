//Assignment 6 Question 1
/*
#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;
int main() {

	double initialInvestment, interestRate, years;
	cout << "Please enter the initial investment\n";
	cin >> initialInvestment;
	cout << "Please enter the interest rate as a decimal point\n";
	cin >> interestRate;
	if (initialInvestment > 0 && interestRate > 0) {
		years = (1000000 - initialInvestment) / (initialInvestment * interestRate);
		cout << "You will reach 1 million dollars in " << years << " years. \n Thank you";

	}
	else {
		cout << "Please enter numbers in correct format \n";
	}
	
	system("pause>nul");
	return 0;
}*/

//Assignment 6 Question 2
/*
#include<iostream>
#include<iomanip>
#include<cctype>
using namespace std;
int main() {

	double salary = 0.01, day = 1, totalDays, totalPay = 0;
	cout << "How many days did the employee work this month?\n";
	cin >> totalDays;
	if (totalDays >= 1 && totalDays <= 31) {
		cout << "Day        Salary" << endl;
		while (day >= 1 && day <= totalDays) {
			cout << setw(2) << day << setw(14) << salary << endl;
			totalPay = totalPay + salary;
			day = day + 1;
			salary = salary * 2;
		}
		cout << "Employee's total pay: " << totalPay;
	}
	else {
		cout << "Please enter a valid number";
	}


	system("pause>nul");
	return 0;
}
*/



//Assignment 6 Question 3
#include<iostream>
#include<iomanip>
#include<cctype>
using namespace std;
int main() {

	int code = 32, count;
	while (code >= 32 && code <= 127) {
		cout << (char)code << " ";
		code++;
		if (code % 16 == 0) {
			cout << endl;
		}
	}


	system("pause>nul");
	return 0;
}
