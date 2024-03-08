#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> ans(n);

	for (int i = 0; i < n; i++) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		long double dt = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

		if (x1 == x2 && y1 == y2 && r1 == r2) {
			ans[i] = -1;
		}
		else if ((r1 + r2 < dt) || (max(r1, r2) - min(r1, r2) > dt)) {
			ans[i] = 0;
		}
		else if ((r1 + r2 == dt) || (max(r1, r2) == dt + min(r1, r2))) {
			ans[i] = 1;
		}
		else if (r1 + r2 > dt) {
			ans[i] = 2;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << ans[i] << '\n';
	}

	return 0;
}