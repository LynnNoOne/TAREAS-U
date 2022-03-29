#include <iostream>
#include "Date.h"

using namespace std;

int main() {

   Date fecha( 1, 5, 1998 );

   cout << "Fecha Inicial: ";
   fecha.displayfecha();

   fecha.setMes(10 );
   fecha.setDia(16);
   fecha.setAño(2000);

   cout << "Fecha Modificada: ";
   fecha.displayfecha();

   return 0;
}