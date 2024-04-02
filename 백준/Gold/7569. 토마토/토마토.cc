#include <iostream>
#include <tuple>
#include <queue>
using namespace std;

int m, n, h, day = 0;
queue<tuple<int, int, int>> q;

void dfs(int*** v, queue<tuple<int, int, int>>& q) {
    if (!q.empty()) {
        int SIZE = q.size();

        for (int i = 0; i < SIZE; i++) {
            tuple<int, int, int> y = q.front();
            q.pop();

            int height = get<0>(y);
            int row = get<1>(y);
            int col = get<2>(y);

            if ((row + 1 < n) && v[height][row + 1][col] == 0) {
                v[height][row + 1][col] = 1;
                q.push(make_tuple(height, row + 1, col));
            } // 아래로 이동
            if ((col + 1 < m) && v[height][row][col + 1] == 0) {
                v[height][row][col + 1] = 1;
                q.push(make_tuple(height, row, col + 1));
            }// 오른쪽으로 이동
            if ((row - 1 >= 0) && v[height][row - 1][col] == 0) {
                v[height][row - 1][col] = 1;
                q.push(make_tuple(height, row - 1, col));
            }// 위로 이동
            if ((col - 1 >= 0) && v[height][row][col - 1] == 0) {
                v[height][row][col - 1] = 1;
                q.push(make_tuple(height, row, col - 1));
            }// 왼쪽으로 이동
            if ((height - 1 >= 0) && v[height - 1][row][col] == 0) {
                v[height - 1][row][col] = 1;
                q.push(make_tuple(height - 1, row, col));
            }// 한층 아래 이동
            if ((height + 1 < h) && v[height + 1][row][col] == 0) {
                v[height + 1][row][col] = 1;
                q.push(make_tuple(height + 1, row, col));
            }// 한층 위 이동
        }

        day++;
    }
    else {
        return;
    }
}

int main() {
    cin >> m >> n >> h;

    int*** v = new int** [h];
    for (int i = 0; i < h; i++) {
        v[i] = new int* [n];
        for (int j = 0; j < n; j++) {
            v[i][j] = new int [m];
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                cin >> v[i][j][k];
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                if (v[i][j][k] == 1) {
                    q.push(make_tuple(i, j, k));
                }
            }
        }
    }

    while (!q.empty()) dfs(v, q);

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                if (v[i][j][k] == 0) {
                    cout << -1;
                    return 0;
                }
            }
        }
    }

    cout << day - 1;

    return 0;
}