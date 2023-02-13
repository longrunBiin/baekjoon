#include<iostream>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	stack<char> st;
	stack<char> tmp_st;
	string s;
	int M, index, length;
	cin >> s;
	cin >> M;
	index = s.size();
	length = index;
	for (int i = 0; i < s.size(); i++)
		st.push(s[i]);
	while (M--) {
		int size = st.size();
		char command;
		char n;
		cin >> command;
		if (command == 'P') {
			cin >> n;
			for (int i = 0; i < size-index; i++) {
				tmp_st.push(st.top());
				st.pop();
			}
			st.push(n);
			for (int i = 0; i < size - index; i++) {
				st.push(tmp_st.top());
				tmp_st.pop();
			}
			if (index < length + 1)
				index++;
		}
		else if (command == 'L') {
			if (index > 0)
				index--;
		}
		else if (command == 'D') {
			if (index < length +1)
				index++;
		}
		else if (command == 'B') {
			for (int i = 0; i < size - index; i++) {
				tmp_st.push(st.top());
				st.pop();
			}
			if (!st.empty()||index!=0)
				st.pop();
			for (int i = 0; i < size - index; i++) {
				st.push(tmp_st.top());
				tmp_st.pop();
			}
			if (index > 0)
				index--;
		}
	}
	while (!st.empty()) {
		tmp_st.push(st.top());
		st.pop();
	}
	while (!tmp_st.empty()) {
		cout << tmp_st.top();
		tmp_st.pop();
	}
	
}