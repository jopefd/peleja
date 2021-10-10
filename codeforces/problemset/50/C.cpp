///
/// Link do problema: https://codeforces.com/problemset/problem/50/C
///

#include <bits/stdc++.h>
#define inf 0x3f3f3f3f

using namespace std;

int main() {
    int n, a, b, c, d;

    a = b = -inf;
    c = d = inf;
    
    cin >> n;

    for (int i = 1, x, y; i <= n; ++i) {
        cin >> x >> y;
        a = max(x + y, a);
        b = max(x - y, b);
        c = min(x + y, c);
        d = min(x - y, d);
    }

    cout << a + b - c - d + 4;

    return 0;
}
