#include<iostream>
#include<queue>
using namespace std;

int dx[] = { -1, 1, 0, 0 }; // аб, ©Л, ╩С, го
int dy[] = { 0, 0, -1, 1 };
int T, M, N, K;
void bfs(int farm[50][50], int y, int x) {
	queue<pair<int, int>> q;
	q.push(make_pair(y, x));
	while (!q.empty()) {
		int curr1 = q.front().first;
		int curr2 = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = curr1 + dx[i];
			int ny = curr2 + dy[i];

			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (farm[nx][ny] == 0) continue;
			if (farm[nx][ny] == 1) {
				farm[nx][ny] = 0;
				q.push(make_pair(nx, ny));
			}
		}
	}
}
int main() {
	cin >> T;
	while (T--) {
		cin >> M >> N >> K;
		int farm[50][50] = { 0, };
		while (K--) {
			int m, n;
			cin >> m >> n;
			farm[n][m] = 1;
		}
		int countNum = 0;
		for (int x = 0; x < M; x++) {
			for (int y = 0; y < N; y++) {
				if (farm[y][x] == 1) {
					bfs(farm, y, x);
					countNum++;
				}
			}
		}
		cout << countNum << "\n";
	}
}