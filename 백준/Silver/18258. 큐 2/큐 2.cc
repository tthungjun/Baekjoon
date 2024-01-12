#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

char que(string cmd) {
	if (cmd == "push") {
		return 'p';
	}
	else if (cmd == "pop") {
		return 'P';
	}
	else if (cmd == "size") {
		return 's';
	}
	else if (cmd == "empty") {
		return 'e';
	}
	else if (cmd == "front") {
		return 'f';
	}
	else if (cmd == "back") {
		return 'b';
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int num;
	cin >> num;
	char cmd;
	string c;
	queue<int> v;
	vector<int> result;

	for (int j = 0; j < num; j++){
		cin >> c;
		cmd = que(c);

		switch (cmd) {
		case 'p':
			int a;
			cin >> a;
			v.push(a);
			break;
		case 'P':
			if (!v.empty()) {
				result.push_back(v.front());
				v.pop();
			}
			else {
				result.push_back(-1);
			}
			break;
		case 's':
			result.push_back(v.size());
			break;
		case 'e':
			if (v.empty()) {
				result.push_back(1);
			}
			else {
				result.push_back(0);
			}
			break;
		case 'f':
			if (!v.empty()) {
				result.push_back(v.front());
			}
			else {
				result.push_back(-1);
			}
			break;
		case 'b':
			if (!v.empty()) {
				result.push_back(v.back());
			}
			else {
				result.push_back(-1);
			}
			break;
		}
	}

	for (int elem : result) {
		cout << elem << '\n';
	}

	return 0;
}