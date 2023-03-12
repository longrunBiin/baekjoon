#include<iostream>
#include<algorithm>
#include <vector>
#include<cmath>
using namespace std;


int main() {
	int N, sum = 0, mid = 0, boundary = 0;
	double avg;
	vector<int> v;
	cin >> N;
	int freq[8001] = { 0, };
	int n;
	for (int i = 0; i < N; i++) {
		cin >> n;
		v.push_back(n);
		sum += n;
		if (n < 0)
			freq[n]++;
		else
			freq[n + 4000]++;
	}
	if (N == 1) avg = n;
	else if (sum >= 0)
		avg = floor((sum / N) + 0.5);
	else if (sum/N<0.5 && sum/N>-0.5)
		avg = 0;
	else
		avg = floor((sum / N) -0.5);
	sort(v.begin(), v.end());
	mid = v[N/2];
	int max=0;
	bool flag = false;
	for (int i = 0; i < 8001; i++) {
		if (max < freq[i]) {
			max = freq[i];
		}
		else if (max != 0 && max == freq[i]) flag = true;
	}
	if (flag) {
		flag = false;
		for (int i = 0; i < 8001; i++) {
			if (flag) { 
				if (i > 4000) max = i - 4000;
				else
					max = -i;
				break;
			}
			if (max == freq[i]) flag == true;
		}
	}
	if (N == 1) max = n;
	boundary = v.back() - v.front();
	cout << avg << "\n" << mid << "\n" << max << "\n" << boundary;
}