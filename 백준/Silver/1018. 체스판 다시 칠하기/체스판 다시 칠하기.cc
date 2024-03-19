#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> bw(8, vector<char>(8));
vector<vector<char>> wb(8, vector<char>(8));
int cnt1 = 0, cnt2 = 0;

int countBW(int x, int y, vector<vector<char>>& v);
int countWB(int x, int y, vector<vector<char>>& v);

int main() {
	int n, m;
	cin >> n >> m;

	int min1 = 12345, min2 = 12345;
	vector<vector<char>> chess(n, vector<char>(m));

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0) bw[i][j] = 'B';
			else bw[i][j] = 'W';
		}
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0) wb[i][j] = 'W';
			else wb[i][j] = 'B';
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> chess[i][j];
	}

	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			int a = countBW(i, j, chess);
			if (a < min1) min1 = a;
		}
	}

	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			int a = countWB(i, j, chess);
			if (a < min2) min2 = a;
		}
	}

	cout << min(min1, min2);

	return 0;
}

int countBW(int x, int y, vector<vector<char>>& v) {
	cnt1 = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (bw[i][j] != v[i + x][j + y]) cnt1++;
		}
	}

	return cnt1;
}

int countWB(int x, int y, vector<vector<char>>& v) {
	cnt2 = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (wb[i][j] != v[i + x][j + y]) cnt2++;
		}
	}

	return cnt2;
}