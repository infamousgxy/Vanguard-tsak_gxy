#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    
    
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

   
    double side1 = distance(x1, y1, x2, y2);
    double side2 = distance(x2, y2, x3, y3);
    double side3 = distance(x3, y3, x1, y1);

   
    double perimeter = side1 + side2 + side3;

    
    cout << fixed << setprecision(2) << perimeter << endl;

    return 0;
}