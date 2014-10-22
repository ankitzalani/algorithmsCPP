#include <iostream>

using namespace std;

struct Node {
	int data;
	struct Node *prev;
}*top;

class Stack {
public:
	Stack() {
		top = NULL;
	}

	void push(int d) {
		Node *temp = new Node();
		temp -> data = d;
		temp -> prev = top;
		top = temp;
	}

	int pop() {
		Node *temp = top;
		int data = top -> data;

		top = top -> prev;
		delete temp;
		return data;
	}
};

int main() {
	Stack *stack = new Stack();
	stack -> push(100);
	stack -> push(200);
	stack -> push(300);
	stack -> push(400);
	stack -> push(500);
	cout << stack -> pop() << endl;
	cout << stack -> pop() << endl;
	cout << stack -> pop() << endl;
	cout << stack -> pop() << endl;
	cout << stack -> pop() << endl;
}

