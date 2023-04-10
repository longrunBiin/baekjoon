#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
#define MAX_VERTICES 1001
bool visited[MAX_VERTICES] = {false,};
vector<int> graph[1001];
queue<int> gq;
void dfs(int n) {
	visited[n] = true;
	cout << n << " ";
	for (int i = 0; i < graph[n].size(); i++) {
		int next = graph[n][i];
		if (!visited[next])
			dfs(next);
	}
}
void bfs(int n) {
	gq.push(n);
	visited[n] = true;
	while (!gq.empty()) {
		int cur = gq.front();
		gq.pop();
		cout << cur << " ";
		for (int i = 0; i < graph[cur].size(); i++) {
			int next = graph[cur][i];
			if (!visited[next]) {
				gq.push(next);
				visited[next] = true;
			}
			
		}
	}
}
int main() {
	int N, M, V;
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		int from, to;
		cin >> from >> to;
		graph[from].push_back(to);
		graph[to].push_back(from);
	}
	for (int i = 1; i <= N; i++)
		sort(graph[i].begin(), graph[i].end());
	dfs(V);
	for (int i = 0; i <= N; i++)
		visited[i] = false;
	cout << "\n";
	bfs(V);
}