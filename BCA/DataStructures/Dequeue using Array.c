#include <stdio.h>
#define MAX 5

int queue[MAX], head = -1, tail = -1;

int isUnderflow() {
	if (head == -1)
		printf("ERROR: Queue underflow.");
	return (head == -1);
}

int isOverflow() {
	if ((head == 0 && tail == MAX - 1) || head == tail + 1)
		printf("ERROR: Queue overflow.");
	return
		((head == 0 && tail == MAX - 1) || head == tail + 1);
}

void addHead(int to_add) {
	if (isOverflow()) return;
	if (head == 0 || head == -1) head = MAX;
	queue[--head] = to_add;
}

void removeHead() {
	if (isUnderflow()) return;
	queue[head] = 0;
	if (head == tail) head = -1, tail = -1;
	if (head == MAX - 1) head = 0;
}

void addTail(int to_add) {
	if (isOverflow()) return;
	if (tail == MAX - 1) tail = 0;
	queue[++tail] = to_add;
}

void removeTail() {
	if (isUnderflow()) return;
	queue[tail] = 0;
	if (head == tail) 
		head = -1, tail = -1;
	else if (tail == 0)
		tail = MAX - 1;
}

void dump() {
	if (isUnderflow()) return;
	for (int i = 0; i < MAX; i++)
		if (queue[i] != 0)
			printf(
				"%d\t%s\t", queue[i],
				(i + 1 < MAX) ? "->" : "");
}

int main() {
	printf("Implementation of double ended queue by array\n");
	for (int i = 0; i < 45; i++) printf("=");
	int choice = -1;
	printf("\n\n\nSelect an option:\n\t1. Add to Head\n\t2. Add to Tail\n");
	printf("\t3. Remove from Head\n\t4. Remove from Tail\n\t5. Empty queue\n");
	printf("\t6. Dump\n\t0. Exit\n");
	while (choice != 0) {
		printf("\nYour choice:\t");
		scanf("%d", &choice);
		int element;
		if (choice == 1 || choice == 2) {
			printf("Element to add: ");
			scanf("%d", &element);
		}
		switch (choice) {
			case 1: addHead(element); break;
			case 2: addTail(element); break;
			case 3: removeHead(); break;
			case 4: removeTail(); break;
			case 5: head = -1, tail = -1; break;
			case 6: dump(); break;
			case 0: break;
			default: printf("Invalid selection.");
		}
	}
	return 0;
}
