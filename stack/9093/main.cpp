#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	cin.ignore();
	while (T--) {
		int i = 0;
		stack<char> stack;
		string s;
		getline(cin, s);
		s += ' ';
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				while (!stack.empty()) {
					cout << stack.top();
					stack.pop();
				}cout << ' ';
			}
			else stack.push(s[i]);
		}
		cout << '\n';
	}
}