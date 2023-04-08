#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		string num;
		cin >> num;
		int size = num.size();
		int tmp = num[size - 1];
		if (tmp % 2 == 0) cout << "even" << "\n";
		else cout << "odd" << "\n";
	}
}