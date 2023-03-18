#include<iostream>
using namespace std;

int main() {
	int N, result = 0;
	cin >> N;
	
	for (int i = 1; i < N; i++) {
		int sum = 0;
		sum += i;
		int tmp = i;
		while (tmp != 0){
			sum += tmp % 10;
			tmp /= 10;
		}
		if (sum == N) {
			result = i;
			break;
		}
		else result = 0;
	}
	cout << result;
}