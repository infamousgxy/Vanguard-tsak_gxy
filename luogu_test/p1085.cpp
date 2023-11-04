#include <iostream>
using namespace std;
int main() {
    const int outerSize = 7;
    const int innerSize = 2;
    const int max = 7;
    int x,date;
    date = 0;
    int sumArray[max];
    int nestedArray[outerSize][innerSize];
    for (int i = 0; i < outerSize; ++i) {
        for (int j = 0; j < innerSize; ++j) {
            cin>>x;
            nestedArray[i][j] =x;
        }
        
    }
    for (int i = 0; i < outerSize; ++i) {
        int summ;
        summ = 0;
        for (int j = 0; j < innerSize; ++j) {
            summ = summ + nestedArray[i][j];
            }
        sumArray[i]=summ;
        if(sumArray[i]>sumArray[date-1] || i == 0){
            date = i+1;
            
            }
        
    }
    if(sumArray[date-1]<=8){
        cout<<0;
    }
    else{

        cout<<date<<endl;
    }




    return 0;
}
