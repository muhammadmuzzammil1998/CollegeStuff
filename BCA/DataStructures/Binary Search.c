#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

int search(int set[], int length, int item) {
	int low = 0, high = length, mid, found = 0;
	while (!found) {
		if (set[high] < item) {
			mid = -1;
			found = 1;
			break;
		}
		mid = low + (high - low) / 2;
		if (set[mid] < item) low = mid + 1;
		if (set[mid] > item) high = mid - 1;
		if (set[mid] == item) found = 1;
	}
	return mid - 1;
}

void dump(int set[], int length) {
	printf("Set = { ");
	for (int i = 1; i <= length; i++)
		printf("%s%d%s", 
			   set[i] <= 9 ? " " : "", 
			   set[i], i >= length ? "":", ");
	printf(" }\n");
}

int main() {
	int set[MAX];
	printf("Enter number of elements (MAX %d): ", MAX);
	int n;
	scanf("%d", &n);
	srand(time(NULL));
	set[0] = 0;
	for (int i = 1; i <= n; i++) 
		set[i] = (rand() % 50) + set[i - 1];
	dump(set, n);
	while (1) {
		printf("Enter element to find: ");
		int find;
		scanf("%d", &find);
		int loc = search(set, n, find);
		if (loc < 0) printf("%d not found in current set.\n", find);
		else printf("%d is located at Set[%d].\n", find, loc);
	}
	return 0;
}

