#include <iostream>

using namespace std;

int main() {

               char num;

   cout << "Numero: ";
   cin >> num;

   cout << "Caracter ASCII imprimible es: " << static_cast< int >( num ) << endl;

                 return 0;
}