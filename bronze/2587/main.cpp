#include <iostream>
using namespace std;

int main() {
	int num[5], avg = 0, mid = 0, min, tmp;
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		avg += num[i];
	}
	avg /= 5;

	for (int i = 0; i < 5; i++) {
		min = num[i];
		tmp = i;
		for (int j = i; j < 5; j++) {
			if (min > num[j]) {
				min = num[j];
				tmp = j;
			}
		}
		num[tmp] = num[i];
		num[i] = min;
	}
	mid = num[2];
	cout << avg << "\n" << mid << "\n";

}