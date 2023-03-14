#include<iostream>
#include<algorithm>
#include<vector>
#include<tuple>
using namespace std;

int main() {
	int N;
	vector<tuple<int, int, string>> v;//나이, 이름, 가입순
	cin >> N;

	for (int i = 0; i < N;i++) {
		int age;
		string name;
		cin >> age >> name;
		v.push_back(make_tuple(age, i, name));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << get<0>(v[i]) << " " << get<2>(v[i]) << "\n";
	}
}