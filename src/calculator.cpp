#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char oper;
    double result;

    cout << "Vnesite prvo celo število: ";
    cin >> num1;
    cout << "Vnesite operator (+, -, x, /): ";
    cin >> oper;
    cout << "Vnesite drugo celo število: ";
    cin >> num2;

    switch (oper) {
        case '+':
            result = num1 + num2;
            cout << "Rezultat: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Rezultat: " << result << endl;
            break;
        case 'x':
        case '*':
            result = num1 * num2;
            cout << "Rezultat je: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = static_cast<double>(num1) / num2;
                cout << "Rezultat: " << result << endl;
            } else {
                cout << "Napaka: Deljenje z 0 ni dovoljeno!" << endl;
            }
            break;
        default:
            cout << "Napaka: Neveljaven operator!" << endl;
    }

    return 0;
}

// dodan nepomemben komentar
