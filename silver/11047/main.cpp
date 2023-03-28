#include <iostream>
using namespace std;

int main() {
	int N, K;
	int coin[10];
	cin >> N >> K;
	for (int i = 0; i < N; i++) 
		cin >> coin[i];
	int result = 0, count = 0;
	for (int i = N - 1; i >= 0; i--) {
		if (coin[i] > K) continue;
		else {
			while (result+coin[i] <= K) {
				if (result == K) break;
				result += coin[i];
				count++;
			}
		}
	}
	cout << count << "\n";
}