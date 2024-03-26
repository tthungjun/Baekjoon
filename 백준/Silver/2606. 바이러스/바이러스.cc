#include <iostream>
#include <vector>
using namespace std;

bool visited[101];
vector<int> graph[101];
int virus = 0;

void dfs(int x) {
	visited[x] = true;

	for (int i = 0; i < graph[x].size(); i++) {
		int y = graph[x][i];
		if (!visited[y]) {
			dfs(y);
			virus++;
		}
	}
}

int main() {
	int n, m;
	cin >> n;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;

		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	dfs(1);

	cout << virus;

	return 0;
}