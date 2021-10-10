///
/// \author João Pedro F. Dantas
/// \date 2021-10-05
/// \note Resposta incompleta
/// \see https://www.urionlinejudge.com.br/judge/en/problems/view/1760
///

#include <bits/stdc++.h>

using namespace std;

int main() {
    const double pi = atan(1) * 4;

    int lado_triangulo;
    while (cin >> lado_triangulo) {
        cout << (2 * sqrt(3) * pow(lado_triangulo, 2)) / 5 << endl;
    }

    return 0;
}

