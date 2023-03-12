#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int N, vsize;
	vector<int> v;
	cin >> N;
	vsize = N;
	while (N--) {
		int n;
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < vsize; i++) {
		cout << v[i] << "\n";
	}
}