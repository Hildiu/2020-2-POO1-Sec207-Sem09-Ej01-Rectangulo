//
// Created by MARIA HILDA BERMEJO RIOS on 10/30/20.
//

#include "CRectangulo.h"

tnumero CRectangulo::area()
{
  return largo*ancho;
}

tnumero CRectangulo::perimetro()
{
  return 2*largo + 2*ancho;
}