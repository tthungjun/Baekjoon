#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n;
	vector<int> card(n);
	for (int i = 0; i < n; i++) {
		cin >> card[i];
	}
	sort(card.begin(), card.end());

	cin >> m;
	vector<int> num(m);
	for (int i = 0; i < m; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < m; i++) {
		cout << upper_bound(begin(card), end(card), num[i]) - lower_bound(begin(card), end(card), num[i]) << " ";
	}

	return 0;
}