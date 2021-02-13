#include <iostream>
#include <string>

using namespace std;

class BankAccount {
  string name, type;
  int account;
  float balance;

 public:
  void create(int number, string name, float balance, string type);
  void deposit(float amount);
  void withdraw(float amount);
  void print();
};

void BankAccount::create(int number, string customerName, float deposit,
                         string accountType) {
  name = customerName;
  account = number;
  balance = deposit;
  type = accountType;
}

void BankAccount::deposit(float amount) { balance += amount; }

void BankAccount::withdraw(float amount) {
  if (balance >= amount) {
    balance -= amount;
  } else {
    cout << "ERROR: For account holder " << name << endl;
    cout << "Can not withdraw: Insufficient funds" << endl;
  }
}

void BankAccount::print() {
  cout << "  Account number:\t" << account << endl;
  cout << "  Account holder:\t" << name << endl;
  cout << "  Account type:\t\t" << type << endl;
  cout << "  Balance:\t\t" << balance << endl;
  cout << endl;
}

BankAccount A, B, C;
void print();

int main() {
  A.create(56874, "Andrea", 10000.00, "Savings");
  B.create(56875, "Khalil", 44528.58, "Current");
  C.create(56876, "Farhat", 12500.00, "Savings");

  cout << "Created accounts:" << endl;
  print();

  cout << "Deposits were made:" << endl;
  A.deposit(2000);
  B.deposit(10100);
  C.deposit(1000);

  print();

  cout << "Withdrawls were made:" << endl;
  A.withdraw(2303.42);
  B.withdraw(20000);
  C.withdraw(15000);

  print();
}

void print() {
  A.print();
  B.print();
  C.print();
  cout << endl;
}