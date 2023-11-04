#include <iostream>
#include <cctype>
#include <string>

int main() {
    long long sum = 0;
    std::string input;
    
    
    std::getline(std::cin, input);

    
    for (char &c : input) {
        
        if (c == ' ' || c == '\n') {
            sum = sum + 0;
        } else {
            sum = sum + 1;
        }
    }

    
    std::cout << sum << std::endl;

    return 0;
}
