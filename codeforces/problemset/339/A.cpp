// https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  for (int i = 0; i < s.length() - 1; i++) {
    for (int j = i; j < s.length(); j++) {
      if (s[i] == '+' || s[j] == '+') continue;
      if (s[i] > s[j]) {
        char x = s[i];
        s[i] = s[j];
        s[j] = x;
      }
    }
  }
  cout << s;
}
