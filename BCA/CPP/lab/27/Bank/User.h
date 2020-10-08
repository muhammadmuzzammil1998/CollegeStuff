#define MAXUSERS 1000
struct User {
   public:
    int CustID;
    std::string Name;
    AccountType Type;
    double Balance;
};
