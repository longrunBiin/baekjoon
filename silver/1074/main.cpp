#include<iostream>

using namespace std;
int N, r, c;
int ans = 0;
void z(int y, int x, int size) {
	if (y == r && x == c)
	{
		cout << ans << '\n';
		return;
	}
	if (r < y + size && r >= y && c < x + size && c >= x) {
		// 1��и� Ž��
		z(y, x, size / 2);
		// 2��и� Ž��
		z(y, x + size / 2, size / 2);
		// 3��и� Ž��
		z(y + size / 2, x, size / 2);
		// 4��и� Ž��
		z(y + size / 2, x + size / 2, size / 2);
	}
	else {
		ans += size * size;
	}
}
int main() {

	cin >> N >> r >> c;
	z(0,0,(1<<N));

}