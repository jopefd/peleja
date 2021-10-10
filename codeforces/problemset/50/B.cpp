///
/// Código de Waqar-107, reescrito por João Pedro F. Dantas
/// Link do problema: https://codeforces.com/problemset/problem/50/B
/// Link do repositório original: https://github.com/Waqar-107/Codeforces
///

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, long long> mapa;
    for (long long i{0}; i < s.length(); i++) mapa[s[i]]++;

    map<char, long long>::iterator it{mapa.begin()};
    long long num_pares{0};
    while (it != mapa.end()) {
        num_pares += (it->second * it->second);
        it++;
    }

    cout << num_pares;

    return 0;
}
