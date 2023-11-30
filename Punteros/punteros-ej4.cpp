/******************************************************************************
 *                   Algoritmos y Programaci�n II - 75.41                     *
 *                        C�tedra Ing. Patricia Calvo                         *
 *            Facultad de Ingenier�a - Universidad de Buenos Aires            *
 ******************************************************************************/ 

/* Punteros
 * Ejercicio Tipo Parcial N�4 
 * Estado: Resuelto
 */

#include <stdlib.h>
#include <iostream>

using namespace std;


typedef int* Pint;
typedef char* Pchar;

/*
  Datos: 
    '@' es 64
    'A' es 65
    ...
*/

int main(){

  Pint A, C, F;
  Pint* B;
  Pchar D, E;
  char G;
  int H;

  H = 66;
  G = 'D';
  A = new int;
  F = new int;
  (*A) = 64;  
  B = &F;
  (**B) = (*A) - 63;
  cout << H << G << (*F)<< endl;
  
  (*F) = (*A) + H - 63;
  cout << (*F) << (*A) << (**B) << endl;
  
  D = (Pchar)F;
  E = (Pchar)A;
  C = (Pint)D;
  cout << (*D) << (*C) << (*E) << endl;
  
  (*C) = (*C) - 66;
  H++;
  if ((*F) == H) {
    cout << G << H << (*E) << endl;
  }

  while ((*C) >= 0) {
    cout << (*E) << (*C) << endl;
    (*F) = (*F) - 1;
    (*C) = (*C) - 1;
  }

  // Deletes:
  delete A;
  delete F;

  return 0;
}

/*
  Resultado:
    66 D 1
    67 64 67
    C 67 @
    @ 1  
*/

