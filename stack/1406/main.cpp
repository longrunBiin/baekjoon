#include<iostream>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	stack<char> stLeft;
	stack<char> stRight;
	string s;
	int M, index, length;
	cin >> s;
	cin >> M;
	index = s.size();
	length = index;
	for (int i = 0; i < s.size(); i++)
		stLeft.push(s[i]);
	while (M--) {
		char command;
		char n;
		cin >> command;
		if (command == 'P') {
			cin >> n;
			stLeft.push(n);
		}
		else if (command == 'L') {
			if (!stLeft.empty()) {
				stRight.push(stLeft.top());
				stLeft.pop();
			}
		}
		else if (command == 'D') {
			if (!stRight.empty()) {
				stLeft.push(stRight.top());
				stRight.pop();
			}
		}
		else if (command == 'B') {
			if (!stLeft.empty())
				stLeft.pop();
		}
	}
	while (!stLeft.empty()) {
		stRight.push(stLeft.top());
		stLeft.pop();
	}
	while (!stRight.empty()) {
		cout << stRight.top();
		stRight.pop();
	}
		
	
}