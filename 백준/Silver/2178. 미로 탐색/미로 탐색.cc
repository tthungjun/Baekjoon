#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

vector<vector<int>> maze(102, vector<int>(102));

void bfs(pair<int,int> p, int x, int y) {
	queue<pair<int, int>> q;
	q.push(p);
	int cnt = 1;

	while (!q.empty()) {
		cnt++;

		int a = q.size();
		for (int i = 0; i < a; i++) {
			pair<int, int> x = q.front();

			if (maze[x.first - 1][x.second] == 1)// 위로 이동
			{
				q.push(make_pair(x.first - 1, x.second));
				maze[x.first - 1][x.second] = cnt;
			}
			if (maze[x.first][x.second - 1] == 1) //좌로 이동
			{
				q.push(make_pair(x.first, x.second - 1));
				maze[x.first][x.second - 1] = cnt;
			}
			if (maze[x.first + 1][x.second] == 1) // 아래로 이동
			{
				q.push(make_pair(x.first + 1, x.second));
				maze[x.first + 1][x.second] = cnt;
			}
			if (maze[x.first][x.second + 1] == 1) // 우로 이동
			{
				q.push(make_pair(x.first, x.second + 1));
				maze[x.first][x.second + 1] = cnt;
			}

			q.pop();
		}

		if (maze[x][y] != 1) {
			break;
		}
	}

	cout << cnt;
}

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 1; i < n + 1; i++) {
		string a;
		cin >> a;
		for (int j = 1; j < m + 1; j++) {
			maze[i][j] = int(a[j - 1]) - 48;
		}
	}

	bfs(make_pair(1, 1), n, m);

	return 0;
}