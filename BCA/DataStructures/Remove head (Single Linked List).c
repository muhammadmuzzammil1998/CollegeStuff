#include <stdio.h>
#include <stdlib.h>
struct node {
	int data; struct node *next;
}*head;
void traverse() {
	struct node* temp = head;
	while (temp->next != NULL) {
		printf("%d  =>  ", temp->data);
		temp = temp->next;
	}
	printf("%d\n", temp->data);
}
void add(int value) {
	struct node* node =
		(struct node*)malloc(sizeof(struct node));
	node->data = value;
	if (head == NULL) node->next = NULL;
	else node->next = head;
	head = node;
}
void deleteHead() {
	if (head == NULL) {
		printf("ERROR: Items not found.\n");
		return;
	}
	struct node *ptr = head;
	head = ptr->next;
}

int main() {
	printf("Options:\n1. Add\n2. Traverse\n3. Remove head\n0. Exit\n");
	int choice = -1;
	while (choice != 0) {
		printf("Your choice: ");
		scanf("%d", &choice);
		int value = -1;
		if (choice == 1) {
			printf("Enter number to add: ");
			scanf("%d", &value);
			add(value);
		} else if (choice == 2) traverse();
		else if (choice == 3) deleteHead();
	}
	return 0;
}
