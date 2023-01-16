//Assignment 5 Question 1

#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
using namespace std;
int main() {

	char answer1, answer2, answer3;
	cout << "Is anyone in your party a vegetarian? (y/n)" << endl;
	cin >> answer1;
	if (answer1 == 'Y' || answer1 == 'y') {
		cout << "Is anyone in your party vegan? (y/n)" << endl;
		cin >> answer2;
		if (answer2 == 'Y' || answer2 == 'y') {
			cout << "Is anyone in your party gluten-free? (y/n)" << endl;
			cin >> answer3;
			if (answer3 == 'Y' || answer3 == 'y') {
				cout << "Your options are: Corner Cafe and The Chef's Kitchen" << endl;
			}
			else if (answer3 == 'N' || answer3 == 'n') {
				cout << "Your options are: Corner Cafe and The Chef's Kitchen" << endl;
			}
			else {
				cout << "Please enter Y or N" << endl;
			}
		}
		else if (answer2 == 'N' || answer2 == 'n') {
			cout << "Is anyone in your party gluten-free? (y/n)" << endl;
			cin >> answer3;
			if (answer3 == 'Y' || answer3 == 'y') {
				cout << "Your options are: Main Street Pizza Company, Corner Cafe, and Chef's Kitchen." << endl;
			}
			else if (answer3 == 'N' || answer3 == 'n') {
				cout << "Your options are: Mama's Fine Italian, Main Street Pizza Company, Corner Cafe, and Chef's Kitchen." << endl;
			}
			else {
				cout << "Please enter Y or N" << endl;
			}
		}
		else {
			cout << "Please enter Y or N" << endl;
		}
	}
	else if (answer1 == 'N' || answer1 == 'n') {
		cout << "Is anyone in your party vegan? (y/n)" << endl;
		cin >> answer2;
		if (answer2 == 'Y' || answer2 == 'y') {
			cout << "Is anyone in your party gluten-free? (y/n)" << endl;
			cin >> answer3;
			if (answer3 == 'Y' || answer3 == 'y') {
				cout << "Your options are: Joe's Gourmet Burgers, Mama's Fine Italian, Main Street Pizza Company, Corner Cafe, and Chef's Kitchen." << endl;
			}
			else if (answer3 == 'N' || answer3 == 'n') {
				cout << "Your options are: Joe's Gourmet Burgers, Mama's Fine Italian, Main Street Pizza Company, Corner Cafe, and Chef's Kitchen." << endl;
			}
			else {
				cout << "Please enter Y or N" << endl;
			}
		}
		else if (answer2 == 'N' || answer2 == 'n') {
			cout << "Is anyone in your party gluten-free? (y/n)" << endl;
			cin >> answer3;
			if (answer3 == 'Y' || answer3 == 'y') {
				cout << "Your options are: Joe's Gourmet Burgers, Mama's Fine Italian, Main Street Pizza Company, Corner Cafe, and Chef's Kitchen." << endl;
			}
			else if (answer3 == 'N' || answer3 == 'n') {
				cout << "Your options are: Joe's Gourmet Burgers, Mama's Fine Italian, Main Street Pizza Company, Corner Cafe, and Chef's Kitchen." << endl;
			}
			else {
				cout << "Please enter Y or N" << endl;
			}
		}
		else {
			cout << "Please enter Y or N" << endl;
		}
	}
	else {
		cout << "Please enter Y or N" << endl;
	}

	system("pause>nul");
	return 0;
}


// Assignment 5 Question 2
#include <iomanip>
#include <string>
#include <iostream>
#include <cctype>
using namespace std;
int main() {

	double height, weight, BMI;
	cout << "What is your height in inches?" << endl;
	cin >> height;
	cout << "What is your weight in pounds?" << endl;
	cin >> weight;
	if (height <= 0 || weight <= 0) {
		cout << "Please input a number over 0. " << endl;
	}
	else {
		cout << "Your height: " << height << endl;
		cout << "Your weight: " << weight << endl;
		BMI = (weight / pow(height, 2)) * 703;
		cout << "An ideal BMI is between 18.5 and 25" << endl;
		cout << "Your BMI = " << BMI << endl;
		if (BMI < 18.5) {
			cout << "This is considered underweight." << endl;
		}
		else if (BMI > 18.5 && BMI < 25) {
			cout << "This is considered a healthy weight." << endl;
		}
		else {
			cout << "This is considered overweight." << endl;
		}
	}
	

	system("pause>nul");
	return 0;
}