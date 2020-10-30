//
// Created by MARIA HILDA BERMEJO RIOS on 10/30/20.
//

#ifndef EJ_01RECTANGULO_CRECTANGULO_H
#define EJ_01RECTANGULO_CRECTANGULO_H

#include <iostream>
using namespace  std;

using tnumero = double;

class CRectangulo
{
  private:
     tnumero largo;
     tnumero ancho;
public:
    CRectangulo() { };  //-- constructor por defecto
    CRectangulo(tnumero _largo, tnumero _ancho):largo(_largo), ancho(_ancho){ };
    virtual ~CRectangulo() { cout << "\nDestruyendo el objeto....";   };
    tnumero area();
    tnumero perimetro();
    //--- metodos de acceso
    void setLargo(tnumero _largo) { largo = _largo; }
    tnumero getLargo() { return largo; }
    void setAncho(tnumero _ancho){ ancho = _ancho;}
    tnumero getAncho(){ return ancho;}
};


#endif //EJ_01RECTANGULO_CRECTANGULO_H
