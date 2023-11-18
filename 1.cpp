#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// 2745번 다시 보기!!
int main() {
	int N;
	string num;
	unsigned long int result = 0;
	bool a = true;
	int count = 0;

	cin >> num >> N;
	
	while (a) {
		for (int i = 0; i < num.size(); i++) {
			if (N < 10) {
				if (num[i] - 48 >= N) {
					count++;
					break;
				}
			}
			else {
				if (num[i] - 55 >= N) {
					count++;
					break;
				}
			}
		}

		if (count == 1) {
			cout << "Can't calculate";
			break;
		}

		if (N <= 10) {
			for (int i = 0; i < num.size(); i++) {
				int unit = num[i] - 48;
				result += int(unit * pow(N, num.size() - 1 - i));
			}
		}
		else {
			for (int i = 0; i < num.size(); i++) {
				int unit = num[i] - 55;
				result += unit * pow(N, num.size() - 1 - i);
			}
		}

		a = false;

		cout << result;
	}

	return 0;
}

// 10798번 너도!!
/*int main() {

	// 배열 생성
	char** matrix = new char* [5];

	for (int i = 0; i < 5; i++) {
		matrix[i] = new char[15];
	}

	// 배열 초기화
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 15; j++) {
			matrix[i][j] = '.';
		}
	}

	// 배열 다시 초기화
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 15; j++){
			char cell;
			cin >> cell;

			if (cell == '\n' || cin.fail()) {
				break;
			}

			matrix[i][j] = cell;
		}
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if ((matrix[j][i] >= '0' && matrix[j][i] <= '9') || (matrix[j][i] >= 'A' && matrix[j][i] <= 'Z') || (matrix[j][i] >= 'a' && matrix[j][i] <= 'z')) {
				std::cout << matrix[j][i];
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		delete[] matrix[i];
	}

	delete[] matrix;

	return 0;
}*/