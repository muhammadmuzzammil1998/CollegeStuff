#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 100
int stack[MAX], top = 0;

int isUnderflow() {
	if (top == 0) printf("ERROR: Stack underflow.");
	return (top == 0);
}

int isOverflow() {
	if (top == MAX) printf("ERROR: Stack overflow.");
	return (top == MAX);
}

void pop() {
	if (isUnderflow()) return;
	stack[--top];
	printf("Element popped.");
}

void push(int to_push) {
	if (isOverflow()) return;
	stack[top++] = to_push;
}

void peek() {
	if (isUnderflow()) return;
	printf("stack[%d] => %d\n", top - 1, stack[top - 1]);
}

void dump() {
	if (isUnderflow()) return;
	for (int i = 0; i < top; i++) printf("stack[%d] => %d\n", i, stack[i]);
}

void clear() { top = 0; }

void populate(int limit) {
	srand(time(NULL));
	for (int i = 0; i < limit; i++) push(rand());
}

int main() {
	printf("Implementation of stack by array\n");
	for (int i = 0; i < 32; i++) printf("=");
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
			printf("Enter limit (MAX: %d):\t", MAX);
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
