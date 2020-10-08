#include <stdio.h>

#include <stdlib.h>

struct node {
	int data;
	struct node *next;
}*head;

int main() {
	int value = -1;
	printf("Enter 0 to display list.\n\n");
	while (1) {
		printf("Enter number to add: ");
		scanf("%d", &value);
		if (value == 0) {
			struct node* temp = head;
			while (temp->next != NULL) {
				printf("%d  <=  ", temp->data);
				temp = temp->next;
			}
			printf("%d\n", temp->data);
			continue;
		}
		struct node* node = 
			(struct node*)malloc(sizeof(struct node));
		node->data = value;
		if (head == NULL) node->next = NULL;
		else node->next = head;
		head = node;
	}
  return 0;
}
