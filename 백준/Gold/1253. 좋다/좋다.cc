#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		long long find = v[i];
		int x = 0;
		int y = n - 1;

		while (x < y) {
			if (find == v[x] + v[y]) {
				if (x != i && y != i) {
					cnt++;
					break;
				}
				else if (x == i) {
					x++;
				}
				else if (y == i) {
					y--;
				}
			}
			else if (find > v[x] + v[y]) {
				x++;
			}
			else {
				y--;
			}
		}
	}

	cout << cnt;

	return 0;
}