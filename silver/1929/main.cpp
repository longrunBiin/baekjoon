#include<iostream>
using namespace std;

bool is_prime(int n) {
	if (n == 0 || n == 1) return false;
	if (n == 2) return true;
	else {
		if (n % 2 == 0) return false;
		for (int i = 3; i * i<= n; i++) {
			if (n % i == 0) return false;
		}
	}
	return true;
}
int main() {
	int M, N;
	cin >> M >> N;

	for (int i = M; i <= N; i++) {
			if (is_prime(i))
				cout << i << "\n";
	}
}