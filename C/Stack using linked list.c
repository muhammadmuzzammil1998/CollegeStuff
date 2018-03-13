#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node {
	int value;
	struct node* next;
}* top = NULL;

int isUnderflow(int print_error) {
	if (print_error && isUnderflow(0))
		printf("ERROR: Stack underflow");
	return (top == NULL);
}

void push(int value) {
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->value = value;
	if (isUnderflow(0)) node->next = NULL;
	else node->next = top;
	top = node;
}

void pop() {
	if (isUnderflow(1)) return;
	struct node* temp = top;
	top = temp->next;
	printf("Element popped.");
}

void peek() {
	if (isUnderflow(1)) return;
	printf("%d", top->value);
}

void dump() {
	if (isUnderflow(1)) return;
	struct node* temp = top;
	while (temp->next != NULL) {
		printf("%d  <=  ", temp->value);
		temp = temp->next;
	}
	printf("%d", temp->value);
}

void clear() { top = NULL; }

void populate(int limit) {
	srand(time(NULL));
	for (int i = 0; i < limit; i++) push(rand());
}

int main() {
	printf("Implementation of stack by linked list\n");
	for (int i = 0; i < 38; i++) printf("=");
	int choice = -1;
	printf(
		"\n\n\nSelect an option:\n\t1. Push\n\t2. Pop\n\t3. Peek\n\t4. Dump\n\t5. Empty stack\n\t6. Populate stack\n\t0. Exit\n");
	while (choice != 0) {
		printf("\nYour choice:\t");
		scanf("%d", &choice);
		if (choice == 1) {
			printf("Element to push: ");
			int element;
			scanf("%d", &element);
			push(element);
			printf("Element pushed.");
		}
		else if (choice == 2) pop();
		else if (choice == 3) peek();
		else if (choice == 4) dump();
		else if (choice == 5) {
			clear();
			printf("Stack emptied.");
		}
		else if (choice == 6) {
			printf("Enter limit:\t");
			int limit;
			scanf("%d", &limit);
			printf("Populating stack with random values...");
			populate(limit);
			printf("\t\tDone");
		}
		else printf("Invalid selection.");
	}
	return 0;
}
