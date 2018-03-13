#include <ctype.h>
#include <stdio.h>

#define MAX 50

char stack[MAX];
int top = 0;

void push(char ch) { stack[++top] = ch; }

char pop() { return stack[top--]; }

int priority(char ch) {
	if (ch == '^') return 4;
	if (ch == '*' || ch == '/') return 3;
	if (ch == '+' || ch == '-') return 2;
	return 1;
}

int main() {
	char infix[MAX], postfix[MAX], current;
	int i = 0, ptop = 0;
	printf("Enter Infix Expression:\t");
	scanf("%s", infix);
	push('~'); // Tilde indicates base of stack
	while ((current = infix[i++]) != '\0') {
		if (current == '(') {
			push(current);
			continue;
		}
		if (isalnum(current)) postfix[ptop++] = current;
		else if (current == ')') {
			while (stack[top] != '(')
				postfix[ptop++] = pop();
			pop();
		}
		else {
			while (priority(stack[top]) >= priority(current))
				postfix[ptop++] = pop();
			push(current);
		}
	}
	while (stack[top] != '~') postfix[ptop++] = pop();
	postfix[ptop] = '\0'; // Null Char
	printf("\nEquivalent Postfix Expression: %s", postfix);
}
