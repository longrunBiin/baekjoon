#include<iostream>
#include<algorithm>
using namespace  std;

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cout << i;
		for (int j = 1; j <= m; j++) {
			for (int q = 1; q <= n; q++) {
				if (j == i)continue;
				cout << " " << j;
			}
		}
		cout << "\n";
	}
}