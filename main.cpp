//-- Dato de Entrada: largo, ancho (double)
//-- Dato de Salida : area y el perimetro
//-----------------------------------------

#include "CRectangulo.h"

int main()
{
  CRectangulo    R1;  //--- se invoca al constructor por defecto
  tnumero l,a;

  cout << "Largo : "; cin>>l;
  cout << "Ancho : "; cin >> a;
  R1.setLargo(l);
  R1.setAncho(a);
  cout << "El area es : " << R1.area() << "\n";
  cout << "El perimetro : " << R1.perimetro() << "\n";

  //--- creamos otro objeto
  cout << "\n Para el segundo rectangulo :\n";
  cout << "Largo : "; cin>>l;
  cout << "Ancho : "; cin >> a;

  CRectangulo R2(l,a);  //-- usamos el constructor sobrecargado
  cout << "El area es :  " << R2.area() << "\n";
  cout << "El perimetro es : " << R2.perimetro() << "\n";
  return 0;
}
