#include <iostream>
#include <vector>

int main(){
    int n,min,x;
    min = 1000000000000000000;
    std::cin>>n;
    std::vector<int> dynamicAarry(n);
    for (int j =0;j<n;j++){
        std::cin>>x;
        dynamicAarry[j]=x;
    }
    for (int i = 0;i<n;i++){
        if(dynamicAarry[i]<min){
            min = dynamicAarry[i];
        }
        
    }
    std::cout<<min;


    

}