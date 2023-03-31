#include<iostream>
using namespace std;
int num[100002] = { 0, };
int prefix[100002] = { 0, };
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N, M, i, j;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		cin >> num[i];
	}
	for (int q = 1; q <= N; q++) {
		prefix[q] = prefix[q - 1] + num[q];
	}
	while (M--) {
		cin >> i >> j;
		cout << prefix[j] - prefix[i-1] << "\n";
	}
}