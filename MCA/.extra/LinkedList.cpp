#include <iostream>

using namespace std;

struct node {
  int data;
  struct node *next;
} node;

void print(struct node &head) {
  cout << "LL:";
  struct node current = head;
  while (current->next != NULL) {
    cout << current->data << "->";
    current.next = current.next->next;
  }
  cout << "NULL";
}

int main() {
  struct node *head, *n1, *n2, *n3;
  print(*head);
  head->data = 23;
  head->next = n1;
  print(*head);

  return 0;
}