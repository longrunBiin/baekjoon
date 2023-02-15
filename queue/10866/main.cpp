#include <iostream>
#include <deque>
using namespace std;

int main() {
	int N;
	deque<int> d;
	cin >> N;
	while (N--) {
		string command;
		cin >> command;
		if (command == "push_front") {
			int n;
			cin >> n;
			d.push_front(n);
		}
		else if (command == "push_back") {
			int n;
			cin >> n;
			d.push_back(n);
		}
		else if (command == "pop_front") {
			if (!d.empty()) {
				cout << d.front() << "\n";
				d.pop_front();
			}
			else cout << "-1" << "\n";
		}
		else if (command == "pop_back") {
			if (!d.empty()) {
				cout << d.back() << "\n";
				d.pop_back();
			}
			else cout << "-1" << "\n";
		}
		else if (command == "size") {
			cout << d.size() << "\n";
		}
		else if (command == "front") {
			if (!d.empty()) {
				cout << d.front() << "\n";
			}
			else cout << "-1" << "\n";
		}
		else if (command == "back") {
			if (!d.empty()) {
				cout << d.back() << "\n";
			}
			else cout << "-1" << "\n";
		}
		else if (command == "empty") {
			if (!d.empty()) {
				cout << "0" << "\n";
			}
			else cout << "1" << "\n";
		}
	}
}