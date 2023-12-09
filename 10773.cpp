#include <iostream>
#include <stack>
using namespace std;

int main() {
	int num, elem, sum = 0;
	cin >> num;
	stack<int> st;

	for (int i = 0; i < num; i++) {
		cin >> elem;
		if (elem == 0) {
			st.pop();
		}
		else {
			st.push(elem);
		}
	}

	int size = st.size();
	for (int i = 0; i < size; i++) {
		sum += st.top();
		st.pop();
	}
	cout << sum;

	return 0;
}