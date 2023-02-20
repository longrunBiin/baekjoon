#include<iostream>

using namespace std;

int main() {
	string n1, n2, tmp;
	cin >> n1 >> n2;
	tmp = n1;
	for (int i = 0; i < 3; i++) {
		tmp[i] = n1[2 - i];
	}
	n1 = tmp;

	for (int i = 0; i < 3; i++) {
		tmp[i] = n2[2 - i];
	}
	n2 = tmp;

	if (n1 > n2) cout << n1;
	else cout << n2;
}