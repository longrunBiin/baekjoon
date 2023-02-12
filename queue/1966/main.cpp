#include <iostream>
#include <queue>
using namespace std;

int main() {
	int T, N, M;
	cin >> T;

while (T--) {
		queue<pair<int,int>> q;
		priority_queue<int>pq;
		int imp, max = 0, count = 0;
		cin >> N >> M;
		for (int i = 0; i < N; i++) {
			cin >> imp;
			q.push({ i, imp });
			pq.push(imp);
		}
		while (!q.empty()) {
			int location = q.front().first;
			int value = q.front().second;
			q.pop();
			if (value==pq.top()) {
				pq.pop();
				++count;
				if (M == location) {
					cout << count <<"\n";
					break;
				}
			}
			else {
				q.push({ location, value });
			}
		}


	}
}