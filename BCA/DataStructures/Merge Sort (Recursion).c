#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
int seta[MAX + 1];
int setb[MAX];

void merging(int low, int mid, int high) {
	int l1, l2, i;
	for (l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
		if (seta[l1] <= seta[l2]) setb[i] = seta[l1++];
		else setb[i] = seta[l2++];
	}
	while (l1 <= mid) setb[i++] = seta[l1++];
	while (l2 <= high) setb[i++] = seta[l2++];
	for (i = low; i <= high; i++) seta[i] = setb[i];
}
void sort(int low, int high) {
	if (low < high) {
		int mid = (low + high) / 2;
		sort(low, mid);
		sort(mid + 1, high);
		merging(low, mid, high);
	} else return;
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
	for (int i = 0; i < n; i++) seta[i] = rand() % 50;
	printf("Unsorted list:\t");
	dump(seta, n - 1);
	printf("sorting...");
	sort(0, n - 1);
	printf("\rSorted list:\t");
	dump(seta, n - 1);
	return 0;
}
