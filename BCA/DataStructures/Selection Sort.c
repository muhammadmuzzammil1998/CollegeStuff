#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void sort(int set[], int length) {
	for (int i = 0, min; i <= length; i++) {
		min = i;
		for (int j = i; j < length; j++)
			if (set[j] < set[min]) min = j;
		if (min != i) {
			int temp = set[min];
			set[min] = set[i];
			set[i] = temp;
		}
	}
}

void dump(int set[], int length) {
	for (int i = 0; i < length; i++)
		printf("\t%s%d|",
		       set[i] <= 9 ? " " : "", set[i]);
	printf("\n");
}

int main() {
	int set[MAX];
	printf("Enter number of elements (MAX %d): ", MAX);
	int n;
	scanf("%d", &n);
	srand(time(NULL));
	for (int i = 0; i < n; i++) set[i] = rand() % 50;
	printf("Unsorted list:\t");
	dump(set, n);
	sort(set, n);
	printf("Sorted list:\t");
	dump(set, n);
	return 0;
}
