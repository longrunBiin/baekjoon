#include<iostream>
using namespace std;

int count0 = 0, count1 = 0;

int fibonacci(int n) {
    int dp[100] = { 0, };
    if (n == 0) {
        count0++;
        return 0;
    }
    else if (n == 1) {
        count1++;
        return 1;
    }
    else {
        if (dp[n] > 0)
            return dp[n];
        dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
        return dp[n];
    }
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        count0 = 0, count1 = 0;
        fibonacci(n);
        cout << count0 << " " << count1 << "\n";
    }
}