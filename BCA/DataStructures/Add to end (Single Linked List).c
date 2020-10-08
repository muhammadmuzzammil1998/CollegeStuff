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
void addToEnd(int value) {
	struct node *ptr, *temp;
	ptr = (struct node*) malloc(sizeof(struct node));
	ptr->data = value;
	ptr->next = NULL;
	if (head == NULL) {
		head = ptr;
		return;
	}
	temp = head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = ptr;
	head = temp;
}
int main() {
	int value = -1;
	printf("Enter 0 to exit and traverse.\n\n");
	while (value != 0) {
		printf("Enter number to add: ");
		scanf("%d", &value);
		if (value == 0) traverse();
		addToEnd(value);
	}
	return 0;
}
