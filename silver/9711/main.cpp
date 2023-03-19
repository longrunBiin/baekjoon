#include<iostream>
using namespace std;

long long fibo(int p, int q) {
	long long n1 = 0;
	long long n2 = 1;
	for (int i = 0; i < p; i++) {
		long long n3 = n1 + n2;
		if (n3 > q) n3 %= q;
		n1 = n2;
		n2 = n3;
	}
	return n1;
}

int main() {
	int P, Q, T, i = 1;
	cin >> T;
	while (T--) {
		long long f1 = 0, f2 = 1, f3, result, tmp;
		cin >> P >> Q;
		result = fibo(P, Q) % Q;
		cout << "Case #" << i++ << ": " << result << "\n";
	}
}