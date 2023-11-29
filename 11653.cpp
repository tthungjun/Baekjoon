#include <iostream>
#include <vector>
using namespace std;
// 코드는 잘 작동하지만, 메모리 초과를 일으킴
// 해결해야 됨!!

static void vec(int init, int num, vector<int>& primes) {
	while (num != 1) {
		if (num % init == 0)
		{
			num = num / init;
			primes.push_back(init);
		}
		else {
			int k = init + 1;
			vec(k, num, primes);
			break;
		}
	}
}

int main() {
	int num;
	cin >> num;
	if (num == 1) {
		return 0;
	}

	vector<int> primes;

	vec(2, num, primes);

	for (int i = 0; i < primes.size(); i++) {
		cout << primes[i] << "\n";
	}

	return 0;
}
