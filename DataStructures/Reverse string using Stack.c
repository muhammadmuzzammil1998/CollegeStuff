#include <stdio.h>
#include <string.h>

#define MAX 100
char stack[MAX], top = 0;

int pop() {
	if (top != NULL) return --top;
	printf("ERROR: Stack underflow.");
}

void push(int to_push) {
	if (top != MAX) {
		stack[top++] = to_push;
		return;
	}
	printf("ERROR: Stack overflow.");
}

void dump() {
	if (top == NULL) return;
	for (int i = 0; i < top; i++)
		printf("%c", stack[i]);
}

int main() {
	char str[MAX];
	printf("Enter a string to reverse: ");
	scanf("%s", str);
	for (int i = strlen(str); i >= 0; i--)
		push(str[i]);
	printf("Reversed string: ");
	dump();
	return 0;
}
