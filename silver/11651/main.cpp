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
		v.push_back(make_pair(b, a));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].second << " " << v[i].first << "\n";

	}
}
