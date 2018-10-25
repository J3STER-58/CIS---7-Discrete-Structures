#include <iostream>
#include <chrono>

int getNumPOS();
void calculateGCDTIME(int a, int b);
char doAgain(char choice);

int main() {
	int num1, num2;
	char choice = 'y';
	do {
		std::cout << "We need two positive numbers to determine the Greatest Common Divisor (GCD).\n";
		num1 = getNumPOS();
		num2 = getNumPOS();
		calculateGCDTIME(num1, num2);
		choice = doAgain(choice);
		std::cout << "\n";
	} while (choice == 'y');
	system("pause");
	return 0;
}

int getNumPOS() {
	int num = 0;
	do {
		std::cout << "Enter a positive number:  ";
		std::cin >> num;
	} while (num < 0);
	return num;
}

void calculateGCDTIME(int a, int b) {
	auto start = std::chrono::steady_clock::now();
	while (b != 0) {
		a %= b;
		std::swap(a, b);
	}
	auto end = std::chrono::steady_clock::now();
	std::cout << "\nThe GCD of those two numbers is :  " << abs(a) << std::endl;
	auto taken = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
	std::cout << "Calculation Time:  " << taken << " nanoseconds\n\n";
}

char doAgain(char choice) {
	std::cout << "Would you like to re-run the program? ";
	std::cout << "('y' for yes) :  ";
	std::cin >> choice;
	choice = tolower(choice);
	return choice;
}
