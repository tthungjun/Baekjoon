#include <iostream>
#include <string>
using namespace std;

int main() {
	string word;
	cin >> word;

	int count = 0;

	for (int i = 0; i < word.size() / 2; i++) {
		if (word[i] != word[word.size() - 1 - i]) {
			cout << 0;
			break;
		}
		else {
			count++;
		}
	}

	if (count == word.size()/2) {
		cout << 1;
	}

	return 0;
}