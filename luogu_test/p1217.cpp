#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int n, m;
    cin >> n >> m;

    // Ensure n is odd
    if (n % 2 == 0) {
        n++;
    }

    for (int i = n; i <= m; i += 2) {
        if (isPalindrome(i) && isPrime(i)) {
            cout << i << endl;
        }
    }

    return 0;
}
