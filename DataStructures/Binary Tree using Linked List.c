#include <stdio.h>
#include <stdlib.h>
typedef struct tree {
	int data;
	struct tree *left;
	struct tree *right;
}node;
node *createNode() {
	node *temp = (node *)malloc(sizeof(node));
	temp->left = temp->right = NULL;
	return temp;
}
void insert(node *root, node *newNode) {
	char ch;
	printf("Insert data in left/right of %d (L/R): ", root->data);
	scanf(" %c", &ch);
	if ((ch == 'R') || (ch == 'r')) {
		if (root->right == NULL) {
			root->right = newNode;
		} else insert(root->right, newNode);
	} else {
		if (root->left == NULL) {
			root->left = newNode;
		} else insert(root->left, newNode);
	}
}
void inorder(node *temp) {
	if (temp != NULL) {
		inorder(temp->left);
		printf("%d ", temp->data);
		inorder(temp->right);
	}
}
void preorder(node *temp) {
	if (temp != NULL) {
		printf("%d ", temp->data);
		preorder(temp->left);
		preorder(temp->right);
	}
}
void postorder(node *temp) {
	if (temp != NULL) {
		postorder(temp->left);
		postorder(temp->right);
		printf("%d ", temp->data);
	}
}
int main() {
	int choice;
	char ans = 'n';
	node *newNode, *root;
	root = NULL;
	printf("Implementation of Binary Tree\n");
	for (int i = 0; i < 29; i++) printf("=");
	printf("\n 1. Create");
	printf("\n 2. Inorder");
	printf("\n 3. Preorder");
	printf("\n 4. Postorder");
	printf("\n 0. Exit");
	do {
		printf("\nEnter Your choice: "); scanf("%d", &choice);
		switch (choice) {
			case 1:
				do {
					newNode = createNode();
					printf("Enter data: "); scanf("%d", &newNode->data);
					if (root == NULL) root = newNode;
					else insert(root, newNode);
					printf("Add more? (y/n): "); scanf(" %c", &ans);
				} while (ans == 'Y' || ans == 'y');
				break;
			case 2:
				if (root != NULL) inorder(root); break;
			case 3:
				if (root != NULL) preorder(root); break;
			case 4:
				if (root != NULL) postorder(root); break;
		}
	} while (choice != 0);
	return 0;
}
