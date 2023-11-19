#include <iostream>
#include <vector>
using namespace std;

int main() {
	int case_num;
	cin >> case_num;

	vector<int> money(case_num);
	vector<int> quater(case_num);
	vector<int> dime(case_num);
	vector<int> nickel(case_num);
	vector<int> penny(case_num);

	for (int i = 0; i < money.size(); i++) {
		cin >> money[i];
	}

	// 25, 10, 5, 1

	for (int i = 0; i < money.size(); i++) {
		if (money[i] / 25 >= 1) {
			quater[i] = money[i] / 25;
		}
		else {
			quater[i] = 0;
		}

		if ((money[i] - 25 * quater[i]) / 10 >= 1) {
			dime[i] = (money[i] - 25 * quater[i]) / 10;
		}
		else {
			dime[i] = 0;
		}

		if ((money[i] - 25 * quater[i] - 10*dime[i]) / 5 >= 1) {
			nickel[i] = (money[i] - 25 * quater[i] - 10*dime[i]) / 5;
		}
		else {
			nickel[i] = 0;
		}

		if ((money[i] - 25 * quater[i] - 10 * dime[i] - 5*nickel[i]) / 1 >= 1) {
			penny[i] = (money[i] - 25 * quater[i] - 10 * dime[i] - 5 * nickel[i]) / 1;
		}
		else {
			penny[i] = 0;
		}

	}

	for (int i = 0; i < money.size(); i++) {
		cout << quater[i] << " " << dime[i] << " " << nickel[i] << " " << penny[i] << endl;
	}

	return 0;
}