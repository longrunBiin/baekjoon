#include<iostream>
using namespace std;

int main() {
	int M, N;
	cin >> M >> N;
	int sum = 0;
	int min = N;
	for (int i = M; i <= N; i++) {
		bool flag = true;
		for (int j = 2; j < i;j++) {
			if (i % j == 0) {
				flag = false;
				break;
			}
		}
		if (flag && i != 1) {
			sum += i;
			if (min > i) min = i;
		}
	}
	if (sum == 0) cout << -1;
	else cout << sum << "\n" << min;
}