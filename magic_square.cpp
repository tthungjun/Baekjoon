#include <iomanip>
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int num;
	cout << "홀수 숫자를 하나 입력해주세요 : ";
	cin >> num;

	vector<vector<int>> magic_square(num + 1, vector<int>(num + 1));
	magic_square[0][(num / 2) + 1] = 1;
	magic_square[num][(num / 2) + 1] = 1;
	int row = num - 1;
	int col = (num / 2) + 2;
	int current_num = 1;

	while (current_num < (num) * (num)) {
		if (magic_square[row][col] == 0) {
			magic_square[row][col] = current_num + 1;
			row--;
			col++;

			if (row == -1 && col == num + 1) {
				row++;
				col--;
			}
			else if (row == -1) {
				row++;
				col--;
			}
			else if (col == num + 1) {
				row++;
				col--;
			}
			else if (magic_square[row][col] != 0) {
				row++;
				col--;
			}

			current_num++;
		}
		else if (row == 0 && col == num) {
			row++;
		}
		else if (col == num) {
			magic_square[row][0] = magic_square[row][col];
			col = 1;
			row--;
		}
		else if (row == 0) {
			magic_square[row + num][col] = magic_square[row][col];
			row = num - 1;
			col++;
		}
		else if (magic_square[row][col] <= num * num && magic_square[row][col] >= 1) {
			row++;
		}
	}

	for (int i = 0; i < num; i++) {
		for (int j = 1; j <= num; j++) {
			cout << setw(3) << magic_square[i][j];
		}
		cout << endl;
	}

	return 0;
}