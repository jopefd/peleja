// https://codeforces.com/problemset/problem/791/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, y; cin >> a >> b; y = 0;
  while (a <= b) {
    a *= 3; b *= 2; y++;
  }
  cout << y;
}

