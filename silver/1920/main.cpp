#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0); 
	cin.tie(0);
	int N, M;
	cin >> N;
	int *list = new int[N];
	for (int i = 0; i < N;i++) {
		cin >> list[i];
	}
	sort(list, list + N);
	cin >> M;
	for (int i = 0; i < M; i++) {
		int n;
		cin >> n;
		cout << binary_search(list, list + N, n) << "\n";
	}
}