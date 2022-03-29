#include <iostream>
using namespace std;

class Date {

public:

   Date( int m, int d, int y ) {
      setMes( m );
      setDia( d );
      setAño( y );
   }

   void setMes( int m ) {
      mes = m;
      if ( m < 1 ) mes = 1;
      if ( m > 12 ) mes = 1;
   }

   void setDia( int d ) {
      dia = d;
   }

   void setAño( int y ) {
      año = y;
   }

   int getMes() const {
      return mes;
   }

   int getDia() const {
      return dia;
   }

   int getAño() const {
      return año;
   }

   void displayfecha() const {
      cout << mes << '/' << dia << '/' << año << endl;
   }

private:
   int mes;
   int dia;
   int año;
};