#include<iostream>
#include<algorithm>
using namespace std;
int list[100001];
int ans[100001];
int main() {
	int N, M;
	cin >> N;
	for (int i = 0; i < N;i++) {
		cin >> list[i];
	}
	sort(list, list + N);
	cin >> M;
	for (int i = 0; i < M; i++) {
		int n;
		cin >> ans[i];
	}
	sort(ans, ans + N);
	for (int i = 0; i < N; i++) {
		bool flag = false;
		for (int j = 0; j < M; j++) {
			if (list[i] == ans[j])
				flag = true;
		}
		if (flag)
			cout << "1\n";
		else
			cout << "0\n";
	}
}