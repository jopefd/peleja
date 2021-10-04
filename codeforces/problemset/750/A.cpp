// https://codeforces.com/problemset/problem/750/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, melhor;
  cin >> n >> k;
  int inicio = 0;
  int fim = n;
  while (inicio <= fim) {
    int meio = inicio + (fim - inicio) / 2;
    if (5 * meio * (meio + 1) / 2 + k <= 240) {
      melhor = meio;
      inicio = meio + 1;
    } else fim = meio - 1;
  }
  cout << melhor;
}
