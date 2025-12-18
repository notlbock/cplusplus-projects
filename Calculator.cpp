// Calculator.cpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {

    cout << "CALCULATOR PROGRAM\n";
    cout << "PROGRAM MADE BY EDEN NGUYEN\n\n";

    string calcMode;
    cout << "Calculator Mode: ";
    cin >> calcMode;
    cout << "\n";

    if (calcMode == "ADD") {
        int sum = 0;
        vector<int> addingNumbers;

        while (true) {

            string addStr;
            cout << "ADD: ";
            cin >> addStr;
            cout << "\n";

            if (addStr == "=") {

                for (int i = 0; i < addingNumbers.size(); i++) {

                    int num;

                    try {
                        num = addingNumbers[i];
                        sum += num;
                    } catch (...) {
                        cout << "ERROR\n";
                    }

                }

                cout << sum << "\n";
                break;
            } else {

                try {
                    int addingNum = stoi(addStr);
                    addingNumbers.push_back(addingNum);
                } catch (...) {
                    cout << "ERROR\n";
                }

            }

        }

    } else if (calcMode == "SUBTRACT") {
        int difference = 0;
        vector<int> subtractingNums;

        string starting_subtractStr;
        cout << "SUBTRACT: ";
        cin >> starting_subtractStr;
        cout << "\n";

        try {

            difference = stoi(starting_subtractStr);

        } catch (...) {
            cout << "ERROR\n";
        }

        while (true) {

            string subtractStr;
            cout << "SUBTRACT: ";
            cin >> subtractStr;
            cout << "\n";

            if (subtractStr == "=") {
                for (int i; i < subtractingNums.size(); i++) {
                    try {
                        int subtractInt = subtractingNums[i];
                        difference -= subtractInt;
                    } catch (...) {
                        cout << "ERROR\n";
                    }
                }
                cout << difference << "\n";
                break;
            } else {

                try {

                    int subtractingInt = stoi(subtractStr);
                    subtractingNums.push_back(subtractingInt);

                } catch (...) {
                    cout << "ERROR\n";
                }

            }

        }

    } else if (calcMode == "MULTIPLY") {
        int product = 1;
        vector<int> multiplyingNums;

        while (true) {

            string multiplyingStr;
            cout << "MULTIPLY: ";
            cin >> multiplyingStr;
            cout << "\n";

            if (multiplyingStr == "=") {

                for (int i; i < multiplyingNums.size(); i++) {

                    try {
                        product *= multiplyingNums[i];
                    } catch (...) {
                        cout << "ERROR\n";
                    }

                }
                cout << product << "\n";
                break;

            } else {

                try {

                    int multiplyingInt = stoi(multiplyingStr);
                    multiplyingNums.push_back(multiplyingInt);

                } catch (...) {
                    cout << "ERROR\n";
                }

            }

        }

    } else if (calcMode == "DIVIDE") {
        int quotient;
        vector<int> dividingNums;
        string startingStr;
        cout << "DIVIDE: ";
        cin >> startingStr;
        cout << "\n";

        try {
            quotient = stoi(startingStr);
        } catch (...) {
            cout << "ERROR\n";
        }

        while (true) {

            string divideInt;
            cout << "DIVIDE: ";
            cin >> divideInt;
            cout << "\n";

            if (divideInt == "=") {
                for (int i; i < dividingNums.size(); i++) {

                    try {

                        quotient /= dividingNums[i];

                    } catch (...) {
                        cout << "ERROR\n";
                    }

                }
                cout << quotient << "\n";
                break;

            } else {

                try {

                    dividingNums.push_back(stoi(divideInt));

                } catch (...) {

                    cout << "ERROR\n";

                }

            }

        }

    } else if (calcMode == "MODULO") {
        int modulo;
        vector<int> moduloNums;

        string startingStr;
        cout << "MODULO: ";
        cin >> startingStr;
        cout << "\n";

        try {
            modulo = stoi(startingStr);
        } catch (...) {
            cout << "ERROR";
        }

        while (true) {

            string moduloStr;
            cout << "MODULO: ";
            cin >> moduloStr;
            cout << "\n";

            if (moduloStr == "=") {
                for (int i; i < moduloNums.size(); i++) {

                    try {
                        modulo %= moduloNums[i];
                    } catch (...) {
                        cout << "ERROR\n";
                    }

                }
                cout << modulo << "\n";
                break;

            } else {

                try {
                    moduloNums.push_back(stoi(moduloStr));
                } catch (...) {
                    cout << "ERROR\n";
                }

            }

        }

    } else {
        cout << "ERROR\n";
    }

    return 0;

}
