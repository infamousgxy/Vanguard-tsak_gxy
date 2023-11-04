#include<iostream>
#include<cstring>
using namespace std;

int main() {
    string s;
    int n, i, j;
    cin >> n;
    cin >> s;

    for (i = 0; i < s.size(); ++i) {
        for (j = 1; j <= n; ++j) {
            if (islower(s[i])) {
                ++s[i];
                if (s[i] > 'z')
                    s[i] = 'a';
            } else if (isupper(s[i])) {
                ++s[i];
                if (s[i] > 'Z')
                    s[i] = 'A';
            }
        }
    }

    cout << s;
    return 0;
}

