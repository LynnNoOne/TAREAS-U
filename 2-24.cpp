#include <iostream>

using namespace std;

int main() {

   int num1, num2;

   cout << "Escriba 2 numeros: ";
   cin >> num1 >> num2;
   
   if ( num1 % 2==0 ) cout << num1 << " Es par.\n";
    else{cout << num1 << " Es impar.\n";}
       
   if ( num2 % 2==0 ) cout << num2 << " Es par.\n";
    else{cout << num2 << " Es impar.\n";}

    if ( ( num1 + num2 ) % 2==0) cout << "La suma sale (" << num1 + num2 << ") y es par ." << endl;
     else{ cout << "La suma sale (" << num1 + num2 << ") y es impar ." << endl;    }

   return 0;
}