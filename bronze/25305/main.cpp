#include<iostream>
using namespace std;

int main() {
	int N, K, score[1000] = { 0, };
	cin >> N >> K;

	int n = 0, t;
	t = N;
	while (t--) {
		cin >> score[n++];
	}
	int max, tmp;
	for (int i = 0; i < N; i++) {
		max = score[i];
		tmp = i;
		for (int j = i; j < N; j++) {
			if (max < score[j]) {
				max = score[j];
				tmp = j;
			}
		}
		score[tmp] = score[i];
		score[i] = max;
	}
	cout << score[--K];
}