#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	int K, N, j = 1, tmp;

	cin >> N >> K;
	tmp = K;
	for (int i = 1; i <= N; i++)
		q.push(i);
	cout << "<";
	while (q.size()!=0) {
		for (int i = 1; i < K; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		if (q.size() > 1)
			cout << ", ";
		q.pop();
	}
	cout << ">";
}