// https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  string n; cin >> n;
  bool four = false;
  bool seven = false;
  bool other = false;
  for (int i = 0; i < n.length(); i++) {
    if (n[i] > '0') {
      switch (n[i]) {
        case '4': four = true; break;
        case '7': seven = true; break;
        default: other = true;
      }
      if (other) break;
    }
  }
  if (four && seven && !other) cout << "YES";
  else cout << "NO";
}
