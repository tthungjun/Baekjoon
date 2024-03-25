#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cout.tie(NULL);

	long n;
	cin >> n;

	vector<int> arr(10001, 0);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr[a] += 1;
	}

	for (int i = 1; i < 10001; i++) {
		if (arr[i] > 0) {
			for (int j = arr[i]; j > 0; j--)
				cout << i << '\n';
		}
	}

	return 0;
}