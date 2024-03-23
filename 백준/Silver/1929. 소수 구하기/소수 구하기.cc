#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void eratostes(int n, int m, vector<pair<int, bool>>& v) {
	for (int i = 2; i <= sqrt(m); i++) {
		if (v[i].second == 1) {
			for (int j = i + 1; j <= m; j++) {
				if (v[j].first % i == 0) {
					v[j].second = 0;
				}
			}
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;

	vector<pair<int, bool>> v(m + 1);
	for (int i = 2; i <= m; i++) {
		v[i].first = i;
		v[i].second = 1;
	}

	eratostes(n , m, v);

	for (int i = n; i <= m; i++) {
		if (v[i].second == 1) {
			cout << v[i].first << '\n';
		}
	}

	return 0;
}