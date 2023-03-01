#include<iostream>

using namespace std;

int main() {
	int X;
	cin >> X;
	int left = 1, right = 1;
	bool flag = true;//true는 가로, false 세로
	if (X == 1) {
		cout << left << "/" << right;
		return 0;
	}
	for (int i = 1; i < X; i++) {
		if (left == 1 && flag==true) {
			right++;
			flag = false;
		}
		else if (left == 1 && flag == false) {
			right--;
			left++;
		}
		else if (right == 1 && flag == false) {
			left++;
			flag = true;
		}
		else if (right == 1 && flag == true) {
			left--;
			right++;
		}
		else if (flag == true) {
			left--; right++;
		}
		else if (flag == false) {
			left++; right--;
		}
	}
	cout << left << "/" << right;
}