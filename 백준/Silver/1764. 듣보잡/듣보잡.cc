#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<string> no_listen(n);
	vector<string> no_see(m);
	vector<string> no_listen_see;
	if (n >= m) {
		no_listen_see.resize(m);
	}
	else {
		no_listen_see.resize(n);
	}

	for (int i = 0; i < n; i++) {
		cin >> no_listen[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> no_see[i];
	}
	sort(begin(no_listen), end(no_listen));
	sort(begin(no_see), end(no_see));

	auto iter = set_intersection(begin(no_listen), end(no_listen), begin(no_see), end(no_see), no_listen_see.begin());
	no_listen_see.resize(iter - no_listen_see.begin());

	cout << no_listen_see.size() << "\n";
	for (int i = 0; i < no_listen_see.size(); i++) {
		cout << no_listen_see[i] << '\n';
	}

	return 0;
}