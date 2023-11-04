#include <iostream>
#include <string>
using namespace std;

int main() {
    string isbn;
    cin >> isbn;

    int sum = 0;
    int factor = 1;
    char correctCheckDigit;

    for (char digit : isbn) {
        if (isdigit(digit)) {
            sum += (digit - '0') * factor;
            factor++;
        } else if (digit == 'X') {
            sum += 10 * factor;
            factor++;
        }
    }

    int remainder = sum % 11;
    if (remainder == 10) {
        correctCheckDigit = 'X';
    } else {
        correctCheckDigit = '0' + remainder;
    }

    char inputCheckDigit = isbn.back(); 

    if (inputCheckDigit == correctCheckDigit) {
        cout << "Right" << endl;
    } else {
        isbn.back() = correctCheckDigit; 
        cout << isbn << endl;
    }

    return 0;
}
