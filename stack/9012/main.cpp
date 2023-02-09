#include<iostream>
#include <stack>
#include <string>
using namespace std;
#define MAX_STACK_SIZE 50
typedef struct Stack {
	int top = -1;
	string data[MAX_STACK_SIZE];
};


bool check(stack<string> stack, string str) {
	int t = str.length();
	int i = 0;
	string newstr;
	string res;
	while (t--) {
		newstr = str.substr(i, 1);
		if (newstr == "(")
			stack.push(newstr);
		else if (newstr == ")") {
			if (stack.empty())return false;
			else if (stack.top() == "(") {
				stack.pop();
			}
			else return false;
		}
		i++;
		newstr = "";
	}
	if (stack.empty())return true;
	else return false;
}

int main() {
	stack<string> stack;
	int T;
	bool ch;
	cin >> T;
	while (T--) {
		string str;
		cin >> str;
		ch = check(stack, str);
		if (ch == true)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
}