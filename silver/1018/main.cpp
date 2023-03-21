#include<iostream>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	char board[51][51];
	bool check[51][51] = { false };
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	int count = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] == 'W' || board[i][j] == 'B') {
				if (board[i][j] == board[i][j + 1] && !check[i][j]) {
					check[i][j+1] = true;
				}
				else if (board[i][j] == board[i + 1][j] && !check[i][j]) {
					check[i+1][j] = true;
				}
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (check[i][j])
				count++;
		}
	}
	cout << count << "\n";
}