//Assignment 2 Question 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

	int replaceCost;
	cout << "How much would it cost to replace your house? \n";
	cin >> replaceCost;
	double percentInsure = 0.8;
	cout << "This is the amount you should insure your house: $" << replaceCost * percentInsure << endl;






//Assignment 2 Question 2


	double numBat;
	cout << "How many times was the player at bat? \n";
	cin >> numBat;
	double hitsEarned;
	cout << "How many hits has the player earned? \n";
	cin >> hitsEarned;
	double battingAverage = hitsEarned / numBat;
	cout << "The player's batting average is " << battingAverage << endl;





//Assignment 2 Question 3


	double numGirl;
	double numBoy;
	cout << "Enter the amount of females in the class \n";
	cin >> numGirl;
	cout << "Enter the amount of males in the class \n";
	cin >> numBoy;
	double totalStudent = numGirl + numBoy;
	cout << "The amount of females in the class is %" << (numGirl / totalStudent) * 100 << endl;
	cout << "The amount of makes in the class is %" << (numBoy / totalStudent) * 100 << endl;

	system("pause>null");
	return 0;
}