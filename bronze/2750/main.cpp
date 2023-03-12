#include<iostream>
using namespace std;

int main() {
	int N, num[1000] = { 0, }, q = 0, tmp;
	cin >> N;
	tmp = N;
	while (tmp--) {
		int n;
		cin >> n;
		num[q++] = n;
	}
	for (int i = 0; i < N; i++) {
		int min = num[i];
		tmp = i;
		for (int j = i; j < N; j++) {
			if (min > num[j]) {
				min = num[j];
				tmp = j;
			}
		}
		num[tmp] = num[i];
		num[i] = min;
	}
	for (int i = 0; i < N; i++) {
		cout << num[i] << "\n";
	}
}