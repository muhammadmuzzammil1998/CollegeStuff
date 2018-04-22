#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
}*head;

int main() {
	int value = -1;
	printf("Enter 0 to exit.\n\n");
	while (value != 0) {
		printf("Enter number to add: ");
		scanf("%d", &value);
		struct node* node = 
			(struct node*)malloc(sizeof(struct node));
		node->data = value;
		if (head == NULL) node->next = NULL;
		else node->next = head;
		head = node;
	}
	return 0;
}

