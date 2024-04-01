#include <iostream>
#include <vector>
using namespace std;

void dfs(int row, int col, int m, int n, vector<vector<int>>& v) {
	if (row < 0 || col < 0 || row >= m || col >= n) return;
	if (v[row][col] == 0) return;

	v[row][col] = 0;

	dfs(row + 1, col, m, n, v);
	dfs(row, col + 1, m, n, v);
	dfs(row - 1, col,m, n, v);
	dfs(row, col - 1, m, n, v);
}

int main() {
	int t;
	cin >> t;

	for (int j = 0; j < t; j++) {

		int m, n, k;
		cin >> m >> n >> k;

		vector<vector<int>> v(m, vector<int>(n));

		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			v[x][y] = 1;
		}

		int cnt = 0;
		for (int i = 0; i < m; i++) {
			for (int k = 0; k < n; k++) {
				if (v[i][k]) {
					cnt++;
					dfs(i, k, m , n, v);
				}
			}
		}

		cout << cnt << '\n';
	}

	return 0;
}