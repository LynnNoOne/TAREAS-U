#include <iostream>
using namespace std;

int main()
{
    int sumCuadrados = 0;
    int CuadradoSum = 0;
    
    for (int num = 1; num <= 100; num++)
    {
        sumCuadrados += (num * num); // el cuadrado y suma de los 10 primeros
        CuadradoSum += num; //suma  los 10 primero
    }
    CuadradoSum *= CuadradoSum; // cuadrado de la suma

    cout << (CuadradoSum - sumCuadrados);
}