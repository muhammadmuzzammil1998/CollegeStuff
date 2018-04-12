#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 100

int queue[MAX], head = 0, tail = 0;

int isOverflow() {
	if (tail == MAX) printf("ERROR: Queue overflow.");
	return (tail == MAX);
}

int isUnderflow() {
	if (head == NULL && tail == 0) printf("ERROR: Queue underflow.");
	return (head == NULL && tail == 0);
}

int addElement(int to_add) {
	if (isOverflow()) return 0;
	queue[tail] = to_add;
	tail++;
	head = 0;
	return 1;
}

void removeElement() {
	if (isUnderflow()) return;
	head++;
}

void dump() {
	if (isUnderflow()) return;
	for (int i = head; i < tail; i++)
		printf("%d\t%s\t", queue[i], (i + 1 < tail) ? "->" : "");
}

int canPeek() { return !isUnderflow(); }

void populate(int limit) {
	srand(time(NULL));
	for (int i = 0; i < limit; i++) addElement(rand());
}

int main() {
	printf("Implementation of queue by array\n");
	for (int i = 0; i < 32; i++) printf("=");
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
			if (addElement(element))
				printf("Element added.");
		} else if (choice == 2) removeElement();
		else if (choice == 3) { if (canPeek()) printf("%d\n", queue[head]); }
		else if (choice == 4) dump();
		else if (choice == 5) {
			head = 0, tail = 0;
			printf("Queue emptied.");
		} else if (choice == 6) {
			printf("Enter limit (MAX: %d):\t", MAX - tail);
			int limit;
			scanf("%d", &limit);
			printf("Populating queue with random values...");
			populate(limit);
			printf("\t\tDone");
		} else if (choice != 0) printf("Invalid selection.");
	}
	return 0;
}
