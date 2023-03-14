#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<pair<int, string>> v;
	for (int i = 0; i < N;i++) {
		string s;
		cin >> s;
		int length = s.size();
		int flag = true;
		for (int j = 0; j < v.size(); j++) 
			if (v[j].second == s) { 
				flag = false; 
				break;
			}
		if(flag)
			v.push_back(make_pair(length, s));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].second << "\n";
	}
}