#include <iostream>

using namespace std;

int First_Value;
int Second_Value;
int Third_Value;
int selection;
int calculation;

void calculate();


int main() {

	cout << "Enter the first value: ";
	cin >> First_Value;

	cout << "\nEnter the second value: ";
	cin >> Second_Value; 

	cout << "Choose an operation... \n";
	cout << "1 - Sum (+) \n";
	cout << "2 - Subract (-) \n";
	cout << "3 - Multiply(*)\n";
	cout << "4 - Divide(/ )\n";
	cin >> selection;

	calculate();

	cout << "\n" + calculation;

	return 0;
}

void calculate(){
	if (selection == 1) {
		First_Value + Second_Value = calculation;
	}

	else if (selection == 2) {
		First_Value - Second_Value = calculation;
	}

	else if (selection == 3) {
		First_Value * Second_Value = calculation;
	}

	else if (selection == 4) {
		First_Value / Second_Value = calculation;
	}
}