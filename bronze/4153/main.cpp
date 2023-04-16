#include<iostream>
#include<cmath>
using namespace std;
int main() {
	while (true) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) return 0;

		if (pow(c,2) == pow(b,2) + pow(a,2))
			cout << "right\n";
		else if (pow(b, 2) == pow(c, 2) + pow(a, 2))
			cout << "right\n";
		else if (pow(a, 2) == pow(b, 2) + pow(c, 2))
			cout << "right\n";
		else
			cout << "wrong\n";
	}
}