#include <iostream>
#include <vector>
using namespace std;

int main() {
	int row, col, row2, col2;
	cin >> row >> col;
	vector<vector<int>> mat(row, vector<int> (col));

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> mat[i][j];
		}
	}

	cin >> row2 >> col2;
	vector<vector<int>> mat2(row2, vector<int>(col2));

	for (int i = 0; i < row2; i++) {
		for (int j = 0; j < col2; j++) {
			cin >> mat2[i][j];
		}
	}

	vector<vector<int>> result (row, vector<int>(col2));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col2; j++) {
			for (int k = 0; k < col; k++) {
				result[i][j] += mat[i][k] * mat2[k][j];
			}
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col2; j++) {
			cout << result[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}