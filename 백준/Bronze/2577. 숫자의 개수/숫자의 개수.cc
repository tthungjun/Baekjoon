#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	long long n;
	n = a * b * c;

	string k = to_string(n);

	vector<int> v(10);

	for (int i = 0; i < k.length(); i++) {
		v[int(k[i]) - 48]++;
	}

	for (int i = 0; i < 10; i++) {
		cout << v[i] << '\n';
	}

	return 0;
}