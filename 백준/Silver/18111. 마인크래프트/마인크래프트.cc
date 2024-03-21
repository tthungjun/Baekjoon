#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m, b;
	cin >> n >> m >> b;

	vector<vector<int>> mincraft(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mincraft[i][j];
		}
	}

	int low_layer = 0;
	int h_layer = 256;

	int t = 0;
	int mid_block = b;
	int f_layer = low_layer;
	long int f_t = 1280000000;

	while (low_layer <= h_layer) {
		t = 0;
		mid_block = b;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {

				if (low_layer < mincraft[i][j]) {
					t += 2 * (mincraft[i][j] - low_layer);
					mid_block = mid_block + mincraft[i][j] - low_layer;
				}

				if (low_layer > mincraft[i][j]) {
					t += low_layer - mincraft[i][j];
					mid_block = mid_block - (low_layer - mincraft[i][j]);
				}
			}
		}

		if ((mid_block >= 0) && (t <= f_t)) {
			f_layer = low_layer;
			f_t = t;
		}

		low_layer++;
	}

	cout << f_t << " " << f_layer;

	return 0;
}