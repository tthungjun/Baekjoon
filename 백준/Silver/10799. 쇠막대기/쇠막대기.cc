#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;
	stack<int> st;
	vector<int> v;
	int count1 = 0;
	int count2 = 0;
	int sum = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			count1++;
			count2++;
			st.push(count1);
			v.push_back(count1);
		}
		else if (s[i] == ')') {
			v.push_back(st.top());
			if (v[v.size() - 1] == v[v.size() - 2]) {
				count2--;
				st.pop();
				sum += count2;
			}
			else if (v[v.size() - 1] != v[v.size() - 2]) {
				count2--;
				st.pop();
				sum += 1;
			}
		}
	}

	cout << sum;

	return 0;
}