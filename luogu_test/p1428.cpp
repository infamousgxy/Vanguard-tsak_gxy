#include<iostream>
using namespace std;
int main(){
    int a[1000];
    int n,m,max,num;
    cin>>n;
    for (int i = 0;i<n;i++){
        cin>>a[i];
    }
    for (int j = 0;j<n;j++){
        max = a[j];
        num = 0;
        for (int q =0;q<j;q++){
            
            if (a[q]< max){
                num= num+1;
                
            }
        }
        cout<<num<<" ";

    }
    return 0;
}