#include <stdlib.h>     /* srand, rand */
#include <string>
#include "code.hpp"
#include <iostream>
#define BLACK 35
#define RED 36
int balance = 10000;

bool roulette(int bet, int amount) {
	int spin = rand() % 35;
	bool win = false;
	balance = balance - amount;

	if (bet == BLACK) {
		if (spin % 2 == 0 && spin != 0) {
			balance = balance + amount * 2;
			win = true;
		}
	}

	else if (bet == RED) {
		if (spin % 2 != 0) {
			balance = balance+ amount * 2;
			win = true;

		}
	}
	else {
		if (bet == spin) {
			balance = balance + amount * 2;
			win = true;

		}
	}

	return win;
	

}