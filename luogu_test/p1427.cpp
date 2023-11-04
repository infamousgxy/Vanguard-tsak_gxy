#include<iostream>
using namespace std;
long long a[101];
int main(){
    long long c=1,i=0;
    while(c>0){
        i = i+1;
        cin>>c;
        
        if(c==0){
            break;
        }
        else{
            a[i]= c;
        }


    }
    
    for (int j=i-1;j>0;j--){
        cout<<a[j]<<" ";
    }
    return 0;
}