#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct node {
	int data;
	int priority;
	struct node *next;
} *head;

int isUnderflow() {
	if (head == NULL) printf("ERROR: Queue underflow.");
	return (head == NULL);
}

void addElement(int to_add, int priority) {
	struct node *N = (struct node*) malloc(sizeof(struct node));
	N->data = to_add;
	N->priority = priority;
	if (head == NULL || priority > head->priority) {
		N->next = head;
		head = N;
		return;
	}
	struct node *temp = head;
	while (temp->next != NULL &&
		   temp->next->priority >= N->priority)
		temp = temp->next;
	N->next = temp->next;
	temp->next = N;
}

void removeElement() {
	if (isUnderflow()) return;
	head = head->next;
}

void dump() {
	if (isUnderflow()) return;
	struct node *temp = head;
	printf("+----------+----------+\n");
	printf("| Priority |   Data   |\n");
	while (temp != NULL) {
		printf("+----------+----------+\n");
		printf("| %8d |  %7d |\n", temp->priority, temp->data);
		temp = temp->next;
	}
	printf("+----------+----------+\n");
}

int canPeek() { return !isUnderflow(); }

void populate(int limit) {
	srand(time(NULL));
	for (int i = 0; i < limit; i++)
		addElement(rand(), (rand() % limit) + 1);
}

int main() {
	printf("Implementation of priority queue by linked list\n");
	for (int i = 0; i < 47; i++) printf("=");
	int choice = -1;
	printf("\nSelect an option:\n\t1. Add\n\t2. Remove\n\t3. Peek\n\t");
	printf("4. Dump\n\t5. Empty queue\n\t6. Populate queue\n\t0. Exit\n");
	while (choice != 0) {
		printf("Your choice:\t");
		scanf("%d", &choice);
		if (choice == 1) {
			printf("Element to add: ");
			int element, priority;
			scanf("%d", &element);
			printf("Enter priority: ");
			scanf("%d", &priority);
			addElement(element, priority);
			printf("Element added.\n");
		} else if (choice == 2) removeElement();
		else if (choice == 3) { 
			if (canPeek()) printf("Data: %d, Priority: %d\n", head->data, head->priority); 
		} else if (choice == 4) dump();
		else if (choice == 5) {
			head = NULL;
			printf("Queue emptied.");
		} else if (choice == 6) {
			printf("Enter limit:\t");
			int limit; scanf("%d", &limit);
			printf("Populating queue with random values...");
			populate(limit); printf("\t\tDone\n");
		} else if (choice != 0) printf("Invalid selection.\n");
	}
	return 0;
}
