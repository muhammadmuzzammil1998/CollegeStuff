const m = 10;  // const variable (value of m is not modified in program)
class ITEMS {
 private:
  int itemCode[m];
  float itemPrice[m];
  int count;

 public:
  void cnt(void) { count = 0; }
  void getitem();
  void displaySum();
  void remove();
  void displayItem();
};
void ITEMS::getitem() {
  cout << "Enter item code :";
  cin >> itemCode[count];
  cout << "Enter item cost :";
  cin >> itemPrice[count];
  count++;
}
void ITEMS ::displaySum() {
  float sum = 0;
  for (int i = 0; i < count; i++) sum = sum + itemPrice[i];
  cout << "\n Total value : " << sum << "\n";
}
void ITEMS ::remove(void) {
  int a;
  cout << "Enter item code which we want to remove: ";
  cin >> a;
  for (int i = 0; i < count; i++)
    if (itemCode[i] == a) itemPrice[i] = 0;
}
void ITEMS ::displayItem() {
  cout << "\n Code Price \n";
  for (int i = 0; i < count; i++) {
    cout << "\n" << itemCode[i];
    cout << " " << itemPrice[i];
  }
  cout << "\n";
}
int main() {
  ITEMS order;
  order.cnt();
  int x;
  do {
    cout << "Enter appropriate number\n";
    cout << "\n 1 : Add an item";
    cout << "\n 2 : Display total value";
    cout << "\n 3 : Delete an item";
    cout << "\n 4 : Display all items";
    cout << "\n 5 : Quit";
    cout << "\n \n what is your option ?";
    cin >> x;
    switch (x) {
      case 1:
        order.getitem();
        break;
      case 2:
        order.displaySum();
        break;
      case 3:
        order.remove();
        break;
      case 4:
        order.displayItem();
        break;
      case 5:
        break;
      default:
        cout << "Error in input try again \n";
    }
  } while (x != 5);
  return 0;
}