#include <iostream>

using namespace std;

int main() {

   int num1, num2, num3;

   cout << "Escribe 3 numeros: ";
   cin >> num1 >> num2 >> num3;

   if ( num2 % num1 == 0 ) cout << num1 << "  Es multiplo de:  " << num2 << endl;
   if ( num2 % num3 == 0 ) cout << num3 << "  Es multiplo de:  " << num2 << endl;

   return 0;
}