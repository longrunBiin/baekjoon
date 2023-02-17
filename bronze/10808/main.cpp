#include<iostream>

using namespace std;

int main() {
	string s;
	int abc[26]={0,};
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		abc[s[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << abc[i] << ' ';
	}
}