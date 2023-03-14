#include<iostream>
#include<algorithm>
#include <vector>
#include<cmath>
using namespace std;


int main() {
	int N, avg, mid, freq, bound;
	int count[8001] = {0,};
	double sum = 0;
	vector<int> v;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		v.push_back(n);
		sum += n;
		count[n + 4000]++;
	}
	sort(v.begin(), v.end());
	mid = v[N / 2];
	avg = round(sum/ N);
	int size = v.size();
	bound = v[size - 1] - v[0];
	freq = -1;
	
	bool flag = false;
	int max = 0;
	int i;
	for (i = 0; i < 8001; i++) {
		if (count[i] == 0) continue;
		if (count[i] == max) {
			if (flag) {
				freq = i - 4000;
				flag = false;
			}
		}
		if (count[i] > max) {
			max = count[i];
			freq = i - 4000;
			flag = true;
		}
	}
	cout << avg << "\n" << mid << "\n" << freq << "\n" << bound << "\n";
}