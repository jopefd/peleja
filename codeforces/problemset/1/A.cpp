///
/// Código de: mohandsakr
/// Reescrito por: João Pedro F. Dantas
/// Submissão: #131079621
/// Veredito: aceito
/// Data: 2021-10-07
/// Link do problema: https://codeforces.com/problemset/problem/1/A
/// Link do código original: https://github.com/mohandsakr/my-problem-solving-solutions-on-codeforces.com/blob/master/1%20A.%20Theatre%20Square.cpp
///

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long m, n, a;
    cin >> m >> n >> a;
    long long ans = ceil((double)m / a) * ceil((double)n / a);
    cout << ans;
}
