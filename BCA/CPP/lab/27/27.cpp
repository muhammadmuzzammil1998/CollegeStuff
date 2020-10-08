#include "Bank/Bank.h"
int main() {
    Bank bank;
    int ch = 0;
    std::cout << "Welcome to the Bank!" << std::endl
              << " Select an option:" << std::endl
              << "  1. Add a new account" << std::endl
              << "  2. Diposit amount" << std::endl
              << "  3. Withdraw amount" << std::endl
              << "  4. Print details of an account" << std::endl
              << "  5. Print details of all accounts" << std::endl
              << "  6. Calculate quarterly interest" << std::endl
              << "  0. Exit" << std::endl;
    do {
        std::cout << "Your choice: ";
        std::cin >> ch;
        switch (ch) {
            case 1: {
                int id;
                char name[20];
                double initbal;
                AccountType type;
                std::cout << "Enter details:" << std::endl;
                std::cout << " Customer ID:\t\t";
                std::cin >> id;
                std::cout << " Customer Name:\t\t";
                std::cin >> name;
                std::cout << " Initial balance:\t";
                std::cin >> initbal;
                int tch;
                std::cout << " Select account type:" << std::endl
                          << "  1. Savings Account      2. Current Account" << std::endl
                          << "    Select: ";
                std::cin >> tch;
                if (tch == 1)
                    type = SavingsAccount;
                else
                    type = CurrentAccount;
                bank.AddUser(id, name, initbal, type);
                break;
            }
            case 2: {
                double amt;
                int id;
                std::cout << "Enter amount: ";
                std::cin >> amt;
                std::cout << "Enter customer id: ";
                std::cin >> id;
                bank.Deposit(id, amt);
                break;
            }
            case 3: {
                double amt;
                int id;
                std::cout << "Enter amount: ";
                std::cin >> amt;
                std::cout << "Enter customer id: ";
                std::cin >> id;
                bank.Withdraw(id, amt);
                break;
            }
            case 4: {
                int id;
                std::cout << "Enter customer id: ";
                std::cin >> id;
                bank.PrintDetails(id);
                break;
            }
            case 5: {
                bank.PrintDetails();
                break;
            }
            case 6: {
                int id;
                std::cout << "Enter customer id: ";
                std::cin >> id;
                std::cout << "Quarterly interest based upon current details would be: "
                          << bank.Interest(id) << std::endl;
            }
            case 0:
                break;
            default:
                std::cout << "Invalid selection." << std::endl;
        }
    } while (ch != 0);
    return 0;
}
