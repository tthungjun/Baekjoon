#include <iostream>
#include <deque>
#include <vector>
using namespace std;

char deq(string cmd) {
	if (cmd == "push_front") {
		return 'p';
	}
	else if (cmd == "push_back") {
		return 'P';
	}
	else if (cmd == "pop_front") {
		return 'o';
	}
	else if (cmd == "pop_back") {
		return 'O';
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
	deque<int> v;
	vector<int> result;

	while (1) {
		if (count == num) {
			break;
		}
		cin >> c;
		cmd = deq(c);

		switch (cmd) {
		case 'p':
			int a;
			cin >> a;
			v.push_front(a);
			count++;
			break;
		case 'P':
			int k;
			cin >> k;
			v.push_back(k);
			count++;
			break;
		case 'o':
			if (v.size() > 0) {
				result.push_back(v[0]);
				v.pop_front();
			}
			else {
				result.push_back(-1);
			}
			count++;
			break;
		case 'O':
			if (v.size() > 0) {
				result.push_back(*(v.end() - 1));
				v.pop_back();
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
}