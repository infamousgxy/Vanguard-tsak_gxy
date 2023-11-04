#include <iostream>
#include <string>
using namespace std;
int main(){
    int x,a,b;
    cin>>x;
    a = 5*x;
    b = 11+3*x;
    if (a <= b ){
        cout<<"Local";
    }
    else {
        cout<<"Luogu";
    }
    return 0;
}