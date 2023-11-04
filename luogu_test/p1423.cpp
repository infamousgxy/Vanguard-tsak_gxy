#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double s,k,l;
    l =0;
    double g,q,f;
    g = 0.0;
    f = 2.0;
    cin>>s;
    while(g<=s){
        l = l+1;
        
        g = g+f;
        f = f*0.98;
        
    }
    cout<<l;
}