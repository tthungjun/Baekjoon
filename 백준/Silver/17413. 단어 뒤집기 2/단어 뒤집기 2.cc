#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	stack<char> st;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '<') {
			if (!st.empty()) {
				int size = st.size();
				for (int j = 0; j < size; j++) {
					cout << st.top();
					st.pop();
				}
				i--;
			}
			else {
				cout << s[i];
				while (s[i] != '>') {
					i++;
					cout << s[i];
				}
			}
		}
		else {
			if (s[i] != ' ') {
				st.push(s[i]);
			}
			else {
				int size = st.size();
				for (int j = 0; j < size; j++) {
					cout << st.top();
					st.pop();
				}
				cout << ' ';
			}
		}
	}

	if (!st.empty()) {
		int size = st.size();
		for (int j = 0; j < size; j++) {
			cout << st.top();
			st.pop();
		}
	}

	return 0;
}