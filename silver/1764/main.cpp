#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	vector<string> hear;
	vector<string> result;
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string n;
		cin >> n;
		hear.push_back(n);
	}
	for (int i = 0; i < M; i++) {
		string m;
		cin >> m;
		hear.push_back(m);
	}
	sort(hear.begin(), hear.end());

	for (int i = 0; i < hear.size(); i++) {
		if (i + 1 == hear.size()) break;
		if (hear[i] == hear[i + 1])
			result.push_back(hear[i]);
	}
	cout << result.size() << "\n";
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << "\n";
	
}