#include<iostream>
using namespace std;
int years(int n,int s){
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)){
        s= s+1;
        return n+1,s;
    }
}
int main(){
    long long a[100000];
    int n,m,sum=0,q=0,z = 0;
    cin>>n>>m;
    for(int i =n;i<=m;i++){
        q =i;
        years(q,sum);
        if(q == i+1){
            z =z+1;
            a[z]=q-1;
        }
        

        
    }
    cout<<sum<<endl;
    for(int j =1;j<=z;j++){
        cout<<a[j];
    }
    return 0;
}