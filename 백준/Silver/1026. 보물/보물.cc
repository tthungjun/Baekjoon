#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	return a > b;
}

int main() {
	int n;
	cin >> n;

	vector<int> A(n);
	vector<int> B(n);

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> B[i];
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), compare);

	int s = 0;

	for (int i = 0; i < n; i++) {
		s += (A[i] * B[i]);
	}

	cout << s;

	return 0;
}