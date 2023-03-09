#include<iostream>
#include<string>
using namespace std;

int main() {
	string n, tmp;
	string s;
	cin >> n;

	s = n.substr(0, 1);
	while(true) {
		if (n.length())
			n.erase(0,1);
		else break;
		tmp = n.substr(0, 1);
		for (int i = 0; i < s.length(); i++) {
			if (s[i] > tmp[0]) {
				int j = i;
				while (tmp[0]<s[j]) {
					j++;
				}
				s.insert(j, tmp);
				break;
			}
			else {
				tmp+=s;
				s = tmp;
				break;
			}
		}
	 }
	cout << s;
}