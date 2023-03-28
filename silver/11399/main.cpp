#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> v;
	vector<int> vSum;
	int n;
	for (int i = 0; i < N; i++) {
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += v[i];
		vSum.push_back(sum);
	}
	sum = 0;
	for (int i = 0; i < N; i++) {
		sum += vSum[i];
	}

	cout << sum << "\n";
}