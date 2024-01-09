#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num, sum, count = 0;
	vector<int> coin;
	cin >> num >> sum;

	for (int i = 0; i < num; i++) {
		int k;
		cin >> k;
		coin.push_back(k);
	}

	for (int i = coin.size() - 1; i >= 0; i--) {
		if (sum / coin[i] >= 1) {
			count += sum / coin[i];
			sum = sum - (sum / coin[i]) * coin[i];
		}
	}

	cout << count;

	return 0;
}