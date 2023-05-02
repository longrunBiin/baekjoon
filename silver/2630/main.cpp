#include<iostream>

using namespace std;

int paper[128][128];

bool check(int n) {
	int first = paper[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (paper[i][j] != first)
				return false;
		}
	}
	return true;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin>>paper[i][j];
		}
	}
	if (check(n)) {

	}

}