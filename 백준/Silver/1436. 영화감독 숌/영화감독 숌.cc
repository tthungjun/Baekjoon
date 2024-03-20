#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    
	int n;
	cin >> n;

	int end_num = 666;
	int cnt = 1;

	while (cnt != n) {
		end_num++;
		string a = to_string(end_num);
		if (a.find("666") != string::npos)
			cnt++;
	}

	cout << end_num;

	return 0;
}