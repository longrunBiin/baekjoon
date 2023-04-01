#include<iostream>
#include<math.h>
using namespace std;

int dp[50001]={0,};
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	dp[1] = 1;
	for (int i = 1; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[1];
		for(int j=2;j*j<=i;j++)
			dp[i] = min(1+dp[i-j*j], dp[i]);
	}
	cout << dp[n] << "\n";
}