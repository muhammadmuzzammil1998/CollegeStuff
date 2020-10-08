#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 100

struct node {
	int data;
	struct node *next;
} *head, *tail;

int isUnderflow() {
	if (head == NULL) printf("ERROR: Queue underflow.");
	return (head == NULL);
}

void addElement(int to_add) {
	struct node *N
		= (struct node*) malloc(sizeof(struct node));
	N->data = to_add;
	N->next = NULL;
	if (tail != NULL) tail->next = N;
	if (head == NULL) head = N;
	tail = N;
}

void removeElement() {
	if (isUnderflow()) return;
	head = head->next;
}

void dump() {
	if (isUnderflow()) return;
	struct node *t = head;
	while (t != NULL) {
		printf("%d\t%s\t", t->data,
			(t->data != tail->data) ? "->" : "");
		t = t->next;
	}
}

int canPeek() { return !isUnderflow(); }

void populate(int limit) {
	srand(time(NULL));
	for (int i = 0; i < limit; i++) addElement(rand());
}

int main() {
	printf("Implementation of queue by linked list\n");
	for (int i = 0; i < 38; i++) printf("=");
	int choice = -1;
	printf("\n\n\nSelect an option:\n\t1. Add\n\t2. Remove\n\t3. Peek\n\t");
	printf("4. Dump\n\t5. Empty queue\n\t6. Populate queue\n\t0. Exit\n");
	while (choice != 0) {
		printf("\nYour choice:\t");
		scanf("%d", &choice);
		if (choice == 1) {
			printf("Element to add: ");
			int element;
			scanf("%d", &element);
			addElement(element);
			printf("Element added.");
		} else if (choice == 2) removeElement();
		else if (choice == 3) { if (canPeek()) printf("%d\n", head->data); } 
		else if (choice == 4) dump();
		else if (choice == 5) {
			head = 0, tail = 0;
			printf("Queue emptied.");
		} else if (choice == 6) {
			printf("Enter limit (MAX: %d):\t", MAX);
			int limit;
			scanf("%d", &limit);
			printf("Populating queue with random values...");
			populate(limit);
			printf("\t\tDone");
		} else if (choice != 0) printf("Invalid selection.");
	}
	return 0;
}
