#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int M, N, i = 0;
	cin >> N >> M;

	vector<pair<int, string>> v;
	while (N--) {
		string n;
		cin >> n;
		v.push_back(make_pair(i, n));
		i++;
	}
	for (int q = 0; q < M; q++) {
		string ans;
		cin >> ans;
		
		if (ans[0] >= 65 && ans[0] <= 90){
			for (int k = 0; k < v.size(); k++) {
				if (v[k].second == ans) {
					cout << k+1 << "\n";
					break;
				}
			}
		}
		else {
			int num = stoi(ans);
			cout << v[num-1].second << "\n";
		}
	}
}