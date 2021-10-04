// https://codeforces.com/gym/102951/problem/A

#include <bits/stdc++.h>
using namespace std;

struct ponto {
  int x, y;
}

int euclidist(ponto p1, ponto p2) {
  double dist1, dist2;
  dist1 = sqrt(pow(p1.x))
}

int main() {

}

// Solution
// #include <bits/stdc++.h>
// using namespace std;
// 
// int main() {
// 	int N; cin >> N;
// 	vector<int> x(N), y(N);
// 	for (int& t: x) cin >> t;
// 	for (int& t: y) cin >> t;
// 	double max_dist = 0;
// 	for (int i = 0; i < N; i++) { // for each first point
// 		for (int j = i+1; j < N; j++) { // for each second point
// 			int dx = x[i]-x[j], dy = y[i]-y[j];
// 			int square = dx*dx+dy*dy;
// 			// if the square of the distance between the two points is greater than
// 			// our current maximum, then update the maximum
// 			max_dist = max(max_dist,sqrt(square));
// 		}
// 	}
// 	cout << (int)pow(max_dist,2);
// }

