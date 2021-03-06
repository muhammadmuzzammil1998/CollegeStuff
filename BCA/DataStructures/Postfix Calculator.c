#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAX 50

int stack[MAX];
int top = -1;

void push(int num) { stack[++top] = num; }

int pop() { return stack[top--]; }

int main() {
	char postfix[MAX];
	printf("Enter Postfix expression:\t");
	scanf("%s", postfix);
	char* ch = postfix;
	while (*ch != '\0') {
		if (isalpha(*ch)) {
			printf("ERROR: \"%c\"; Use numeric values only.\n", *ch);
			return 1;
		}
		if (isalnum(*ch)) {
			push(*ch - 48);
			ch++;
			continue;
		}
		int y = pop();
		int x = pop();
		int answer;
		if (*ch == '+') answer = x + y;
		else if (*ch == '-') answer = y - x;
		else if (*ch == '*') answer = x * y;
		else if (*ch == '/') answer = x / y;
		else if (*ch == '^') answer = pow(x, y);
		else {
			printf("ERROR: \"%c\"; Invalid character.\n", *ch);
			return 1;
		}
		push(answer);
		ch++;
	}
	printf("\nEvaluated %s  =  %d\n\n", postfix, pop());
	return 0;
}
