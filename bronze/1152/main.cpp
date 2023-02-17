#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int count = 0;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] != ' ' && s[i - 1] == ' ') {
			continue;
		}
		else if (s[i] == ' ' && s[i - 1] != ' ') {
			continue;
		}
		else if (s[i] == ' ')
			count++;
	}
	cout << count;
}