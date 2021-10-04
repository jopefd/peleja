// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  for (int i = 0; i < n; i++) {
    string w; cin >> w;
    if (w.length() <= 10) cout << w << "\n";
    else cout << w[0] << w.length() - 2 << w[w.length()-1] << "\n";
  }
}
