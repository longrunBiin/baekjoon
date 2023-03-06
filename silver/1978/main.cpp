#include<iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int count = 0;
	while (N--) {
		int num;
		bool flag = true;
		cin >> num;

		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				flag = false;
				break;
			}
		}
		if (flag && num != 1) {
			count++;
		}
	}
	cout << count;
}