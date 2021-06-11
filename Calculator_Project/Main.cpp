#include <iostream>

using namespace std;

int Num1;
int Num2;
int Num3;
int Num4;
int selection;
int calculation;

void calculate();


int main() {

	cout << "Enter the first value: ";
	cin >> Num1;

	cout << "\nEnter the second value: ";
	cin >> Num2; 

	cout << "Choose an operation... \n";
	cout << "1 - Sum (+) \n";
	cout << "2 - Subract (-) \n";
	cout << "3 - Multiply(*)\n";
	cout << "4 - Divide(/)\n";
	cin >> selection;

	calculate();
	cout << calculation;
	return 0;
}

void calculate(){
	if (selection == 1) {
		calculation = Num1 + Num2;
	}

	else if (selection == 2) {
		calculation = Num1 - Num2;
	}

	else if (selection == 3) {
		calculation = Num1 * Num2;
	}

	else if (selection == 4) {
		calculation = Num1 / Num2;
	}
}