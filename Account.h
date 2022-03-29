#include <string>
using namespace std;

class Account {

public:

   Account( string accountName, int initialBalance )
      : name{ accountName } {

      if ( initialBalance > 0 )
         balance = initialBalance;
   }

   void deposit( int depositAmount ) {
      if ( depositAmount > 0 )
         balance = balance + depositAmount;
   }
//codigo agregado RETIRO withdraw
   void withdraw( int withdrawAmount ) {//cantidad amount
      if ( withdrawAmount > balance )//saldo balance
         cout << "El monto del retiro excede el saldo de la cuenta.\n";
      if ( withdrawAmount <= balance )
         balance = balance - withdrawAmount;
   }
//
   int getBalance() const {
      return balance;
   }

   void setName( string accountName ) {
      name = accountName;
   }

   string getName() const {
      return name;
   }

private:

   string name;
   int balance{ 0 };
};