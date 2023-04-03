#include<iostream>
#include<map>
using namespace std;

int main() {
	int n, t;
	cin >> t;
	string name, type;
	while (t--) {
		map<string, int> wear;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> name >> type;
			if (wear.find(type) == wear.end())
				wear.insert(make_pair(type, 1));
			else wear[type]++;
		}
		int res = 1;
		for (auto it = wear.begin(); it != wear.end(); it++) {
			res *= it->second + 1;
		}
		cout << res - 1<< endl;

	}
}