#include <iostream>
using namespace std;
#define MAX_STACK_SIZE 100000

typedef struct Stack {
	int top;
	int data[MAX_STACK_SIZE];
};
void init(Stack* s) {
	s->top = -1;
}
void push(Stack* s, int item) {
	s->data[++(s->top)] = item;
}
void pop(Stack* s) {
	s->data[--(s->top)];
}
int stackSum(Stack* s) {
	int sum = 0;
	while (s->top != -1) {
		sum += s->data[(s->top)--];
	}
	return sum;
}
int main() {
	Stack s;
	int T;
	cin >> T;
	init(&s);
	while (T--) {
		int n;
		cin >> n;
		if (n == 0)
			pop(&s);
		else
			push(&s, n);
	}
	cout << stackSum(&s) << "\n";
}