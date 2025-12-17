// SIMPLE BETTING GAME
// THIS GAME IS MADE FOR FUN.

/*
TO RUN:
cd ~/Desktop
clang++ bet_game -o Betting_Game
*/

#include <iostream>
#include <string>
#include <random>

using namespace std;
int bucks = 100;

int main() {


	class Random {
	public:
    	static int get(int min, int max) {
        	static random_device rd;
        	static mt19937 gen(rd());
        	uniform_int_distribution<int> dis(min, max);
        	return dis(gen);
        }
};

	cout << "SIMPLE BETTING GAME\n";
	cout << "PROGRAM MADE BY EDEN NGUYEN\n";
	cout << "This program is made for fun!\n";

	while (true) {

		int betInt;

		string betStr;
		cout << "BETTING AMOUNT: $";
		cin >> betStr;
		cout << "\n";

		try {
			betInt = stoi(betStr);
		} catch (...) {
			cout << "invalid number.\n";
		}

			int numOneOrTwoInt;
			int randInt = Random::get(1,2);

			string numOneOrTwoStr;
			cout << "ONE OR TWO: ";
			cin >> numOneOrTwoStr;
			cout << "\n";

			try {
				numOneOrTwoInt = stoi(numOneOrTwoStr);
			} catch (...) {
				cout << "Invalid number.";
			}

			if (numOneOrTwoInt == randInt) {

				bucks += betInt;

				cout << "You won " << betInt << " dollars.\n";
				cout << "You have " << bucks << " dollars.\n";

			} else {

				bucks -= betInt;

				cout << "You lost " << betInt << " dollars.\n";
				cout << "You have " << bucks << " dollars.\n";
			}

	}

	return 0;
}
