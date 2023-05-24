#include<iostream>
#include<vector>
using namespace std;

vector<int> v[100001];

void find_time(int start, int end) {
	for (int i = 0; i < N; i++) {
		int startTime = i;
		int endTime = v[i].front();
		find_time(startTime, endTime);
	}
}
int main() {
	int N, max = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int start, end;
		cin >> start >> end;
		v[start].push_back(end);
		if (max < start) max = start;
	}
	int count = 0;
	find_time(startTime, endTime);
}