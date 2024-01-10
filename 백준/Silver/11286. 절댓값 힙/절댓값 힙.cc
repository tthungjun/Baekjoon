#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int _case;
	cin >> _case;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
	vector<int> v;

	for (int i = 0; i < _case; i++) {
		int num;
		cin >> num;

		if (num == 0) {
			if (q.empty()) {
				v.push_back(0);
			}
			else {
				v.push_back(q.top().second);
				q.pop();
			}
		}
		else {
			q.push({ abs(num), num });
		}
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}

	return 0;
}