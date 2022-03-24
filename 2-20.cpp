#include <iostream>
using namespace std;

int main (){

          const double pi = 3.14159;
           int radi0;

 cout << "Ingrese el radio: ";
 cin >> radi0;

 cout << "Diametro: " << 2 * radi0 << endl;
 cout << "circunferencia: " << pi * (2 * radi0) << endl;
 cout << "area: " << pi * (radi0 * radi0) << endl;

            return 0;
}

