// https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int c = 0;
  int min = 0;
  for (int i = 0; i < n - 1; i++) {
    int a, b; cin >> a >> b;
    c += b - a;
    if (c > min) min = c;
  }
  cout << min;
}
