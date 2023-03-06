#include<iostream>
using namespace std;

int main() {
	while (true) {
		int n, sum = 0, j = 0;
		cin >> n;
		int num[100000];
		if (n == -1) return 0;
		for (int i = 1; i <= n / 2; i++) {
			bool flag = false;
			if (n%i==0){
				sum += i;
				num[j++] = i;
			}
			
		}
		if(sum==n){
			cout << n << " = ";
			for (int i = 0; i < j; i++) {
				cout << num[i];
				if (i != j - 1) {
					cout << " + ";
				}
			}
		}
		else {
			cout << n << " is NOT perfect.";
		}
		cout << "\n";
	}
}