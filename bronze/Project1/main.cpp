#include<iostream>
using namespace std;

int main() {
	int list[100];
	int N, v, count = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> list[i];
	}
	cin >> v;
	for (int i = 0; i < N; i++) {
		if (list[i] == v) count++;
	}
	cout << count<<"\n";
}