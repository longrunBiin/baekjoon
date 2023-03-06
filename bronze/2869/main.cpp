#include<iostream>

using namespace std;

int main() {
	int A, B, V, h = 0, day = 0;
	cin >> A >> B >> V;

	day = (V - B) / (A - B);
	if ((V - B) % (A - B) != 0)
		day++;
	cout << day;
}