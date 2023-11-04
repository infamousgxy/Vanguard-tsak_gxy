#include <iostream>
#include <string>
using namespace std;
int main(){
    int x;
    cin>>x;
    string b;
    if (x> 1){
        b = "apples";
    }
    else {
        b ="apple";
    }
    cout<<"Today, I ate "<<x<<" "<<b<<".";

}