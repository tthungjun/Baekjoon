#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	auto start = 1;
	auto end = 1;

	int cnt = 0;
	int sum = 1;

	while (end != n + 1) {
		if (sum < n) {
			end = end + 1;
			sum += end;
		}
		else if (sum > n) {
			sum -= start;
			start = start + 1;
		}
		else {
			cnt++;
			end = end + 1;
			sum += end;
		}
	}

	cout << cnt;

	return 0;
}