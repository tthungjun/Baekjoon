#include <iostream>
using namespace std;

// 10798�� ���� ������ �ȵ�,,
int main() {

	// �迭 ����
	char** matrix = new char* [5];

	for (int i = 0; i < 5; i++) {
		matrix[i] = new char[15];
	}

	// �迭 �ʱ�ȭ
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 15; j++) {
			matrix[i][j] = '.';
		}
	}

	// �迭 �ٽ� �ʱ�ȭ
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
}