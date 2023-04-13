#include<iostream>
using namespace std;

int dp[1001];
int main() {
	dp[1] = 1;
	dp[2] = 3;
	dp[3] = 5;
	int n;
	cin >> n;
	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i - 1] % 10007 + 2*dp[i - 2]%10007;
		dp[i] %= 10007;
	}
	cout << dp[n];
}