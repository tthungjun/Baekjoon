#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

bool visited[1001];
vector<int> graph[1001];

bool visited2[1001];
vector<int> graph2[1001];

void dfs(int x) {
	visited[x] = true;
	cout << x << " ";
	sort(graph[x].begin(), graph[x].end());

	for (int i = 0; i < graph[x].size(); i++) // 인접한 노드 사이즈만큼 탐색
	{
		int y = graph[x][i];
		if (!visited[y]) // 방문하지 않았으면 즉 visited가 False일 때 not을 해주면 True가 되므로 아래 dfs 실행
			dfs(y); // 재귀적으로 방문
	}
}

void bfs(int x) {
	queue<int> q;
	q.push(x);
	visited2[x] = true;

	while (!q.empty()) {
		int a = q.front();
		cout << a << " ";
		q.pop();

		sort(graph2[a].begin(), graph2[a].end());
		for (int i = 0; i < graph2[a].size(); i++) {
			int b = graph2[a][i];
			if (!visited2[b]) {
				q.push(b);
				visited2[b] = true;
			}
		}
	}
}

int main() {
	int n, m, v;
	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
		graph2[a].push_back(b);
		graph2[b].push_back(a);
	}

	dfs(v);
	cout << '\n';
	bfs(v);

	return 0;
}