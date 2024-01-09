#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
	int n, sum = 0;
	vector<int> time;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		time.push_back(k);
	}
	sort(time.begin(), time.end());

	for (int i = 0; i < n; i++) {
		sum += time[i] * (n - i);
	}

	cout << sum;

	return 0;
}