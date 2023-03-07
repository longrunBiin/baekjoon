#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main() {
	int N, sum = 0, mid = 0, fre = 0, boundary = 0;
	double avg;
	vector<int> v;
	cin >> N;
	int freq[4001] = { 0, };
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		v.push_back(n);
		sum += n;
		freq[n]++;
	}
	avg = sum / N;
	sort(v.begin(), v.end());
	mid = v[N/2];
	fre = freq[0];
	bool flag = true;
	for (int i = 0; i < 4001; i++) {
		if (fre < freq[i]) {
			fre = freq[i];
			flag = true;
		}
		else if (fre == freq[i]) flag = false;
	}
	if (!flag) fre = v[1];
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "->";
	cout << "end " << v.end() << "be " << v.begin();
	boundary = v.end() - v.begin();
	cout << avg << "\n" << mid << "\n" << fre << "\n" << boundary;
}