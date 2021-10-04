// https://codeforces.com/problemset/problem/158/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k; cin >> n; cin >> k;
  int kth = 0, p = 0;
  for (int i = 1; i <= n; i++) {
    int a; cin >> a;
    if (i == k) kth = a;
    if (a > 0) p++;
    if (a > 0 && a < kth) p--;
  }
  cout << p;
}
