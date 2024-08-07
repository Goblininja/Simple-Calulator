#include <iostream>

using namespace std;

float num1, num2;
char op = '+';

double Logic(double num1, char op, double num2) {
    switch (op) {
        case '+':
            return num1 + num2;

        case '-':
            return num1 - num2;

        case '*':
            return num1 * num2;

        case '/':
            return num1 / num2;
    
        default:
            cout << "Error use either (+, -, *, /)";
            return 0;
    }
}

int main() {

while(true) {
    cout << "what would you like to calculate?\n";
    cin >> num1 >> op >> num2;
    double result = Logic(num1, op, num2);
    cout << result << endl;
}

}