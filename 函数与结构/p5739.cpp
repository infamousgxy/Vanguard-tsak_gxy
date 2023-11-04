#include<iostream>
using namespace std;

long long factorial(long long n) {
    if (n == 1) {
        return 1;
    }
    return (n*factorial(n-1));
}

int main() {
    long long n;
    cin>>n;
    long long result = factorial(n);  
    cout << result << endl;
    return 0;
}
