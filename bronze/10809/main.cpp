#include<iostream>

using namespace std;

int main() {
	string s;
	int abc[26];
	int n;
	cin >> s;
	for (int i = 0; i < 26; i++) {
		abc[i] = -1;
	}
	for (int i = 0; i < s.size(); i++) {
		n = s[i] - 'a';
		if (abc[n] != -1) continue;
		abc[n] = i;
	}

	for (int i = 0; i < 26; i++) {
		cout << abc[i] << ' ';
	}
}