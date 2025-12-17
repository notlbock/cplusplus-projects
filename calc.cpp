/*
TO RUN:
cd ~/Desktop
clang++ calc.cpp -o Calculator
*/

#include <iostream>
#include <string>

using namespace std;

// GLOBAL VARIABLES
int startingInt_subtract;
int startingInt_divide;

int main() {
    string modeInput;

    cout << "BASIC MATH CALCULATOR\n";
    cout << "PROGRAM BY EDEN NGUYEN\n";

    cin >> modeInput;

    if (modeInput == "ADD") {
        int sum = 0;

        while (true) {
            string addInput;
            cin >> addInput;

            if (addInput == "=") {
                cout << sum << "\n";
                break; 
            } else {
                try {
                    int addInt = stoi(addInput);
                    sum += addInt;
                } catch (...) {
                    cout << "Invalid number\n";
                }
            }
        }
    } else if (modeInput == "SUBTRACT") {
        string startingSTR;
        cin >> startingSTR;

        try {
            startingInt_subtract = stoi(startingSTR);
        } catch (...) {
            cout << "Invalid number\n";
            return 1;
        }

        int difference = startingInt_subtract;

        while (true) {
            string subtractInput;
            cin >> subtractInput;

            if (subtractInput == "=") {
                cout << difference << "\n";
                break;
            } else {
                try {
                    int subtractInt = stoi(subtractInput);
                    difference -= subtractInt; 
                } catch (...) {
                    cout << "Invalid number\n";
                }
            }
        }
    } else if (modeInput == "MULTIPLY") {

        int product = 1;

        while (true) {
            string multiplyStr;
            cin >> multiplyStr;

            if (multiplyStr == "=") {

                cout << product << "\n";
                break;

            } else {

                try {

                    int multiplyInt = stoi(multiplyStr);

                    product *= multiplyInt;

                } catch (...) {
                    cout << "Invalid number\n";
                }

            }

        }

    } else if (modeInput == "DIVIDE") {

        int quotient = 1;

        string startingSTR;
        cin >> startingSTR;

        try {

            quotient = stoi(startingSTR);

        } catch (...) {
            cout << "Invalid number";
        }

                while (true) {

            string divideStr;
            cin >> divideStr;

            if (divideStr == "=") {
                cout << quotient << "\n";
                break;
            } else {
                try {
                    int divideInt = stoi(divideStr);

                    quotient /= divideInt;

                    
                } catch (...) {
                    cout << "Invalid number.";
                }
            }

        }

    } else {
        cout << modeInput << " is not a supported mode.\n";
    }

    return 0;
}
