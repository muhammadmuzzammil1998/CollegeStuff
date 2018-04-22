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
void insertafter(int n) {
	struct node *temp, *saved, *previous;
	int value;
	temp = (struct node *)malloc(sizeof(struct node));
	printf("Enter value of node: "); scanf("%d", &value);
	temp->data = value;	saved = head;
	while (n != saved->data && saved->next != NULL) {
		previous = saved;
		saved = saved->next;
	}
	if (saved->data == n) {
		temp->next = saved->next;
		saved->next = temp;
	} else printf("ERROR: Specified Node Not Found.\n");
}
int main() {
	printf("Options:\n1. Add\n2. Traverse\n3. Insert after node\n0. Exit\n");
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
		else if (choice == 3) {
			printf("Enter node data: ");
			scanf("%d", &value);
			insertafter(value);
		}
	}
	return 0;
}
