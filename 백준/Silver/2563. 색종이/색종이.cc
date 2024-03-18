#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int s[101][101] = { 0 };
	int width = 0;

	for (int k = 1; k <= n; k++) {
		int a, b;
		cin >> a >> b;
		for (int i = a; i < a + 10; i++) {
			for (int j = b; j < b + 10; j++) {
				if (s[i][j] == 0) {
					s[i][j] = 1;
				}
			}
		}
	}

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (s[i][j] == 1) {
				width++;
			}
		}
	}

	cout << width;

	return 0;
}