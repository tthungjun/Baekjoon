#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int stair, sum = 0, stage = -1, cnt = 0;
	cin >> stair;

	vector<int> v;
	for (int i = 0; i < stair; i++) {
		int point;
		cin >> point;
		v.push_back(point);
	}

	vector<int> stair_sum(stair);
	stair_sum[0] = v[0];
	stair_sum[1] = v[0] + v[1];
	stair_sum[2] = v[2] + max(v[0], v[1]);

	for (int i = 3; i < stair; i++) {
		stair_sum[i] = v[i] + max(stair_sum[i - 2], stair_sum[i - 3] + v[i - 1]);
	}

	cout << stair_sum[stair - 1];

	return 0;
}