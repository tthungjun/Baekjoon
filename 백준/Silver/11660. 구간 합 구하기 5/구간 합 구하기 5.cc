#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	vector<vector<int>> v(n, vector<int>(n));
	vector<vector<int>> sum(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int a;
			cin >> a;
			v[i][j] = a;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0) {
				sum[i][j] = v[i][j];
			}
			else {
				sum[i][j] = sum[i][j - 1] + v[i][j];
			}
		}
	}

	for (int i = 0; i < m; i++) {
		int s = 0;
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int j = x1 - 1; j < x2; j++) {
			if (y1 == 1) {
				s = s + sum[j][y2 - 1];
			}
			else {
				s = s + sum[j][y2 - 1] - sum[j][y1 - 2];
			}
		}

		cout << s << '\n';
	}

	return 0;
}