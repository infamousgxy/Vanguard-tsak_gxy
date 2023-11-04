#include<iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double n,s1,s2,n1,n2;
    int k,z;
    double g,h;
    int z1,k1;
    n1 =0;
    n2 =0;
    s1 =0;
    s2 = 0;
    cin>>n>>k;
    for( int i =0;i<n;i++){
        z = i+1;
        z1 = ceil(z);
        
        if(z % k == 0){
            s2 = s2+z;
            n2 = n2 +1;

        }
        else{
            s1 = s1+z;
            n1 = n1+1;
        }
    }

    g = s1/n1;
    h = s2/n2;
    
    std::cout << std::fixed << std::setprecision(1) << h<<" "<<g << std::endl;
} 