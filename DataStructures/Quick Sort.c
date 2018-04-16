#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void dump(int set[], int length) {
	for (int i = 0; i < length; i++)
		printf("\t%2d|", set[i]);
	printf("\n");
}

int partition(int set[], int lower, int upper) {
	int nextlow = lower + 1;
	while (upper >= nextlow) {
		while (set[nextlow] < set[lower])
			nextlow++;
		while (set[upper] > set[lower])
			upper--;
		if (upper > nextlow) {
			int temp = set[nextlow];
			set[nextlow] = set[upper];
			set[upper] = temp;
		}
	}
	int temp = set[lower];
	set[lower] = set[upper];
	set[upper] = temp;
	return upper;
}

void sort(int set[], int lower, int upper) {
	if (upper > lower) {
		int p = partition(set, lower, upper);
		sort(set, lower, p - 1);
		sort(set, p + 1, upper);
	}
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
	sort(set, 0, n - 1);
	printf("\rSorted list:\t");
	dump(set, n);
	return 0;
}


