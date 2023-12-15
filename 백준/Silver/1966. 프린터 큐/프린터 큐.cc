#include <iostream>
#include <queue> 
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;

	int n, m;
	vector<int> v;
	for (int i = 0; i < t; i++) {
		int count = 0;
		cin >> n >> m;

		priority_queue<int> printer_q; // 인덱스 값, 우선 순위 값
		queue<pair<int, int>> q;
		for (int j = 0; j < n; j++) {
			int ipt;
			cin >> ipt;
			q.push({j, ipt});
			printer_q.push(ipt);
		}

		while (!q.empty()) {
			int index = q.front().first;
			int impt = q.front().second;
			pair<int, int> a = q.front();
			q.pop();
			if (impt == printer_q.top()) {
				printer_q.pop();
				count++;
				if (index == m) {
					v.push_back(count);
					break;
				}
			}
			else {
				q.push(a);
			}
		}
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}

	return 0;
}