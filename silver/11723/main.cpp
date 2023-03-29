#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m, s[21] = {0,};
	cin >> m;
	while (m--) {
		string order;
		int x;
		cin >> order;

		if (order == "add") {
			cin >> x;
			s[x] = 1;
		}
		else if (order == "remove") {
			cin >> x;
			if (s[x] == 1) s[x] = 0;
		}
		else if (order == "check") {
			cin >> x;
			if (s[x] == 1) cout << "1" << "\n";
			else cout << "0" << "\n";
		}
		else if (order == "toggle") {
			cin >> x;
			if (s[x] == 1) s[x] = 0;
			else s[x] = 1;
		}
		else if (order == "all") {
			for (int i = 0; i < 21; i++)
				s[i] = 1;
		}
		else if (order == "empty") {
			for (int i = 0; i < 21; i++)
				s[i] = 0;
		}
	}
}