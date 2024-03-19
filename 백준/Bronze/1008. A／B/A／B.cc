#include <iostream>
using namespace std;

int main() {
	long double a, b, c;
	cin >> a >> b;

	c = a / b;
	cout.precision(10);

	cout << c;

	return 0;
}