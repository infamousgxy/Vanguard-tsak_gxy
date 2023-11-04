#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    double n,z=0,h=10000.0,q=0.0;
    cin>>n;
    double a [1001];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int j =0;j<n;j++){
        z = z+a[j];
    }
    for(int k =0;k<n;k++){
        if(a[k]>q){
            q = a[k];
        }

    }
    for (int o = 0;o<n;o++){
        if(a[o]<h){
            h =a[o];

        }
    }

    double m=0.0;
    m = (z-h-q)/(n-2);
    cout << fixed << setprecision(2) << m << endl;
    return 0;




}