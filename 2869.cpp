#include <iostream>
using namespace std;

// runtime 좀 더 효율적으로!!
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B, V;
	cin >> A >> B >> V;

	int day = (V - B - 1)/(A - B) + 1;

	cout << day;

	return 0;
}

/*int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B, V;
	cin >> A >> B >> V;
	int day = 0;

	while (1) {
		if (V - A > 0) {
			V = V - A + B;
			day++;
		}
		else {
			day++;
			break;
		}
	}

	cout << day;

	return 0;
}*/