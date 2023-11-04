#include <iostream>
using namespace std;
int main (){
    int n, y;
    cin>>n;
    if ((n%4 == 0 && n%100 != 0)||(n%400 == 0)){
        y = 1;
    }
    cout<<y;
    return 0;

}