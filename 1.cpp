#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// 2745번 다시 보기!!
int main() {
	int N;
	string num;
	unsigned long int result = 0;
	bool a = true;
	int count = 0;

	cin >> num >> N;
	
	while (a) {
		for (int i = 0; i < num.size(); i++) {
			if (N < 10) {
				if (num[i] - 48 >= N) {
					count++;
					break;
				}
			}
			else {
				if (num[i] - 55 >= N) {
					count++;
					break;
				}
			}
		}

		if (count == 1) {
			cout << "Can't calculate";
			break;
		}

		if (N <= 10) {
			for (int i = 0; i < num.size(); i++) {
				int unit = num[i] - 48;
				result += int(unit * pow(N, num.size() - 1 - i));
			}
		}
		else {
			for (int i = 0; i < num.size(); i++) {
				int unit = num[i] - 55;
				result += unit * pow(N, num.size() - 1 - i);
			}
		}

		a = false;

		cout << result;
	}

	return 0;
}
