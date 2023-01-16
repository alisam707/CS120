// Assignent 4 Question 1
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	int userChoice;
	cout << "Please enter your choice:" << endl << "1. Area of a circle" << endl;
	cout << "2. Area of a rectangle" << endl;
	cout << "3. Area of a triangle" << endl << "4. Quit" << endl;
	cin >> userChoice;
	if (userChoice == 1) {
		double radius, pi = 3.14159, circleArea;
		cout << "Please type in the radius" << endl;
		cin >> radius;
		if (radius > 0) {
			circleArea = pi * pow(radius, 2);
			cout << "The area of your circle is " << circleArea;
		}
		else {
			cout << "Please input a number greater than 0" << endl;
		}
	}
	if (userChoice == 2) {
		double length, width, rectangleArea;
		cout << "Please type in the length" << endl;
		cin >> length;
		cout << "Please type in the width" << endl;
		cin >> width;
		if (length > 0 & width > 0) {
			rectangleArea = length * width;
			cout << "The are of your rectangle is " << rectangleArea << endl;
		}
		else {
			cout << "Please enter a number greater than 0" << endl;
		}
	}
	if (userChoice == 3) {
		double base, height, triangleArea;
		cout << "Please enter the length of the base" << endl;
		cin >> base;
		cout << "Please enter the height" << endl;
		cin >> height;
		if (base > 0 & height > 0) {
			triangleArea = (base * height) / 2;
			cout << "The area of your triangle is " << triangleArea << endl;
		}
		else {
			cout << "Please type in a number greater than 0" << endl;
		}
	}
	if (userChoice == 4) {
		cout << "Thank you for using my program" << endl;
	}
	if (userChoice < 0) {
		cout << "Please type a number greater than 0" << endl;
	}

	system("pause>nul");
	return 0;
}
*/




// Assignment 4 Question 2

#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	int userChoice;
	cout << "Please select an option: " << endl << "1. Air" << endl;
	cout << "2. Water " << endl << "3. Steel" << endl;
	cin >> userChoice;
	if (0 < userChoice > 4) {
		double feet, airTime, waterTime, steelTime;
		cout << "Enter how many feet the sound will travel " << endl;
		cin >> feet;
		if (userChoice == 1) {
			airTime = feet / 1100;
			cout << "It would take " << airTime << " seconds to travel " << feet << " feet." << endl;
		}
		if (userChoice == 2) {
			waterTime = feet / 4900;
			cout << "It would take " << waterTime << " seconds to travel " << feet << " feet." << endl;
		}
		if (userChoice == 3) {
			steelTime = feet / 16400;
			cout << "It would take " << steelTime << " seconds to travel " << feet << " feet." << endl;
		}
	}
	else {
		cout << "Please enter a number between 0 and 4.";
	}

	system("pause>nul");
	return 0;
}
