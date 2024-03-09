#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<bool> plug(n);
	for (int i = 0; i < n; i++) {
		bool a;
		cin >> a;
		plug[i] = a;
	}

	int m;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int g, num;
		cin >> g >> num;

		if (g == 1) {
			for (int i = 0; i < n; i++) {
				if ((i + 1) % num == 0) {
					plug[i] = 1 - plug[i];
				}
			}
		}
		else {
			int start = num - 1;
			int end = num + 1;
			plug[num - 1] = 1 - plug[num - 1];

			while (start != 0 && end != n + 1) {
				if (plug[start - 1] == plug[end - 1]) {
					plug[start - 1] = 1 - plug[start - 1];
					plug[end - 1] = 1 - plug[end - 1];
					start--;
					end++;
				}
				else break;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << plug[i - 1] << " ";
		if (i % 20 == 0) {
			cout << '\n';
		}
	}

	return 0;
}