#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    const int max = 10;
    int x,date,sum;
    date = 0;
    int sumArray[max];
    for (int i = 0; i<10;i++){
        cin>>x;
        sumArray[i] = x;
    }
    cin>>date;
    sort(sumArray, sumArray + max);
    for(int j = 0;j<10;j++){
        
        if((date+30) >= sumArray[j]){
            sum = j+1;
        
        }
    }
    cout<<sum;
}