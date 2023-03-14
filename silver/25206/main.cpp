#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

int main() {
	
	double sum = 0;
	double scoreSum = 0;;
	for (int i = 0; i < 20; i++) {
		string s, stringBuffer;
		getline(cin, s);
		istringstream ss(s);
		vector<string> v;
		while (getline(ss, stringBuffer, ' ')) {
			v.push_back(stringBuffer);
		}
		double score = stod(v[1]);
		string subject = v[2];
		scoreSum += score;
		if (subject == "P") {
			scoreSum -= score;
			continue;
		}
		else if (subject == "A+") {
			sum += (score * 4.5);
		}
		else if (subject == "A0") {
			sum += (score * 4.0);
		}
		else if (subject == "B+") {
			sum += (score * 3.5);
		}
		else if (subject == "B0") {
			sum += (score * 3.0);
		}
		else if (subject == "C+") {
			sum += (score * 2.5);
		}
		else if (subject == "C0") {
			sum += (score * 2.0);
		}
		else if (subject == "D+") {
			sum += (score * 1.5);
		}
		else if (subject == "D0") {
			sum += (score * 1.0);
		}
		else if (subject == "F") {
			sum += (score * 0.0);
		}
	}
	cout << fixed;
	cout.precision(6);
	cout << sum / scoreSum << "\n";

}