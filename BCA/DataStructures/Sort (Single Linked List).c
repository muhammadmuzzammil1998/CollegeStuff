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
void sort() {
	struct node *ptr = head;
	while (ptr->next != NULL) {
		struct node *cpt = ptr->next;
		while (cpt != NULL) {
			if (ptr->data > cpt->data) {
				int temp = ptr->data;
				ptr->data = cpt->data;
				cpt->data = temp;
			}
			cpt = cpt->next;
		}
		ptr = ptr->next;
	}
}
int main() {
	printf("Options:\n1. Add\n2. Traverse\n3. Sort data\n0. Exit\n");
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
		else if (choice == 3) sort();
	}
	return 0;
}
