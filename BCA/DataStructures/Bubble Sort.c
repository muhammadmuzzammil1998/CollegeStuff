#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void sort(int set[], int length) {
	for (int i = 0; i < length; i++) 
		for (int j = 0; j < length - 1; j++) 
			if (set[j] > set[j + 1]) {
				int tmp = set[j];
				set[j] = set[j + 1];
				set[j + 1] = tmp;
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
	for (int i = 0; i <= n; i++) set[i] = rand() % 50;
	printf("Unsorted list:\t");
	dump(set, n);
	printf("sorting...");
	sort(set, n);
	printf("\rSorted list:\t");
	dump(set, n);
	return 0;
}
