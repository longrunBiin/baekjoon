#include<iostream>
using namespace std;
int main() {
	string n;
	while (true) {
		cin >> n;
		if (n == "0") break;
		bool flag = true;
		for (int i = 0; i < n.size(); i++) {
			if (n[i] == n[n.size() - i - 1]) continue;
			else {
				flag = false;
				cout << "no" << "\n"; break;
			}
		}
		if (flag) cout << "yes" << "\n";
	}
}