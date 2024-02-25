#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	cin >> n1;
	cin >> n2;

	cout << n1 * (n2 - (n2 / 10) * 10) << '\n';
	cout << n1 * ((n2 - (n2 / 100)*100) / 10) << '\n';
	cout << n1 * (n2 / 100) << '\n';
	cout << n1 * n2;

	return 0;
}