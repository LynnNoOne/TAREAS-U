#include <iostream>
using namespace std;

int main() {
                             double KmConducidos = 0, costPorGalon = 0, KmPorGalon = 0,parkingCost = 0, PeajeDay = 0, costDayConduccion = 0;

    cout << "Ingrese el total de Km conducidos por dia: ";
    cin >> KmConducidos;

    cout << "Ingrese el costo por litro de gasolina: ";
    cin >> costPorGalon;

    cout << "Ingrese el promedio de Km por litro: ";
    cin >> KmPorGalon;

    cout << "Ingrese la cuota de estacionamiento por dia: ";
    cin >> parkingCost;

    cout << "Ingrese el peaje por dia: ";
    cin >> PeajeDay;

    costDayConduccion = ((KmConducidos / KmPorGalon) * costPorGalon) + parkingCost + PeajeDay;

    cout << "\nCosto Diario de Conduccion: " << costDayConduccion << endl;

    return 0;
}