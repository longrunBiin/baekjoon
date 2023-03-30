#include<iostream>
#include<map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	map<string, string> note;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string site, password;
		cin >> site>>password;
		note.insert(make_pair(site, password));
	}
	for (int i = 0; i < M; i++) {
		string siteFind;
		cin >> siteFind;
		cout << note[siteFind] << "\n";
	}
}