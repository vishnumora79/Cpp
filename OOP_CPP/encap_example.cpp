class BankAccount {
    private:
      double balance;

    public:
      BankAccount(double bal) {
        balance = bal;
      }  

      double getBalance() {
        return balance;
      }

      void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
        }
      }  
};


#include <iostream>
using namespace std;
int main() {
    BankAccount* bank = new BankAccount(4500);
    cout << bank -> getBalance() << "\n";
    bank -> deposit(4500);
    cout << bank -> getBalance() << "\n";
}