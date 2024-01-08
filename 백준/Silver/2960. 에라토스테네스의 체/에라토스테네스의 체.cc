#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	queue<int> minority;
	vector<int> v;
	int n, k, count = 0;
	cin >> n >> k;
	for (int i = 2; i <= n; i++) {
		minority.push(i);
	}

	int num;
	while (1) {
		int a = minority.front();
		minority.pop();
		int size = minority.size();
		v.push_back(a);
		count++;
		for (int i = 0; i < size; i++) {
			if (minority.front() % a != 0) {
				num = minority.front();
				minority.pop();
				minority.push(num);
			}
			else {
				num = minority.front();
				minority.pop();
				count++;
				v.push_back(num);
			}
		}

		if (count >= k) {
			cout << v[k - 1];
			break;
		}
	}

	return 0;
}