#include <iostream>
#include "MotorVehicle.h"

using namespace std;

int main() {

   MotorVehicle motorVehicle( "Cualquiera" );

   cout << "Estandar:  ";

   motorVehicle.displayDetallesCarro();
   motorVehicle.setMarca( "Jeep Wrangler" );
   motorVehicle.setTipoCombus( "Hibrido" );
   motorVehicle.setAñoFabrica( 2022 );
   motorVehicle.setColor( "Negro" );
   motorVehicle.setCapacidadMotor( 2143 );

   cout << "\nResultado:  ";
   motorVehicle.displayDetallesCarro();

   return 0;
}