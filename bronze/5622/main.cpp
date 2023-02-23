#include<iostream>

using namespace std;

int main() {
	string num;
	cin >> num;
	int dial=0;
	for (int i = 0; i < num.size(); i++) {
		if (num[i] >= 'A' && num[i] <= 'C')
			dial += 3;
		else if (num[i] >= 'D' && num[i] <= 'F')
			dial += 4;
		else if (num[i] >= 'G' && num[i] <= 'I')
			dial += 5;
		else if (num[i] >= 'J' && num[i] <= 'L')
			dial += 6;
		else if (num[i] >= 'M' && num[i] <= 'O')
			dial += 7;
		else if (num[i] >= 'P' && num[i] <= 'S')
			dial += 8;
		else if (num[i] >= 'T' && num[i] <= 'V')
			dial += 9;
		else if (num[i] >= 'W' && num[i] <= 'Z')
			dial += 10;
	}
	cout << dial;
}