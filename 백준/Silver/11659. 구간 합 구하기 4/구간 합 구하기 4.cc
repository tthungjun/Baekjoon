#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;

	vector<int> v(N);
	vector<int> sum(N);

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v[i] = a;
	}

	sum[0] = v[0];
	for (int i = 1; i < N; i++) {
		sum[i] = sum[i - 1] + v[i];
	}
	

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;

		if (a == 1) {
			cout << sum[b - 1] << '\n';
		}
		else {
			cout << sum[b - 1] - sum[a - 2] << '\n';
		}
	}

	return 0;
}