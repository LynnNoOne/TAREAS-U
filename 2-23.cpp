#include <iostream>

using namespace std;

int main() {

                int num1, num2, num3, num4, num5;
   
   cout << "Escriba 5 numeros: ";
   cin >> num1 >> num2 >> num3 >> num4 >> num5;

                       int min{ num1 };

   if ( num2 < min ) min = num2;
   if ( num3 < min ) min = num3;
   if ( num4 < min ) min = num4;
   if ( num5 < min ) min = num5;

                      int max{ num1 };

   if ( num2 > max ) max = num2;
   if ( num3 > max ) max = num3;
   if ( num4 > max ) max = num4;
   if ( num5 > max ) max = num5;

   cout << "El mayor es:  " << max<< "\n El menor es: " << min << endl;

                 return 0;
}