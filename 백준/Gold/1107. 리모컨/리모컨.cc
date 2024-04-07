#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	cin >> m;

	bool broken[10];
	vector<int> v;

	for (int i = 0; i < 10; i++) {
		broken[i] = 1;
	}

	int cnt = 0;
	string num = to_string(n);

	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		broken[a] = 0;
	}

	for (int i = 0; i < 10; i++) {
		if (broken[i] == 0) v.push_back(i);
	}

	if (n == 100) {
		cout << cnt;
		return 0;
	}

	int a = 0;
	for (int i = 0; i < 999999; i++) {
		if (abs(n - a) > abs(n - i - 1)) {
			string channel = to_string(i + 1);

			if (v.size() == 0) a = i + 1;
			else {
				for (int j = 0; j < v.size(); j++) {
					if (channel.find(v[j] + 48) != string::npos) {
						break;
					}
					if (j == v.size() - 1) {
						a = i + 1;
					}
				}
			}
		}

		if (a > n) break;
	}

	string nn = to_string(n);

	if (abs(n - a) + nn.size() > abs(n - 100)) {
		cout << abs(n - 100);
		return 0;
	}

	if (a == 0) {
		for (int i = 0; i < 10; i++) {
			if (broken[i] == true) {
				a = i;
				break;
			}
			if (i == 9) a = 100;
		}
	}
	
	if (v.size() == 0) {
		if (abs(n - a) > abs(n - 100)) {
			cout << abs(n - 100);
			return 0;
		}
		else {
			cout << nn.size();
			return 0;
		}
	}

	if (a == 100) {
		cout << abs(a - n);
		return 0;
	}

	if (abs(n - a) > abs(n - 100)) {
		cout << abs(n - 100);
		return 0;
	}

	cnt = to_string(a).length();
	cnt += abs(a - n);

	cout << cnt;

	return 0;
}