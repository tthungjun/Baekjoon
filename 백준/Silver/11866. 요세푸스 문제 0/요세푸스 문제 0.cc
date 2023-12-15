#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);

	int n, k, count = 0;
	cin >> n >> k;

	queue<int> circle;
	for (int i = 1; i <= n; i++) {
		circle.push(i);
	}

	vector<int> v;
	while (circle.size() != 0) {
		for (int i = 0; i < circle.size(); i++) {
			int temp = circle.front();
			circle.pop();
			count++;
			if (count % k == 0) {
				v.push_back(temp);
			}
			else {
				circle.push(temp);
			}
		}
	}

	cout << "<";
	for (int i = 0; i < v.size() - 1; i++) {
		cout << v[i] << ", ";
	}
	cout << v[v.size() - 1] << ">";

	return 0;
}