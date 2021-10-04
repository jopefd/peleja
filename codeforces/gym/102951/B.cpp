// https://codeforces.com/gym/102951/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  short X, N; cin >> N >> X;
  vector<short> a;
  for (short i = 0; i < N; i++) {
    short input; cin >> input;
    a.push_back(input);
  }
  sort(a.begin(), a.end());
  short c = 0;
  while (X -= a[c] > 0) {
    c++;
  }
  cout << c;

  return 0;
}
