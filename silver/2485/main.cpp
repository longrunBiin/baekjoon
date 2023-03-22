#include<iostream>
using namespace std;

int gcd(int a, int b) {
	int c = 0;
	if (b > a) {
		int t;
		t = a;
		a = b;
		b = t;
	}
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int main() {
	int N, a, b, count;
	int arr[100000];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	a = arr[1] - arr[0];
	b = arr[2] - arr[1];
	count = gcd(a, b);
	for (int i = 2; i < N; i++) {
		count = gcd(count, arr[i + 1] - arr[i]);
		if (i + 1 == N - 1) break;
	}
	int first = arr[0];
	int tree = 0;
	for (int i = 1; i < N; i++) {
		while (first + count != arr[i]) {
			tree++;
			first += count;
		}
		first = arr[i];
	}
	cout << tree << "\n";
}