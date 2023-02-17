#include<iostream>
#include<string>
using namespace std;

int main() {
	string s, s2;
	getline(cin, s);
	s2 = s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			cout << ' ';
		}
		else if (s[i] > 'A' && s[i] < 'Z') {
			int tmp = s[i] - 'A' + 13;
			cout<< (char)(tmp+'A' + 13) % 26;
		}
		else if (s[i] > 'a' && s[i] < 'z') {
			int tmp = s[i] - 'a' + 13;
			cout<<(char)(s[i]+'a' + 13) % 26;
		}
		else cout<<s[i];
	}
	
}