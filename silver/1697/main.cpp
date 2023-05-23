#include<iostream>
#include<queue>
using namespace std;
int visited[100001] = { 0, };
int main() {
	int n, k;
	cin >> n >> k;

	queue<pair<int, int>> q;
	q.push(make_pair(n, 0));
	visited[n] = 1;

	while (!q.empty()){
		int x = q.front().first;
		int count = q.front().second;
		q.pop();
		if (x==k) {
			cout << count << "\n";
			break;
		}
		if (!visited[x - 1] && x - 1 >= 0 && x - 1 < 100001) {
			q.push(make_pair(x - 1,count+1));
			visited[x - 1] = 1;

		}
		if (!visited[x + 1] && x + 1 >= 0 && x + 1 < 100001) {
			q.push(make_pair(x + 1,count+1));
			visited[x + 1] = 1;

		}
		if (!visited[x * 2] && 2 * x >= 0 && 2 * x < 100001) {
			q.push(make_pair(x * 2,count+1));
			visited[x * 2] = 1;

		}
	}
}