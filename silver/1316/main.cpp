#include<iostream>

using namespace std;

int main() {
	int T, count = 0;
	cin >> T;
	while (T--) {
		bool isCheck = true;
		int arr[26]={0,};
		string s;
		cin >> s;
		char tmp = s[0];
		arr[s[0] - 'a']++;
		for (int i = 1; i < s.size(); i++) {
			if (s[i] != s[i - 1]) {
				if (arr[s[i] - 'a'] > 0 && tmp != s[i]) {
					isCheck = false;
					break;
				}
				tmp = s[i];
			}
			arr[s[i] - 'a']++;
		}
		if (isCheck) count++;
	}
	cout << count;
}