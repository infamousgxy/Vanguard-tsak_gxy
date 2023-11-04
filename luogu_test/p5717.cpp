#include <iostream>
#include <algorithm>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    // 将三条边按照非降序排列
    int sides[] = {a, b, c};
    std::sort(sides, sides + 3);

    if (sides[0] + sides[1] <= sides[2]) {
        std::cout << "Not triangle" << std::endl;
    } else {

        if (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2]) {
            std::cout << "Right triangle" << std::endl;
        }

        else if (sides[0] * sides[0] + sides[1] * sides[1] > sides[2] * sides[2]) {
            std::cout << "Acute triangle" << std::endl;
        }
 
        else {
            std::cout << "Obtuse triangle" << std::endl;
        }


        if (sides[0] == sides[1] || sides[1] == sides[2]) {
            std::cout << "Isosceles triangle" << std::endl;
        }


        if (sides[0] == sides[1] && sides[1] == sides[2]) {
            std::cout << "Equilateral triangle" << std::endl;
        }
    }

    return 0;
}
