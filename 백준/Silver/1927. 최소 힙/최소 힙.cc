#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <functional>
using namespace std;

/*int main() {
	int n, m;
	cin >> n;

	list<int> heap;

	for (int i = 0; i < n; i++) {
		cin >> m;

		if (m == 0 && heap.empty()) {
			cout << 0 << '\n';
		}
		else if (m == 0 && !heap.empty()) {
			cout << heap.front() << '\n';
			heap.pop_front();
		}
		else {
			heap.push_back(m);
			heap.sort();
		}
	}

	return 0;
}*/

int main() {
	int n, m;
	cin >> n;

	priority_queue <int, vector<int>, greater<int>> heap;
	vector<int> answer;

	for (int i = 0; i < n; i++) {
		cin >> m;

		if (m == 0 && heap.empty()) {
			answer.push_back(0);
		}
		else if (m == 0 && !heap.empty()) {
			answer.push_back(heap.top());
			heap.pop();
		}
		else {
			heap.push(m);
		}
	}

	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << '\n';
	}

	return 0;
}