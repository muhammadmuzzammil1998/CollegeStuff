#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

int search(int set[], int length, int item) {
	int found = -1, i;
	for (i = 0; i <= length; i++) 
		if (item == set[i]) {
			found = 1;
			break;
		}
	return found == -1 ? -1 : i - 1;
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
	for (int i = 0; i <= n; i++) set[i] = rand() % 50;
	dump(set, n);
	while (1) {
		printf("Enter element to find: ");
		int find;
		scanf("%d", &find);
		int loc = search(set, n, find);
		if (loc == -1) printf("%d not found in current set.\n", find);
		else printf("%d is located at Set[%d].\n", find, loc);
	}
	return 0;
}
