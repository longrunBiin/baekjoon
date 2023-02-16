#include <iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
	stack<int>st;
	vector<int>v;
	int N,n;
	cin >> N;
	while (N--) {
		cin >> n;
		v.push_back(n);
	}
	st.push(v[1]);
	for(int i=1;i<v.size();i++){
		if (v[i] > st.top()) {
			while (v[i] > st.top() && !st.empty()) {
				cout << v[i] << ' ';
				st.pop();
			}
		}
		else {
			st.push(v[i]);
		}
	}
}