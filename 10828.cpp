#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int main() {
	int case_num;
	stack<int> s;
	vector<int> op;
	string cmd;
	int x;
	cin >> case_num;
	
	for (int i = 0; i < case_num; i++) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> x;
		}

		if (cmd == "push") {
			s.push(x);
		}
		else if (cmd == "pop") {
			if (!s.empty()) {
				op.push_back(s.top());
				s.pop();
			}
			else {
				op.push_back(-1);
			}
		}
		else if (cmd == "size") {
			op.push_back(s.size());
		}
		else if (cmd == "empty") {
			if (s.empty()) {
				op.push_back(1);
			}
			else {
				op.push_back(0);
			}
		}
		else if (cmd == "top") {
			if (s.empty()) {
				op.push_back(-1);
			}
			else {
				op.push_back(s.top());
			}
		}
	}

	for (int elem : op) {
		cout << elem << endl;
	}
	
	return 0;
}