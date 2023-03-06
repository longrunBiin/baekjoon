#include<iostream>
using namespace std;

int main() {
	int N, num[1000]={0,},i=0;
	cin >> N;
	while (N--) {
		int n,i=0,tmp;
		cin >> n;
		for (int j = 0; j < i; j++) {
			if (num[j] > n) {
				tmp = num[j];
				num[j] = n;


			}
		}
	}

}