#include <iostream>
#define MAX_STACK_SIZE 10000
using namespace std;

class Stack {
private:
	int stackTop;
	int data[MAX_STACK_SIZE];
public:
	Stack();
	void push(int item);
	int pop();
	int size();
	int empty();
	int top();
};

Stack::Stack() {
	stackTop = -1;
}
void Stack::push(int item) {
	data[++stackTop] = item;
}
int Stack::pop() {
	int item;
	if (stackTop == -1)
		return -1;
	else {
		item = data[stackTop--];
		return item;
	}
}
int Stack::size() {
	return stackTop + 1;
}
int Stack::empty() {
	if (stackTop == -1)
		return 1;
	else
		return 0;
}
int Stack::top() {
	if (stackTop == -1)
		return -1;
	else
		return data[stackTop];
}

int main() {
	Stack s;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string command;
		int n;
		cin >> command;
		if (command == "push") {
			cin >> n;
			s.push(n);
		}
		else if (command == "pop") {
			cout << s.pop() <<"\n";
		}
		else if (command == "size") {
			cout << s.size() << "\n";
		}
		else if (command == "empty") {
			cout << s.empty() << "\n";
		}
		else if (command == "top") {
			cout << s.top() << "\n";
		}
	}
}