#include <iostream>

using namespace std;

int main() {

                 int num;

   cout << "Escribe un numero de 4 digitos: ";
   cin >> num;

   cout << num % 10 << "  "<< num % 100 / 10 << "  " << num % 1000 / 100 << "  "<< num / 1000 << endl;

                     return 0;
}