#include<iostream>
using namespace std;

bool isPrime(int n) {
	if (n == 1 || n == 0) return false;
	else if (n == 2) return true;
	else {
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) return false;
		}
	}
	return true;
}
int main() {
	while (true) {
		int n;
		cin >> n;
		if (n == 0) return 0;
		int count = 0;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (isPrime(i)) count++;
		}
		cout << count << "\n";
	}
}