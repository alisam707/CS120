// assignment 3 question1
//
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	unsigned seed;
	seed = time(0);
	srand(seed);
	int num1, num2;
	num1 = rand() % 9 + 1;
	num2 = rand() % 9 + 1;
	cout << "what is the sum of these two numbers?" << endl;
	cout << setw(2) << num1 << endl << setw(2) << "+ " << endl << setw(2) << num2 << endl;
	string equals;
	equals.assign(5, '-');
	cout << equals << endl;
	int studentanswer;
	cin >> studentanswer;
	int answer = num1 + num2;
	cout << "you answered: " << studentanswer << " the correct answer is " << answer << endl;

	system("pause>nul");
	return 0;
}

//Assignment 3 Question2
//
//#include <iostream>
//#include <cmath>
//#include <cstdlib>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//
//	double oneServing = 3, calories = 240, perCookie, userCookie;
//	perCookie = calories / oneServing;
//	cout << "How many cookies did you eat? \n";
//	cin >> userCookie;
//	cout << "You ate " << userCookie * perCookie << " calories." << endl;
//
//	system("pause>nul");
//	return 0;
//}
//
//
////Assignment 3 Question 3
//
//#include <iostream>
//#include <iomanip>
//#include <string>
//#include <cmath>
//#include <cstdlib>
//
//using namespace std;
//
//int main() {
//
//	double classA = 15, classB = 12, classC = 9;
//	double amountA, amountB, amountC;
//	cout << "How many tickets were sold for class A? \n";
//	cin >> amountA;
//	cout << "How many tickets were sold for class B? \n";
//	cin >> amountB;
//	cout << "Lastly, how many tickets were sold for class C? \n";
//	cin >> amountC;
//	double profitA = amountA * classA;
//	double profitB = amountB * classB;
//	double profitC = amountC * classC;
//	double totalProfit = profitA + profitB + profitC;
//	cout << "The total profit from this game was $" << setprecision(2) << fixed << totalProfit;
//
//	system("pause>nul");
//	return 0;
//}