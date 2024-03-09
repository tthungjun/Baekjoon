#include <iostream>
#include <cmath>
using namespace std;

int main() {
	string n;
	int b;
	cin >> n >> b;

	long long sum = 0;

	for (int i = n.size() - 1; i >= 0; i--) {
		if (int(n[n.size() - i - 1]) >= 48 && int(n[n.size() - i - 1]) < 58)
			sum += pow(b, i) * (int(n[n.size() - i - 1]) - 48);
		else sum += pow(b, i) * (int(n[n.size() - i - 1]) - 55);
	}

	cout << sum;

	return 0;
}