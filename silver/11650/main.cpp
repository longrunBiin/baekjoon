#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N;
	vector<pair<int, int>> v;
	cin >> N;
	while (N--) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << " " << v[i].second << "\n";

	}
}
