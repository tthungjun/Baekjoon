#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// ���ÿ��� ���� ���� �� top()�� �ִ� ���� ��������� ���߿� pop�� �� �� ������ �� ����.
// ���࿡ 4�� �Է��ϰ� 2�� �Է��ߴ� ġ�� ���߿� 3�� pop�� �� ������ ����

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