#include<iostream>
using namespace std;

char wBoard[8][8]{
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
};
char bBoard[8][8]{
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
};
char board[51][51];

int check(int x, int y) {
	int wCount = 0, bCount = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x+i][y+j] != wBoard[i][j])
				wCount++;
			if (board[x+i][y+j] != bBoard[i][j])
				bCount++;
		}
	}
	return wCount < bCount ? wCount : bCount;
}
int main() {
	int m, n;
	cin >> m >> n;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	int min = 100,tmp;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			tmp = check(i,j);
			if (tmp < min) min = tmp;
		}
	}
	
	cout << min << "\n";

}