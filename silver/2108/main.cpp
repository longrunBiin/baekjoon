#include<iostream>
#include<algorithm>
#include <vector>
#include<cmath>
using namespace std;

int main() {
	int N, sum = 0, mid = 0, fre = 0, boundary = 0;
	double avg;
	vector<int> v;
	cin >> N;
	int freq[8001] = { 0, };
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		v.push_back(n);
		sum += n;
		if (n >= 0)
			freq[n];
		else
			freq[(- n) + 4000]++;
	}
	avg = floor((sum / N) + 0.5);
	sort(v.begin(), v.end());
	mid = v[N/2];
	fre = freq[0];
	int tmp;
	bool flag = true;
	for (int i = 1; i < 8001; i++) {
		if (fre < freq[i]) {
			fre = freq[i];
			if (i > 4000)
				tmp = i-4000;
			else
				tmp = i;
		}
		else if (fre == freq[i]) {
			if (i > 4000)
				tmp = i - 4000;
			else
				tmp = i;
			break;
		}
	}
	
	boundary = v.back() - v.front();
	cout << avg << "\n" << mid << "\n" << tmp << "\n" << boundary;
}