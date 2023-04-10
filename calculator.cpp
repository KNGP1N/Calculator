#include <iostream>
#include <cstdlib> // For rand() function
#include <ctime> // For time() function
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "Welcome to the calculator!" << endl;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operator" << endl;
            return 0;
    }

    cout << "Result: " << result << endl;

    if(result == 999) {
        cout << "Congratulations! You have won a coin flipping game!" << endl;
        cout << "Flipping a coin..." << endl;
        srand(time(0)); // Seed the random number generator with current time
        int coin = rand() % 2; // Generate a random number 0 or 1
        if(coin == 0) {
            cout << "The coin landed on heads! You win!" << endl;
        } else {
            cout << "The coin landed on tails! You lose!" << endl;
        }
    }

    return 0;
}