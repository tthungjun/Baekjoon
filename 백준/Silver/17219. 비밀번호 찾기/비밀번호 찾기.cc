#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int _case, site;
	cin >> _case >> site;

	map<string, string> m;
	for (int i = 0; i < _case; i++) {
		string s, pw;
		cin >> s >> pw;
		m.insert({ s, pw });
	}

	vector<string> v;
	for (int i = 0; i < site; i++) {
		string s;
		cin >> s;
		v.push_back(m[s]);
	}

	for (int i = 0; i < site; i++) {
		cout << v[i] << '\n';
	}

	return 0;
}