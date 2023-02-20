#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int count = 0;
	bool flag = true;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			flag = true;
			continue;
			}
		else if (flag == true && s[i] != ' ') {
			count++;
			flag = false;
		}
	}
	cout << count;
}