#include<iostream>
using namespace std;

int main() {
	int P, Q, T, i = 1;
	cin >> T;
	while (T--) {
		long long f1 = 0, f2 = 1, f3, result, tmp;
		cin >> P >> Q;
		
		for (int i = 3; i <= P; i++) {
			f3 = f1 + f2;
			if (f3 > Q) f3 %= Q;
			f1 = f2;
			f2 = f3;

		}

		result = f1%Q;
		cout << "Case #" << i++ << ": " << result << "\n";
	}
}