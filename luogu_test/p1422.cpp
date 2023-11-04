#include <iostream>
#include <iomanip>  
using namespace std;
int main() {
    int elec;
    cin >> elec;
    double cost;
    if (elec <= 150) {
        cost = elec * 0.4463;
    } else if (elec <= 400) {
        cost = 150 * 0.4463 + (elec - 150) * 0.4663;
    } else {
        cost = 150 * 0.4463 + 250 * 0.4663 + (elec - 400) * 0.5663;
    }
    cout << fixed << setprecision(1) << cost << endl;
    return 0;
}
