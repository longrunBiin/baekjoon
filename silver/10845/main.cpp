#include<iostream>
#include<queue>
using namespace std;

int main() {
	queue<int> q;
	int N;
	cin >> N;
	while (N--) {
		string order;
		cin >> order;
		if (order == "push") {
			int n;
			cin >> n;
			q.push(n);
		}
		else if(order == "pop") {
			if (q.empty()) cout << "-1\n";
			else {
				int n = q.front();
				q.pop();
				cout << n << "\n";
			}
		}
		else if (order == "size") {
			cout << q.size() << "\n";
		}
		else if (order == "empty") {
			if (q.empty()) cout << "1\n";
			else cout << "0\n";
		}
		else if (order == "front") {
			if (q.empty()) cout << "-1\n";
			else cout << q.front()<<"\n";
		}
		else if (order == "back") {
			if (q.empty()) cout << "-1\n";
			else cout << q.back() << "\n";
		}

	}
}