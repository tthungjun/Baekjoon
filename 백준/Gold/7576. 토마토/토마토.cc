#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int m, n, day = 0;
queue<pair<int, int>> q;

void dfs(vector<vector<int>>& v, queue<pair<int, int>>& q) {
    if (!q.empty()) {
        int SIZE = q.size();

        for (int i = 0; i < SIZE; i++) {
            pair<int, int> y = q.front();
            q.pop();

            int row = y.first;
            int col = y.second;

            if ((row + 1 < n) && v[row + 1][col] == 0) {
                v[row + 1][col] = 1;
                q.push(make_pair(row + 1, col));
            } // 아래로 이동
            if ((col + 1 < m) && v[row][col + 1] == 0) {
                v[row][col + 1] = 1;
                q.push(make_pair(row, col + 1));
            }// 오른쪽으로 이동
            if ((row - 1 >= 0) && v[row - 1][col] == 0) {
                v[row - 1][col] = 1;
                q.push(make_pair(row - 1, col));
            }// 위로 이동
            if ((col - 1 >= 0) && v[row][col - 1] == 0) {
                v[row][col - 1] = 1;
                q.push(make_pair(row, col - 1));
            }// 왼쪽으로 이동
        }

        day++;
    }
    else {
        return;
    }
}

int main() {
    cin >> m >> n;

    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == 1) {
                q.push(make_pair(i, j));
            }
        }
    }

    while (!q.empty()) dfs(v, q);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == 0) {
                cout << -1;
                return 0;
            }
        }
    }

    cout << day - 1;

    return 0;
}