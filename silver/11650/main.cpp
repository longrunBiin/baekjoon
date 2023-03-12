#include<iostream>
#include<map>
using namespace std;

int main() {
	int N;
	multimap<int, int> m;
	
	cin >> N;

	while (N--) {
		int a, b;
		cin >> a >> b;
		m.insert(pair<int, int>(a, b));
	}
	multimap<int, int>::iterator iter;
	multimap<int, int>::iterator tmp;
	multimap<int, int>::iterator end = m.end();
	end--;
	for (iter = m.begin(); iter != m.end(); iter++) {
		tmp = iter;
		tmp++;
		if (tmp == m.end()) break;
		int count = 0;
		if (iter->first == tmp->first) {
			if (tmp != end) {
				while (iter->first == tmp->first)	tmp++;
			}
			else {
				cout << tmp->first << " " << tmp->second << "\n";
			}
			while (iter != tmp) {
				count++;
				tmp--;
				cout << tmp->first << " " << tmp->second << "\n";
			}
		}
		else cout << iter->first << " " << iter->second << "\n";
		count--;
		if(count>0)	while ((count)--) iter++;
	}
}
