#include<iostream>
#include<stack>
using namespace std;


int main() {
	char normal[100][100];
	char RG[100][100];
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			char color;
			cin >> color;
			normal[i][j] = color;
			if (color == 'G')
				RG[i][j] = 'R';
			else RG[i][j] = color;
		}
	}
	int x = 0, y = 0;
	stack<char> r;
	while (true) {
		if (normal[x][y] == 'R') {
			r.push(normal[x][y]);
			if (y <= N) y++;
			else {
				x++;
				y = 0;
			}
		}
		else {
			int c = r.top();
			r.pop();
		}
	}
}