#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num < 0) {
        cout << "-";
        num = -num;
    }

    if (num % 10 == 0) {
        num = num / 10;
    }

    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num = num / 10;
    }

    cout << reversedNum << endl;

    return 0;
}
