///
/// Contest 1547, Codeforces Round #731 (Div. 3)
/// Reescrição do código do editorial
/// Veredito: aceito
/// João Pedro F. Dantas
/// Natal, 10 de outubro de 2021
///

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        size_t fst = s.find("a");

        if (fst == string::npos) {
            cout << "NO" << endl;
            continue;
        }

        size_t lst = fst;
        size_t n = s.length();
        bool alphab = true;

        for (size_t i = 1; i < n; i++) {
            size_t nxt = s.find(char('a' + i));

            if (nxt == string::npos || (nxt != fst - 1 && nxt != lst + 1)) {
                alphab = false;
                break;
            } else {
                fst = min(fst, nxt);
                lst = max(lst, nxt);
            }
        }

        cout << (alphab ? "YES" : "NO") << endl;
    }
}
