#include <iostream>
using namespace std;

int main() {
	int E, S, M;
	int year = 1;

	cin >> E >> S >> M;

	while (1) {
		if (((year-1) % 15 + 1) == E && ((year-1) % 28 + 1) == S && ((year - 1) % 19+1) == M) {
			cout << year;
			break;
		}
		year++;
	}

	return 0;
}