#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n;
	cin >> m;

	vector<int> num(n);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		num[i] = a;
	}

	sort(num.begin(), num.end());

	auto start = num.begin();
	auto end = start + 1;

	int cnt = 0;
	int sum = *start + *end;

	while (start != num.end() - 1) {
		if (sum != m) {
			if (end == num.end() - 1) {
				start += 1;
				end = start + 1;
				if (end != num.end())
					sum = *start + *end;
				continue;
			}
			end = end + 1;
			sum = *start + *end;
		}
		else {
			cnt++;
			start += 1;
			end = start + 1;
			if (end != num.end())
				sum = *start + *end;
		}
	}

	cout << cnt;

	return 0;
}