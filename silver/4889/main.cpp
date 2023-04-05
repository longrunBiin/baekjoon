#include<iostream>
#include<stack>
using namespace std;

int main() {
	string in;
	int t = 1;
	stack<char> st;
	while (true) {
		int res = 0;
		cin >> in;
		for (int i = 0; i < in.size(); i++) {
			if (in[i] == '-') return 0;
			if (!st.empty() && st.top() == '{' && in[i] == '}')
				st.pop();
			else st.push(in[i]);
		}
		while (!st.empty()) {
			char s = st.top();
			st.pop();
			if (s == st.top()) {
				res += 1;
			}
			else res += 2;
			st.pop();
		}
		cout << t++ << ". " << res << "\n";
	}

	
}