#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int main() {
	int T, n, i=1;
	vector<char> v;
	stack<int> st;
	cin >> T;

	while (T--) {
		cin >> n;
		while (true) {
			if (i <= n) {
				v.push_back('+');
				st.push(i);
				i++;
			}
			else if (n == st.top()) {
				st.pop();
				v.push_back('-');
				break;
			}
			else {
				cout << "NO" << "\n";
				return 0;
			}

		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
	return 0;
}