/******************************************************************************
 *                   Algoritmos y Programación II - 75.41                     *
 *                        Cátedra Ing. Patricia Calvo                         *
 *            Facultad de Ingeniería - Universidad de Buenos Aires            *
 ******************************************************************************/ 

/* Punteros
 * Ejercicio Tipo Parcial Nº2  - Poder Legistativo (publicado en internet)
 */

#include <stdlib.h>
#include <iostream>

using namespace std;


typedef int* Pint;
typedef char* Pchar;

/*
  Datos que pueden ser utiles: El caracter 'á' es igual al entero 160.
                               El caracter 'é' es igual al entero 130.
                               El caracter 'ñ' es igual al entero 164.
                               El caracter 'Ñ' es igual al entero 165.
                               El caracter '@' es igual al entero 64.
*/

int main(){

  Pint A, C, F;
  Pint* B;
  Pchar D, E;
  char G;
  int H;

  H = 164;
  G = 'Ñ';
  A = new int;
  F = new int;
  (*A) = 160;
  cout << H << G << (*A) << endl;
  B = &A;
  (*F) = (*A) + H -159;
  (**B) = (*F);
  cout << (**B) << (*A) << endl;
  D = (Pchar)F;
  E = (Pchar)A;
  C = (Pint)D;
  cout << (*D) << (*C) << (**B) << endl;
  (*C) = (*C) - 163;

  if ((*D) == G) {
    cout << G << H << (*E) << endl;
  }

  while ((*C) != 0) {
    cout << (*E) << (*C) << endl;
    (*C) = (*C) - 1;
    (*F) = (*F) - 1;
  }

  (*C) = (*C) + 160;
  cout << (*F) << endl;

  delete A;
  delete F;

  return 0;
}

/*
  Resultado:
  
      64Ñ160
      165165
      Ñ165165
      Ñ2
      160  
*/
