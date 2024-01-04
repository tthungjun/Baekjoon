#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

char command (string cmd) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	if (cmd == "add") {
		return 'a';
	}
	else if (cmd == "remove") {
		return 'r';
	}
	else if (cmd == "check") {
		return 'c';
	}
	else if (cmd == "toggle") {
		return 't';
	}
	else if (cmd == "all") {
		return 'A';
	}
	else if (cmd == "empty") {
		return 'e';
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int num;
	cin >> num;

	string c;
	char cmd;
	int S = 0;
	vector<bool> answer;

	for (int i = 0; i < num; i++) {
		cin >> c;
		cmd = command(c);

		switch (cmd) {
		case 'a':
			int n;
			cin >> n;
			S = S | (1 << n);
			break;
		case 'r':
			int x;
			cin >> x;
			S = S & (~(1 << x));
			break;
		case 'c':
			int y;
			cin >> y;
			if ((S & (1 << y)) == 0) {
				answer.push_back(0);
				break;
			}
			else {
				answer.push_back(1);
				break;
			}
		case 't':
			int z;
			cin >> z;
			if ((S & (1 << z)) == 0) {
				S = S | (1 << z);
				break;
			}
			else {
				S = S & (~(1 << z));
				break;
			}
		case 'A':
			S = 2097150;
			break;
		case 'e':
			S = 0;
			break;
		}
	}

	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << '\n';
	}

	return 0;
}