#include <iostream>
using namespace std;

struct Node {
	int info;
	Node* next;
};


void display(Node* head) {
	while (head != NULL) {
		cout<<"Node Data " << head->info << endl;
		head = head->next;
	}
	
}

void main() {

	Node* head , *new_node , *temp ;
	head = NULL;
	temp = NULL;

	for (int i = 0; i < 10; i++) {
		cout << "enter data for the node "<<i<<" ";
		 new_node = new Node();
		cin >> new_node->info;
		new_node->next = NULL;
		if (head == NULL) {
			head = new_node;
			temp = new_node;
		}
		else {
			temp->next = new_node;
			temp = new_node;

		}

	}
	cout << endl;
	temp = head;
	display(temp);

}