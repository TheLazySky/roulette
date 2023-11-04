// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "code.hpp"

int main()
{

	std::cout << "Welcome to Roulette!\n";
	std::cout << "You're starting balance is: " << balance << std::endl;

	bool win = false;
	int gainCount{0};
	int breakEven{ 0 };
	int lossCount{ 0 };
	int bet = 0;

	for (int j = 0; j < 100000; j++) {
		balance = 10000;
		bet = 0;
		for (int i = 0; i < 1000; i++) {
			if (win == false) {
				bet = bet * 2 + 200;
			}
			if (win == true) {
				bet = 20;
			}
			win = roulette(35, bet);

		}

	
	if (balance > 10000) {
		gainCount++;
	}
	if (balance == 10000) {
		breakEven++;
	}
	if (balance < 10000) {
		lossCount++;
	}

	}
	std::cout << "End Balance: " << balance << std::endl;

	std::cout << "Net Profits: " << gainCount << std::endl;
	std::cout << "Net Even: " << breakEven << std::endl;
	std::cout << "Net Loss: " << lossCount << std::endl;
}
