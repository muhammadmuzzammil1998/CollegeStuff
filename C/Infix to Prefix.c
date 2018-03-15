#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 50
#define SENTINEL '~'
#define NULL_CHAR '\0'

char stack[MAX];
int top = -1;

void push(char ch) { stack[++top] = ch; }

char pop() { return stack[top--]; }

int priority(char ch) {
	if (ch == '^') return 4;
	if (ch == '*' || ch == '/') return 3;
	if (ch == '+' || ch == '-') return 2;
	return 1;
}

char* reverse(char* str) {
	for (int i = strlen(str) - 1, j = 0; i > j; i--, j++) {
		char ch = str[i];
		str[i] = str[j];
		str[j] = ch;
	}
	return str;
}

int main() {
	char infix[MAX], prefix[MAX], ch;
	push(SENTINEL);
	int i = 0, j = 0;
	printf("Enter Infix Expression:\t");
	scanf("%s", infix);
	reverse(infix);
	while ((ch = infix[i++]) != NULL_CHAR) {
		if (ch == ')') {
			push(ch);
			continue;
		}
		if (isalnum(ch)) {
			prefix[j++] = ch;
			continue;
		}
		if (ch == '(') {
			while (stack[top] != ')')
				prefix[j++] = pop();
			pop();
		} else {
			while (priority(stack[top]) >= priority(ch))
				prefix[j++] = pop();
			push(ch);
		}
	}
	while (stack[top] != SENTINEL) prefix[j++] = pop();
	prefix[j] = NULL_CHAR;
	reverse(prefix);
	printf("\nEquivalent Prefix Expression: %s\n", prefix);
	return 0;
}
