#include <iostream>
#include <cctype>
#include <string>
std::string input;
int main() {
    long long sum = 0;
    
    
    
    std::getline(std::cin, input);

    
    for (char &c : input) {
        
        if (c == ' ' || c=='a'||c=='d'||c=='g'||c=='j'||c=='m'||c=='p'||c=='t'||c=='w'||c=='*'||c=='#') {
            sum = sum + 1;
        } 
        else if(c=='b'|| c=='e'||c=='h'|| c=='k'||c=='n'||c=='q'||c=='u'||c=='x'){
            sum = sum+2;
        }
        else if(c=='c'|| c=='f'||c=='i'|| c=='l'||c=='o'||c=='r'||c=='y'||c=='v'){
            sum =sum+3;
        }
        else if (c=='s'|| c=='z'){
            sum = sum+4;
        }
    }

    
    std::cout << sum << std::endl;

    return 0;
}
