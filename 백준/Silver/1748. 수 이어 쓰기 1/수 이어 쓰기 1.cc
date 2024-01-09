#include <iostream>
#include <string>
using namespace std;

int main() {

	int N;
	int cnt = 0;

	cin >> N;

	if (N < 10) {
		cout << N;
		return 0;
	}

	for (int i = 1; i <= N; i *= 10) {
		cnt += N - i + 1;
	}
	// 1의 자리를 갖고 있는 수의 개수 + 10의 자리를 갖고 있는 수의 개수 + ...

	cout << cnt;

	return 0;
}