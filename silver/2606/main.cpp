#include<iostream>
#include<vector>
using namespace std;

vector<int> v[101];
int visited[101];
int ncount = 0;
void dfs(int n) {
	visited[n] = true;
	ncount++;
	for (int i = 0; i<v[n].size(); i++) {
		int next = v[n][i];
		if (!visited[next])
			dfs(next);
	}
}
int main() {
	int n, couple;
	cin >> n;
	cin >> couple;
	for (int i = 0; i < couple; i++) {
		int from, to;
		cin >> from >> to;
		v[from].push_back(to);
		v[to].push_back(from);
	}
	dfs(1);

	cout << ncount-1 << "\n";
}
