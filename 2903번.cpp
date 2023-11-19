#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;

	long long result = (2 + (pow(2, n) - 1)) * (2 + (pow(2, n) - 1));

	cout << result << endl;

	return 0;
}