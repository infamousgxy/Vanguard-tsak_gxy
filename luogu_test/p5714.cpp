#include <iostream>
#include <string>
using namespace std;
int main(){
    double x,m,h;
    cin>>m>>h;
    x = m/(h*h);
    if(x < 18.5){
        cout<<"Underweight";
    }
    else if(x >= 18.5 && x<24){
        cout<<"Normal";
    }
    else {
        cout<<x<<endl<<"Overweight";
    }

    return 0;
}