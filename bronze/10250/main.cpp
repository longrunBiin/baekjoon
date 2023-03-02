#include<iostream>

using namespace std;

int main() {
	int T, H, W, N;
	cin >> T;
	while (T--) {
		cin >> H >> W >> N;
		int floor = 0, room = 1;
		while (N--) {
			floor++;
			if (floor > H) {
				floor -= H;
				room++;
			}
		}
		if (room < 10)cout << floor << "0" << room<<"\n";
		else cout << floor << room<<"\n";
	}
}