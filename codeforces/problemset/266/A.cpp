// https://codeforces.com/problemset/problem/266/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; string s;
  cin >> n; cin >> s;
  for (int i = 0; i < s.length() - 1; i++) {
    if (s[i] == s[i+1]) s.erase(i);
  }
  cout << n - s.length();
}
