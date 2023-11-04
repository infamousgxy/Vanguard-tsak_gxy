#include <iostream>
#include <string>
using namespace std;
int main(){
    int max,min,mid;
    cin>>max>>mid>>min;
    if(mid>max){
        swap(max,mid);

    }
    if(min>max){
        swap(max,min);
    }
    if(min>mid){
        swap(mid,min);
    }
    cout<<min<<" "<<mid<<" "<<max;
    return 0;
}