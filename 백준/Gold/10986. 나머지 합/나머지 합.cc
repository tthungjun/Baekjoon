#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	vector<long long> arr(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		arr[i] = a;
	}

	vector<long long> sum(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		sum[i] = sum[i - 1] + arr[i];
	}

	long long cnt = 0;
	vector<long long> sum2(m, 0);
	for (int i = 1; i <= n; i++) {
		int remainder = sum[i] % m;

		if (remainder == 0) {
			cnt++;
		}
		sum2[remainder]++;
	}

	for (int i = 0; i < m; i++) {
			cnt += (sum2[i] * (sum2[i] - 1) / 2);
	}

	cout << cnt;

	return 0;
}