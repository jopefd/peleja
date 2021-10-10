///
/// Codeforces Round #731 (Div. 3)
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
        int k, m, n;
        cin >> k >> m >> n;

        vector<int> a(m), b(n);
        for (int i = 0; i < m; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int pos1 = 0, pos2 = 0;
        vector<int> actions;
        bool okay = true;

        while (pos1 != m || pos2 != n) {
            if (pos1 != m && a[pos1] == 0) {
                actions.push_back(0);
                k++;
                pos1++;
            } else if (pos2 != n && b[pos2] == 0) {
                actions.push_back(0);
                k++;
                pos2++;
            } else if (pos1 != m && a[pos1] <= k) {
                actions.push_back(a[pos1]);
                pos1++;
            } else if (pos2 != n && b[pos2] <= k) {
                actions.push_back(b[pos2]);
                pos2++;
            } else {
                cout << "-1" << endl;
                okay = false;
                break;
            }
        }

        if (okay) {
            for (auto& a : actions) cout << a << " ";
            cout << endl;
        }
    }
}
