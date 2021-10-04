// https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  // count uppercase letters of s
  int u = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] < 97) u++;
  }
  int to_upper = u > s.length() / 2;
  for (int i = 0; i < s.length(); i++) {
    if (to_upper && s[i] >= 97) s[i] -= 32;
    else if (!to_upper && s[i] < 97) s[i] += 32;
  }
  cout << s;
}
