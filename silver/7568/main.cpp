#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	vector<pair<int,int>> v;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

}