#include<iostream>
using namespace std;

int main() {
	int N, count5 = 0, count3 = 0;
	cin >> N;

	count5 = N / 5;
	count3 = N % 5;
	while (true){
		if (count5<0) {
			cout << -1;
			return 0;
		}
		if ((N-(count5*5)) % 3 == 0) {
			count3 = (N - (count5 * 5)) / 3;
			break;
		}
		count5--;
	}
	cout << count5 + count3;
}