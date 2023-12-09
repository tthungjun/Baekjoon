#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 나중에 class로 다시 풀어보기!!

/*char que(string cmd) {
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

	int num, count = 0;
	cin >> num;
	char cmd;
	string c;
	vector<int> v;
	vector<int> result;

	while (1) {
		if (count == num) {
			break;
		}
		cin >> c;
		cmd = que(c);

		switch (cmd) {
		case 'p':
			int a;
			cin >> a;
			v.push_back(a);
			count++;
			break;
		case 'P':
			if (v.size() > 0) {
				result.push_back(v[0]);
				for (int i = 0; i < v.size() - 1; i++) {
					v[i] = v[i + 1];
				}
				v.erase(v.end() - 1);
			}
			else {
				result.push_back(-1);
			}
			count++;
			break;
		case 's':
			result.push_back(v.size());
			count++;
			break;
		case 'e':
			if (v.empty()) {
				result.push_back(1);
			}
			else {
				result.push_back(0);
			}
			count++;
			break;
		case 'f':
			if (v.size() > 0) {
				result.push_back(v[0]);
			}
			else {
				result.push_back(-1);
			}
			count++;
			break;
		case 'b':
			if (v.size() > 0) {
				result.push_back(v[v.size() - 1]);
			}
			else {
				result.push_back(-1);
			}
			count++;
			break;
		}
	}
	for (int elem : result) {
		cout << elem << '\n';
	}

	return 0;
}*/