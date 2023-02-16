#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	stack<char> st;
	int count = 0;
	cin >> s;
	
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(')
			st.push(s[i]);
		else {
			if (s[i] == ')' && s[i - 1] == '(') {
				st.pop();
				count += st.size();
			}
			else {
				st.pop();
				count++;
			}
		}
	}
	cout << count;
}