#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int M, N, i = 0;
	cin >> N >> M;
	map<string, int> pokemon;
	vector<string> name;
	string tmp;
	
	for (int i = 1; i <= N; i++) {
		cin >> tmp;
		name.push_back(tmp);
		pokemon.insert(make_pair(tmp, i));
	}
	for (int i = 1; i <= M; i++) {;
		cin >> tmp;
		if (tmp[0] >= 65 && tmp[0] <= 90) {
			cout << pokemon[tmp] << "\n";
		}
		else {
			cout << name[stoi(tmp)-1] << "\n";
		}
	}
}