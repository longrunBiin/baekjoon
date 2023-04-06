#include<iostream>
using namespace std;
long long int dp[101] = {1,1,1,1,2,2,};
int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 6; i <= n; i++) {
			dp[i] = dp[i - 1] + dp[i - 5];
		}
		cout << dp[n] << "\n";
	}

}