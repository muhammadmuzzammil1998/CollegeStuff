#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
int set[MAX];
void heap(int n, int i) {
	int largest = i, l = 2 * i + 1, r = 2 * i + 2; 
	if (l < n && set[l] > set[largest])
		largest = l;
	if (r < n && set[r] > set[largest])
		largest = r;
	if (largest != i) {
		int t = set[i];
		set[i] = set[largest];
		set[largest] = t;
		heap(n, largest);
	}
}
void sort(int n) {
	for (int i = n / 2 - 1; i >= 0; i--) heap(n, i);
	for (int i = n - 1; i >= 0; i--) {
		int t = set[0]; set[0] = set[i]; set[i] = t;
		heap(i, 0);
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
	printf("Unsorted heap:\t");
	dump(set, n - 1);
	printf("sorting...");
	sort(n);
	printf("\rSorted heap:\t");
	dump(set, n - 1);
	return 0;
}
