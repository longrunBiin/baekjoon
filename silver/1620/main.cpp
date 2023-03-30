#include<iostream>
#include<string>
using namespace std;
string pokemon[100001];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) 
		cin >> pokemon[i];
	cout << "----------------" << "\n";
	for (int i = 0; i < N; i++) {
		string question;
		int num;
		cin >> question;
		if (question >= "1" && question <= "100000") {
			num = stoi(question);
			cout << pokemon[num+1] << "\n";
		}
		else {
			for (int i = 0; i < N; i++) {
				if (question == pokemon[i]) {
					cout << i+1 << "\n";
					break;
				}
			}
		}
	}
}