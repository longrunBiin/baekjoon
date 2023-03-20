#include<iostream>
#include<string>
using namespace std;

int main() {
	string s, initial;
	cin >> s;

	initial += s.substr(0, 1);
	int index = s.find("-")+1;
	while (index!=0) {
		s = s.substr(index, s.size());
		initial += s.substr(0, 1);
		index = s.find("-") + 1;
	}
	cout << initial;

}