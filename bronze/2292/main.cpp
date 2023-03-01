#include<iostream>
using namespace std;

int main() {
	int N, count=1,bee=1;
	cin >> N;

	while (true) {
		if (N == 1) {
			cout << N;
			return 0;
		}
		else if (N > bee && N <= count*6 + bee) {
			cout << count + 1;
			return 0;
		}
		else {
			bee += 6*count;
			count++;
		}
	}
}