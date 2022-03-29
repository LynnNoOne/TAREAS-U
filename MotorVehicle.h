#include <iostream>
#include <string>
using namespace std;

class MotorVehicle {

public:

   MotorVehicle( string m,string b,int y) {
      setMarca( m );
      setTipoCombus(b);
      setAñoFabrica(y);
   }

   void setMarca( string m ) {
      marca = m;
   }

   void setTipoCombus( string b ) {
      tipo = b;
   }

   void setAñoFabrica( int y ) {
      fabric = y;
   }

   void setColor( string c ) {
      color = c;
   }

   void setCapacidadMotor( int cm ) {
      capacidad = cm;
   }

   string getMarca() const {
      return marca;
   }

   string getTipoCombus() const {
      return tipo;
   }

   int getAñoFabrica() const {
      return fabric;
   }

   string getColor() const {
      return color;
   }

   int getCapacidadMotor() const {
      return capacidad;
   }

   void displayDetallesCarro() const {
      cout << "Detalles del Carro"
         << "\nMarca:                " << marca
         << "\nTipo de Combustible:           " << tipo
         << "\nAño de Fabricacion: " << fabric
         << "\nColor:               " << color
         << "\nCapacidad del Motor:     " << capacidad
         << endl;
   }

private:
   string color;
   string marca;
   string tipo;
   int fabric;
   int capacidad;
};
