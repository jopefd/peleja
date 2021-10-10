///
/// Código de: mohandsakr
/// Reescrito por: João Pedro F. Dantas
/// Submissão: #131079621
/// Veredito: aceito
/// Data: 2021-10-07
/// Link do problema: https://codeforces.com/problemset/problem/1/A
/// Link do código original:
/// https://github.com/mohandsakr/my-problem-solving-solutions-on-codeforces.com/blob/master/1%20A.%20Theatre%20Square.cpp
///

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string x_str = "";
        string y_str = "";

        string cord_str;
        cin >> cord_str;

        int r_i = cord_str.find("R");
        int c_i = cord_str.find("C");

        if (r_i == 0 && c_i - r_i > 1) {
            bool y_ok = false;

            for (int i = 1; i < cord_str.length(); i++) {
                if (y_ok)
                    x_str += cord_str[i];
                else if (cord_str[i] != 'C')
                    y_str += cord_str[i];
                else
                    y_ok = true;
            }

            int x = stoi(x_str);
            x_str = "";
            while (x > 0) {
                x_str += x % 26 + 'A' - 1;
                x -= 26;
            }

            cout << x_str << y_str;
        } else {
            binary_search(cord_str.begin(), cord_str.end(),
                          [](char &c) { return isdigit(c); });
        }
    }

    return 0;
}