#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int findGCD(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
    long long max,min,mid;
    cin>>max>>mid>>min;
    if(mid>max){
        swap(max,mid);

    }
    if(min>max){
        swap(max,min);
    }
    if(min>mid){
        swap(mid,min);
    }
    long long gcd = findGCD(min, max);
    cout <<min/gcd<<"/"<<max/gcd;
    return 0;
}









