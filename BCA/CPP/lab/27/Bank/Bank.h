#include <math.h>
#include <iostream>
#include <string>
#include "AccountType.h"
#include "User.h"

class Bank {
   private:
    User user[MAXUSERS];
    int usercount = 0;
    void printUser(User u) {
        std::cout << "Customer ID: " << u.CustID << std::endl
                  << "  Account Type:    " << (u.Type == 1 ? "Current" : "Savings") << std::endl
                  << "  Account Holder:  " << u.Name << std::endl
                  << "  Account Balance: " << u.Balance << std::endl;
    }
    void printLine(int n) {
        for (int j = 0; j < n; j++) std::cout << "-";
        std::cout << std::endl;
    }
    void printErr(std::string err) {
        std::cout << "-- ERR: " << err << std::endl;
    }
    bool hasUser(int cusid) {
        for (int i = 0; i < this->usercount; i++) {
            if (this->user[i].CustID == cusid)
                return true;
        }
        return false;
    }

   public:
    void AddUser(int cusid, std::string name, double initbal, AccountType type) {
        if (usercount == MAXUSERS) {
            this->printErr("User limit reached. Can't add more users.");
            return;
        }
        if (hasUser(cusid)) {
            this->printErr("Customer ID already exists.");
            return;
        }
        this->user[usercount].CustID = cusid;
        this->user[usercount].Name = name;
        this->user[usercount].Balance = initbal;
        this->user[usercount].Type = type;
        this->usercount++;
    }
    void PrintDetails() {
        for (int i = 0; i < this->usercount; i++) {
            std::cout << "Customer #" << i + 1 << std::endl;
            this->printLine(i > 9 ? 12 : 11);
            this->printUser(user[i]);
            std::cout << std::endl;
        }
    }
    void PrintDetails(int cusid) {
        if (!this->hasUser(cusid)) {
            this->printErr("Customer ID does not exists.");
            return;
        }
        for (int i = 0; i < this->usercount; i++) {
            if (this->user[i].CustID != cusid) continue;
            this->printUser(this->user[i]);
            break;
        }
    }
    void Deposit(int cusid, double amount) {
        if (!this->hasUser(cusid)) {
            this->printErr("Customer ID does not exists.");
            return;
        }
        for (int i = 0; i < this->usercount; i++) {
            if (this->user[i].CustID != cusid) continue;
            this->user[i].Balance += amount;
            break;
        }
    }
    void Withdraw(int cusid, double amount) {
        if (!this->hasUser(cusid)) {
            this->printErr("Customer ID does not exists.");
            return;
        }
        for (int i = 0; i < this->usercount; i++) {
            if (this->user[i].CustID != cusid) continue;
            this->user[i].Balance -= amount;
            break;
        }
    }
    double Interest(int cusid) {
        if (!this->hasUser(cusid)) {
            this->printErr("Customer ID does not exists.");
            return 0;
        }
        for (int i = 0; i < this->usercount; i++) {
            if (this->user[i].CustID != cusid) continue;
            return (this->user[i].Balance * pow((1 + 0.035 / 4), 4 * 0.25)) - this->user[i].Balance;
        }
    }
};
