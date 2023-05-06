#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	string food;
	cin >> food;
	int count = 0;
	int max=0;
	for (int i = 0; i < N; i++) {
		if (food[i] == 'C') count++;
	}
	cout << count / (N - count + 1) + (count % (N - count + 1) != 0 ? 1 : 0);
}