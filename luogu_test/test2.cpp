#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    b = 0;
    c = 0;
    if( a%2 == 0){
        b=b+1;
    }
    if(a>4 && a<=12){
        c=c+1;
    }
    
    int f,g,h,j;
    f =0;
    g =0;
    h =0;
    j = 0;
    if(b == 1 && c == 1){
        f = 1;
    }
    if(b == 1 || c == 1){
        g =1;
    }
    if(b ==1 && c == 0){
        h =1;
    }
    if(b == 0 &&  c == 1){
        h = 1;
    }
    if (b ==0 && c ==0){
        j =1;
    }
    cout<<f<<" "<<g<<" "<<h<<" "<<j;

}