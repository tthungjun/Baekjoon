#include <iostream>
using  namespace std;

int main() {
	long long num;
	cin >> num;

	int jump = 0;
	bool a = true;
	int i = 1;

	if (num == 1) {
		jump = 1;
	}
	else {
		while(a) {
			num = num - 6*(i - 1);
			if ((num <= 6 * i) && (num > 6*(i - 1))) {
				jump = i+1;
				a = false;
			}
			i++;
		}
	}

	cout << jump;

	return 0;
}

int main() {
	long long num;
	cin >> num;

	if (num == 1) {
		cout << 1;
		return 0;
	}

	int jump = 1;
	while (num > 1) {
		num -= 6 * jump;
		jump++;
	}

	cout << jump;

	return 0;
}


// 1 , 1*6, 2*6, 3*6, 4*6