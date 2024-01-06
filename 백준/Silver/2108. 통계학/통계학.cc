#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> statistic;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		statistic.push_back(num);
	}

	sort(statistic.begin(), statistic.end());

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += statistic[i];
	}
	int ave = floor(float(sum) / float(n) + 0.5);

	int center = statistic[statistic.size() / 2];

	auto a = statistic.begin();
	int many = 0;
	int value;
	int count = 0;
	while (a != statistic.end()) {
		auto upper = upper_bound(begin(statistic), end(statistic), *a);
		auto lower = lower_bound(begin(statistic), end(statistic), *a);
		int many2 = static_cast<int>(upper - lower);

		if (many <= many2) {
			if (many == many2 && count < 1) {
				many = many2;
				value = *a;
				count++;
			}
			else if (many < many2) {
				many = many2;
				value = *a;
				count = 0;
			}
		}
		a = upper;
	}

	int dif = statistic[statistic.size() - 1] - statistic[0];

	cout << ave << '\n';
	cout << center << '\n';
	cout << value << '\n';
	cout << dif << '\n';

	return 0;
}