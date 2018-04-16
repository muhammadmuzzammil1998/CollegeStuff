#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
int set[MAX];
void sort(int n) {
	int inner, outer;
	int valueToInsert;
	int h = 1;
	while (h <= n / 3) h = h * 3 + 1;
	while (h > 0) {
		for (outer = h; outer < n; outer++) {
			valueToInsert = set[outer];
			inner = outer;
			while (inner > h - 1 && set[inner - h] >= valueToInsert) {
				set[inner] = set[inner - h];
				inner -= h;
			}
			set[inner] = valueToInsert;
		}
		h = (h - 1) / 3;
	}
}
void dump(int set[], int n) {
	for (int i = 0; i <= n; i++) printf("\t%2d|", set[i]);
	printf("\n");
}
int main() {
	printf("Enter number of elements (MAX %d): ", MAX);
	int n;
	scanf("%d", &n);
	srand(time(NULL));
	for (int i = 0; i < n; i++) set[i] = rand() % 50;
	printf("Unsorted array:\t");
	dump(set, n - 1);
	printf("sorting...");
	sort(n);
	printf("\rSorted array:\t");
	dump(set, n - 1);
	while (1);
	return 0;
}

