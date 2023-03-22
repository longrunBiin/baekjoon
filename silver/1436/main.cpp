#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = n;

	for (int i = 666; ; i++) {
		int tmp = i;
		bool first = false, second = false;
		while (tmp != 0) {
			int num = tmp % 10;
			if ((first || second) && num != 6) {
				first = false;
				second = false;
			}
			else if (num == 6) {
				if (second) { 
					count--;
					break;
				}
				if (first) second = true;
				first = true;
			}
			tmp /= 10;
		}
		if (count == 0) {
			cout << i << "\n";
			break;
		}
	}

}