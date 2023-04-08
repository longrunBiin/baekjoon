#include<iostream>
using namespace std;
int num[1001];
int main() {
	int a, b, k=1, ex=1;
	cin >> a >> b;

	for (int i = 1; ; i++) {
		for (int j = 1; j <= i; j++) {
			num[k] = i;
			k++;
			if (k == 1001) {
				ex = 0;
				break;
			}
		}
		if (ex == 0) break;
	}
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += num[i];
	}
	cout << sum << "\n";
}