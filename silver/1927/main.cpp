#include<iostream>
#include<queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<int, vector<int>, greater<int>> q;
	int n, x;
	cin >> n;
	while (n--) {
		cin >> x;
		if (x == 0&& !q.empty()) {
			cout << q.top() << "\n";
			q.pop();
		}
		else if (x == 0 && q.empty()) {
			cout << "0\n";
		}
		else {
			q.push(x);
		}
	}
}