///
/// \author João Pedro F. Dantas
/// \date 2021-10-04
/// \see https://www.urionlinejudge.com.br/judge/en/problems/view/1743
///

#include <bits/stdc++.h>

using namespace std;

int main() {
    string conector1, conector2;
    bool combinam{true};

    getline(cin, conector1);
    getline(cin, conector2);

    for (int i{0}; i < conector1.length(); i += 2) {
        if (conector1[i] == conector2[i]) combinam = false;
    }

    if (combinam)
        cout << "Y\n";
    else
        cout << "N\n";

    return 0;
}
