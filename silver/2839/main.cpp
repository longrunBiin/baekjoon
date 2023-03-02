#include<iostream>
using namespace std;

int main() {
	int N, count5 = 0, count3 = 0, i = 0, tmp;
	cin >> N;
	tmp = N;
	while (true) {
		tmp -= 3;
		i++;
		if (tmp % 5 == 0) {
			break;
		}
		if (tmp == 0) {
			break;
		}
	}
	while (N > 5) {
		N -= 5;
		count5++;
	}
	while (N > 0) {
		N -= 3;
		count3++;
	}
	if (N != 0&&i==0) {
		cout << -1;
		return 0;
	}
	if (i < count5 + count3)
		cout << i;
	else
		cout << count5 + count3;
}