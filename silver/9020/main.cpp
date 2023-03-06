#include<iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
while (T--) {
		int num, i=0;
		cin >> num;
		int gold1 = 0, gold2 = 0;
		for (i = num / 2; i >= 2; i--) {
			bool flag = true;
			for (int j = 2; j < i/2; j++) {
				if (i % j == 0) {
					flag = false;
					break;
				}
			}
			if (flag) {
				gold1 = i;
				gold2 = num - gold1;
				bool flag2 = true;
				for (int q = 2; q <= gold2/2; q++) {
					if (gold2 % q == 0) {
						flag2 = false;
						break;
					}
				}
				if (flag2) {
					break;
				}
			}
		}
		cout << gold1 << " " << gold2<<"\n";
	}
}