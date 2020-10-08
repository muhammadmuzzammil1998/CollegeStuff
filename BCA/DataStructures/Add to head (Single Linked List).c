#include <stdio.h>
#include <stdlib.h>

struct node {
	int data; struct node *next;
}*head;
void traverse() {
	struct node* temp = head;
	while (temp->next != NULL) {
		printf("%d  <=  ", temp->data);
		temp = temp->next;
	}
	printf("%d\n", temp->data);
}
void addToHead(int value) {
	struct node* node =
		(struct node*)malloc(sizeof(struct node));
	node->data = value;
	if (head == NULL) node->next = NULL;
	else node->next = head;
	head = node;
}
int main() {
	int value = -1;
	printf("Enter 0 to exit and traverse.\n\n");
	while (value != 0) {
		printf("Enter number to add: ");
		scanf("%d", &value);
		if (value == 0) traverse();
		addToHead(value);
	}
	return 0;
}
