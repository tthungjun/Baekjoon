#include <iostream>
using namespace std;

int main() {
	int e, s, m;
	cin >> e >> s >> m;

	int year = 1;
	int e_1 = 1, s_1 = 1, m_1 = 1;

	while (true) {
		if (e == e_1 && s == s_1 && m == m_1) {
			cout << year;
			break;
		}
		e_1++;
		if (e_1 == 16) e_1 = 1;
		s_1++;
		if (s_1 == 29) s_1 = 1;
		m_1++;
		if (m_1 == 20) m_1 = 1;

		year++;
	}

	return 0;
}