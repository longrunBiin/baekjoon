#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector<int> v;
	vector<int> tmp;
	while (N--) {
		int n;
		cin >> n;
		v.push_back(n);
		tmp.push_back(n);
	}
	sort(v.begin(), v.end());

	v.erase(unique(v.begin(), v.end()), v.end());
	for (int i = 0; i < tmp.size(); i++) {
		cout << lower_bound(v.begin(), v.end(), tmp[i]) - v.begin() << " ";
	}
}