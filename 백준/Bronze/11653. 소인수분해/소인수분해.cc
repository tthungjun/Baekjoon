#include <iostream>
using namespace std;

void Factorization(int x, int n) {
	if (n == 1) {
		return;
	}

	if (n % x == 0) {
		cout << x << '\n';
		Factorization(x, n / x);
	}
	else {
		x++;
		Factorization(x, n);
	}
}

int main() {
	int n;
	cin >> n;

	Factorization(2, n);

	return 0;
}