#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    char order[3];
    cin >> order[0] >> order[1] >> order[2];

  
    int minVal = min(min(A, B), C);
    int maxVal = max(max(A, B), C);
    int midVal = A + B + C - minVal - maxVal;

 
    for (int i = 0; i < 3; ++i) {
        if (order[i] == 'A') {
            cout << minVal << " ";
        } else if (order[i] == 'B') {
            cout << midVal << " ";
        } else if (order[i] == 'C') {
            cout << maxVal << " ";
        }
    }

    return 0;
}
