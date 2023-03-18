#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N, M, result = -1;
	int sum = 0;
	vector<int> v;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		v.push_back(n);
	}
	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			for (int k = j + 1; k < v.size(); k++) {
				sum = v[i] + v[j] + v[k];
				if (result < sum && sum <= M) result = sum;
			}
		}
	}
	cout << result << "\n";
}