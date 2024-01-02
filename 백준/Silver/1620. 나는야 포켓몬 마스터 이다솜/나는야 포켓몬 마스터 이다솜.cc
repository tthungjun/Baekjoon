#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	string pokemon;
	string q;
	map<string, string> dogam;
	vector<string> answer;

	for (int i = 0; i < n; i++) {
		cin >> pokemon;
		dogam.insert({ to_string(i + 1), pokemon });
		dogam.insert({ pokemon, to_string(i + 1) });
	}

	for (int i = 0; i < m; i++) {
		cin >> q;
		answer.push_back(dogam[q]);
	}

	for (int i = 0; i < m; i++) {
		cout << answer[i] << '\n';
	}
	
	return 0;
}