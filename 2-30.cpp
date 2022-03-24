#include <iostream>

using namespace std;

int main() {

                   double altura, peso;

   cout << "Peso (kg): ";
   cin >> peso;
   cout << "Altura (m): ";
   cin >> altura;

   cout << "\n Indice de masa corporal es: "<< peso / ( altura * altura ) << endl;

   cout << "\nVALORES DE BMI" << "\nBajo peso: menos de 18.5" << "\nNormal: entre 18.5 y 24.9" << "\nSobrepeso: entre 25 y 29.9"
        << "\nObeso: 30 o más" << endl;

   return 0;
}




