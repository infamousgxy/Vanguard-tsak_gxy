#include<iostream>
using namespace std;
int main (){
    long long a[10000];
    long long n,m=0,q;
    cin>>n;
    q = n;
    while(n !=1){
        m =m+1;
        if(n%2 ==1){
            n = n*3+1;
            a[m]=n;
            

        }
        else{
            n = n/2;
            a[m]=n;
            
        }
        if(n ==1){
            break;
        }
    
    }
    for (long long j=m;j>0;j--){
        cout<<a[j]<<" ";

    }
    cout<<q;
    return 0;
    
}