#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(begin(v), end(v));

	int x;
	cin >> x;

	int i = 0, j = n - 1, cnt = 0;

	while (i < j) {
		if (v[i] + v[j] == x) {
			cnt++;
			j--;
		}
		else if (v[i] + v[j] > x) {
			j--;
		}
		else if (v[i] + v[j] < x) {
			i++;
		}
	}

	cout << cnt;

	return 0;
}