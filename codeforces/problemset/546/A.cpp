// https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, n, w, c; cin >> k; cin >> n; cin >> w; c = 0;
  for (int b = 1; b <= w; b++) {
    c += b * k;
  }
  cout << abs(c - n);
}
