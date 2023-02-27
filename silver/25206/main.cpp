#include<iostream>
#include<string>
using namespace std;

int main() {
	cout << fixed;
	cout.precision(6);
	double avg = 0;//전공평점
	double full = 0;
	for (int i = 0; i < 20;i++) {
		string s;
		double score = 0, ABC = 0;//학점,과목평점
		bool flag = true;
		getline(cin, s);
		
		for (int j = 0; j < s.size(); j++) {
			if (flag == true) {
				while (s[j] != ' ') {
					j++;
					flag = false;
				}
			}
			if (flag == false) {
				if (s[j] == ' ') continue;
				else if (s[j] == '1') {
					score = 1;
					full += 1;
				}
				else if (s[j] == '2') {
					score = 2;
					full += 2;
				}
				else if (s[j] == '3') {
					score = 3;
					full += 3;
				}
				else if (s[j] == '4') {
					score = 4;
					full += 4;
				}
				else if (s[j] == 'A') {
					if (s[j + 1] == '+') {
						ABC = 4.5;
						j++;
					}
					else if (s[j + 1] == '0') {
						ABC = 4.0;
						j++;
					}
				}
				else if (s[j] == 'B') {
					if (s[j + 1] == '+') {
						ABC = 3.5;
						j++;
					}
					else if (s[j + 1] == '0') {
						ABC = 3.0;
						j++;
					}
				}
				else if (s[j] == 'C') {
					if (s[j + 1] == '+') {
						ABC = 2.5;
						j++;
					}
					else if (s[j + 1] == '0') {
						ABC = 2.0;
						j++;
					}
				}
				else if (s[j] == 'D') {
					if (s[j + 1] == '+') {
						ABC = 1.5;
						j++;
					}
					else if (s[j + 1] == '0') {
						ABC = 1.0;
						j++;
					}
				}
				else if (s[j] == 'F' || s[j] == 'P') {
					ABC = 0;
					full -= score;
					continue;
				}
			}
		}
			avg += score * ABC;
	}
	cout << avg / full;
}