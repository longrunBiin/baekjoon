#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int count0[41] = {1,0,1};
		int count1[41] = { 0,1,1 };;
		int n;
		cin >> n;
		for (int i = 3; i <= n; i++) {
			count0[i] = count0[i - 1] + count0[i - 2];
			count1[i] = count1[i - 1] + count1[i - 2];
		}
		cout << count0[n] << " " << count1[n] << "\n";
	}
}