#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, num[10001]={0,};
	cin >> N;
	int tmp = N;
	while (tmp--) {
		int n;
		cin >> n;
		num[n]++;
	}
	for (int i = 1; i < 10001; i++) {
		if (num[i]) {
			for (int j = 0; j < num[i]; j++) {
				cout << i <<"\n";
			}
		}
	}
}