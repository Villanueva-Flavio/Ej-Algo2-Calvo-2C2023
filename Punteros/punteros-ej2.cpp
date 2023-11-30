/******************************************************************************
 *                   Algoritmos y Programaci�n II - 75.41                     *
 *                        C�tedra Ing. Patricia Calvo                         *
 *            Facultad de Ingenier�a - Universidad de Buenos Aires            *
 ******************************************************************************/ 

/* Punteros
 * Ejercicio Tipo Parcial N�2  - Poder Legistativo (publicado en internet)
 * Estado: Resuelto
 */

#include <stdlib.h>
#include <iostream>

using namespace std;


typedef int* Pint;
typedef char* Pchar;

/*
  Datos que pueden ser utiles: El caracter '�' es igual al entero 160.
                               El caracter '�' es igual al entero 130.
                               El caracter '�' es igual al entero 164.
                               El caracter '�' es igual al entero 165.
                               El caracter '@' es igual al entero 64.
*/

int main(){

  Pint A, C, F;
  Pint* B;
  Pchar D, E;
  char G;
  int H;

  H = 164;
  G = '�';
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

  // Deletes:
  delete A;
  delete F;

  return 0;
}

/*
  Resultado:
  
      64�160
      165165
      �165165
      �2
      160  
*/
