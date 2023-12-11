#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// 스택에서 수를 빼줄 때 top()에 있는 것을 제거해줘야 나중에 pop을 할 때 오류가 안 생김.
// 만약에 4를 입력하고서 2를 입력했다 치면 나중에 3을 pop할 때 오류가 생김

/*int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	stack<int> st;
	vector<string> v;
	int a, cnt = 0;
	int k = 1;

	while (cnt < n) {
		cin >> a;
		if (st.empty() || st.top() < a) {
			for (int i = k; i <= a; i++) {
				st.push(i);
				v.push_back("+");
				k++;
			}
			if (st.empty()) {
				cout << "NO";
				return 0;
			}
			st.pop();
			v.push_back("-");
		}
		else {
			bool found = false;
			if (a == st.top()) {
				found = true;
			}
			for (int j = st.top(); j >= a; j--) {
				st.pop();
				v.push_back("-");
			}
			if (!found) {
				cout << "NO";
				return 0;
			}
		}
		cnt++;
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}

	return 0;
}*/