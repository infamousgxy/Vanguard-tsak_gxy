#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    std::string input;
    
    
    cin >> input;

    
    for (char &c : input) {
        c = std::toupper(c);
    }

    // 输出结果
    cout << input << endl;

    return 0;
}
