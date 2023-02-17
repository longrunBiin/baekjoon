#include<iostream>

using namespace std;

int main() {
	string s;
	long long abc[26] = {0,};
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			abc[s[i] - 'a']++;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z') {
			abc[s[i] - 'A']++;
		}
	}
	int max = abc[0];
	bool same=false;
	int tmp = 0;
	for (int i = 1; i < 26; i++) {
		if (s.size() == 1) {
			if (s[0] >= 'a' && s[0] <= 'z') {
				tmp = s[0] - 'a';
			}
			else if (s[0] >= 'A' && s[0] <= 'Z') {
				tmp = s[0] - 'A';
			}
			break;
		}
		if (max == abc[i]) {
			same = true;
		}
		else if (max < abc[i]) {
			max = abc[i];
			tmp = i;
			same = false;
		}
	}
	if (same) cout << '?';
	else cout << (char)(tmp+'A');
}