#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<pair<int,int>> xy(n);

	for (int i = 0; i < n; i++) {
		cin >> xy[i].first >> xy[i].second;
	}

	sort(xy.begin(), xy.end());

	for (int i = 0; i < n; i++) {
		cout << xy[i].first << " " << xy[i].second << '\n';
	}

	return 0;
}