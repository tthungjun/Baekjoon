#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	int m = 1;
	int ans = 0;

	while (m != n) {
		int k = 0;
		string a = to_string(m);

		k += m;
		for (int i = 0; i < a.size(); i++) {
			k += (int(a[i]) - 48);
		}
		if (k == n) {
			ans = m;
			break;
		}
		m++;
	}

	cout << ans;

	return 0;
}