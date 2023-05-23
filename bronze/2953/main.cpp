#include<iostream>
using namespace std;

int main() {
	int score[5][4];
	int sum[5] = {0};
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> score[i][j];
			sum[i] += score[i][j];
		}
	}
	int max = sum[0];
	int winner = 0;
	for (int i = 0; i < 5; i++) {
		if (max < sum[i]) { 
			max = sum[i]; 
			winner = i;
		}
	}
	cout << winner + 1 << " "<< max << "\n";
}