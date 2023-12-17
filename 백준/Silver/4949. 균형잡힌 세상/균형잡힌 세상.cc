#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
	string sentence;
	vector<string> answer;

	while (true) {
		stack<char> balance;
		getline(cin, sentence);
		if (sentence == ".") {
			break;
		}

		bool judge = true;
		for (char elem : sentence) {
			if (elem == '(' || elem == '[') {
				balance.push(elem);
			}
			else if (elem == ')') {
				if (!balance.empty() && balance.top() == '(') {
					balance.pop();
				}
				else {
					judge = false;
					break;
				}
			}
			else if (elem == ']') {
				if (!balance.empty() && balance.top() == '[') {
					balance.pop();
				}
				else {
					judge = false;
					break;
				}
			}
		}

		if (judge && balance.empty()) {
			answer.push_back("yes");
		}
		else {
			answer.push_back("no");
		}
	}

	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << '\n';
	}

	return 0;
}