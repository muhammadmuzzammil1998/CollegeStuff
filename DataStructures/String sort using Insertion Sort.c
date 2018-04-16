#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 100
#define WLEN 100

void sort(char str[][WLEN], int n) {
	char sorted[WLEN];
	for (int item = 1, j; item < n; item++) {
		strcpy(sorted, str[item]);
		for (j = item; strcmp(str[j - 1], sorted) > 0 && j > 0; j--);
		memcpy(&str[j + 1], &str[j], (item - j) * WLEN);
		strcpy(str[j], sorted);
	}
}

void display(char str[][WLEN], int n) {
	for (int i = 0; i < n; i++)
		printf("%s ", str[i]);
	printf("\n");
}

int main() {
	int length;
	char str[SLEN][WLEN];
	printf("Enter number of words: ");
	scanf("%d", &length);
	printf("Enter your words: ");
	for (int i = 0; i < length; i++)
		scanf(" %s", str[i]);
	sort(str, length);
	printf("Words in sorted order: ");
	display(str, length);
	return 0;
}
