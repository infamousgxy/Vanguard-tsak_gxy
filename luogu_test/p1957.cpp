#include <cctype>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

int n, x, y;
char ss[20], ans[100], k;

int main() {
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        std::cin >> ss;
        if (isalpha(ss[0])) {
            k = ss[0];
            std::cin >> x >> y;
        } else {
            x = atoi(ss);
            std::cin >> y;
        }
        if (k == 'a')
            sprintf(ans, "%d+%d=%d", x, y, x + y);
        else if (k == 'b')
            sprintf(ans, "%d-%d=%d", x, y, x - y);
        else
            sprintf(ans, "%d*%d=%d", x, y, x * y);
        std::cout << ans << std::endl << strlen(ans) << std::endl;
    }
    return 0; 
}
