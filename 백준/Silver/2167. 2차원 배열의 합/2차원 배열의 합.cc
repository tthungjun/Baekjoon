#include <iostream>
#include <vector>
using namespace std;

int main() {
	int row, col;
	cin >> row >> col;
	vector<vector<int>> v(row, vector<int> (col));
	vector<int> answer;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			int num;
			cin >> num;
			v[i][j] = num;
		}
	}

	int k;
	cin >> k;

	for (int a = 0; a < k; a++) {
		int i, j, x, y;
		cin >> i >> j >> x >> y;

		int sum = 0;
		for (int p = i - 1; p < x; p++) {
			for (int q = j - 1; q < y; q++) {
				sum += v[p][q];
			}
		}
		answer.push_back(sum);
	}

	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << '\n';
	}

	return 0;
}