#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        std::cout << "31" << std::endl;
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        std::cout << "30" << std::endl;
    } else if ((n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) && m == 2) {
        std::cout << "29" << std::endl;
    } else {
        std::cout << "28" << std::endl;
    }

    return 0;
}
