// https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int x = 0;
  int n; cin >> n;
  while (n--) {
    string s; cin >> s;
    if (s[1] == '+') x++;
    if (s[1] == '-') x--;
  }
  cout << x;
}
