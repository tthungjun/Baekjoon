#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	int i = 1;
	while (num >= 1) {
		num -= i;
		i++;
	}

	if ((i - 1) % 2 == 0) {
		cout << num + i - 1 << "/" << i - (num + i - 1) << endl;
	}
	else {
		cout << i - (num + i - 1) << '/' << num + i - 1 << endl;
	}

	return 0;
}