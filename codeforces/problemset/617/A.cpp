// https://codeforces.com/problemset/problem/617/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int x; cin >> x;
  int y = 5;
  int s = 0;
  while (y > 0) {
    if (x / y > 0) {
      s += x / y;
      x %= y;
    } else y--;
  }
  cout << s;
}
