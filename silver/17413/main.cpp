#include<iostream>
#include<stack>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	stack<char> st;
	int i = 0;
	getline(cin, s);
	while (s[i]!='\0') {
		for (i = 0; i < s.size(); i++) {
			if (s[i] == '<') {
				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}
				while (true) {
					cout << s[i];
					if (s[i] == '>')
						break;
					i++;
				}
			}
			else if (s[i] == ' ') {
				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}
				cout << ' ';
			}
			else {
				st.push(s[i]);
			}
		}
	}
	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}
}