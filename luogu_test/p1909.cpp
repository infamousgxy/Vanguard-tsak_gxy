#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    double x,a,b,c,d,e,f,mid1,max1,min1,mid,max,min,sum;
    cin>>x;
    cin>>a>>b;
    cin>>c>>d;
    cin>>e>>f;
    mid1 = ceil(x/a);
    min1 = ceil(x/c);
    max1 = ceil(x/e);
    mid = mid1*b;
    min = min1*d;
    max = max1*f;
    if(mid>max){
        swap(max,mid);

    }
    if(min>max){
        swap(max,min);
    }
    if(min>mid){
        swap(mid,min);

    }
    int ans;
    ans = min;
    cout<<ans;
    return 0;
}