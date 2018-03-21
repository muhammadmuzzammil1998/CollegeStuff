#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void sort(int stack[], int length) {
	for (int i = 1; i < length; i++) {
		int value = stack[i];
		while (stack[i - 1] > value) {
			stack[i] = stack[i - 1];
			i--;
		}
		stack[i] = value;
	}
}

void dump(int arr[], int length) {
	for (int i = 0; i < length; i++)
		printf("\t%s%d|", arr[i] <= 9 ? " " : "", arr[i]);
	printf("\n");
}

int main() {
	int stack[MAX];
	printf("Enter number of elements (MAX %d): ", MAX);
	int n;
	scanf("%d", &n);
	srand(time(NULL));
	for (int i = 0; i < n; i++) stack[i] = rand() % 50;
	printf("Unsorted list:\t");
	dump(stack, n);
	printf("\t\t...sorting...");
	sort(stack, n);
	printf("\rSorted list:\t");
	dump(stack, n);
	return 0;
}
