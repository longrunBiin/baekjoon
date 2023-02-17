#include<iostream>

using namespace std;

int main() {
	string S, P;
	int T, R;
	cin >> T;
	while (T--) {
		cin >> R >> S;
		int tmp = R;
		for (int i = 0; i < S.size(); i++) {
			while (R--) {
				cout << S[i];
			}
			R = tmp;
		}
		cout << "\n";
	}
}