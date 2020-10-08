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
void searchNode(int n) {
	struct node *ptr = head;
	int i = 1;
	while (ptr != NULL) {
		if (ptr->data == n) {
			printf("Item location %d.\n", i);
			return;
		}
		ptr = ptr->next;
		i++;
	}
	printf("Item does not exist\n");
}

int main() {
	printf("Options:\n1. Add\n2. Traverse\n3. Search node\n0. Exit\n");
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
			int n;
			printf("Enter node data: "); scanf("%d", &n);
			searchNode(n);
		}
	}
	return 0;
}

