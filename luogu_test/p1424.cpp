#include <iostream>
#include <iomanip>  
using namespace std;
int main() {
    long long x,n,s,m;
    cin>>x>>n;
    s = 0;
    
    for(int i = 1; i<=n ; i++ ){
        
        if(x != 6 && x != 7){
            s = s+250;
        }
        
        if(x == 7){
            x = 1;

        }
        else{
            x=x+1;
        }
    }
    cout<<s;
    return 0;
}