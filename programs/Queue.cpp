#include <iostream>

using namespace std;

struct Node {
	int data;
	struct Node *next;
}*top, *current;

class Queue {
public:
	Queue() {
		top = NULL;
		current = NULL;
	}

	void insert(int d) {
		Node *temp = new Node();
		temp -> data = d;
		temp -> next = NULL;

		if(top == NULL)
			top = temp;
		else 
			current -> next = temp;

		current = temp;

	}

	int remove() {
		if(top == NULL) {
			return -1;
		}

		Node *temp = top;
		top = top -> next;
		int data = temp -> data;
		delete temp;
		return data;
	}
};

int main() {
	Queue *queue = new Queue();
	queue -> insert(100);
	queue -> insert(200);
	queue -> insert(300);
	queue -> insert(400);
	queue -> insert(500);

	cout << "Element removed : " << queue -> remove() << endl;
	cout << "Element removed : " << queue -> remove() << endl;
	cout << "Element removed : " << queue -> remove() << endl;
	cout << "Element removed : " << queue -> remove() << endl;
	cout << "Element removed : " << queue -> remove() << endl;
	int data = queue -> remove();
	if(data != -1)
		cout << "Element removed : " << data << endl;
	else
		cout << "Underflow" << endl;
}

