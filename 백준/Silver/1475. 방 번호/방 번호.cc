#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	long m;
	cin >> m;

	string n = to_string(m);
	int cnt = 0;

	vector<int> v(10);
	for (int i = 0; i < n.size(); i++) {
		v[int(n[i] - '0')]++;
	}

	if ((v[6] + v[9]) % 2 == 1) {
		v[6] = (v[6] + v[9]) / 2 + 1;
	}
	else {
		v[6] = (v[6] + v[9]) / 2;
	}

	for (int i = 0; i < 9; i++) {
		if (cnt < v[i]) cnt = v[i];
	}

	cout << cnt;

	return 0;
}