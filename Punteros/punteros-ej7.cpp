/******************************************************************************
 *                   Algoritmos y Programaci�n II - 75.41                     *
 *                        C�tedra Ing. Patricia Calvo                         *
 *            Facultad de Ingenier�a - Universidad de Buenos Aires            *
 ******************************************************************************/ 

/* Punteros
 * Ejercicio Tipo Parcial N�7
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

  H = 67;
  G = 'A';
  A = new int;
  (*A) = 64;
  B = &C;
  F = A;
  C = &H;
  cout << (**B) << (*A) << endl;
  
  D = (Pchar)(*B);
  E = (Pchar)A;
  cout << (*D) << (*C) << (*E) << endl;
  
  (*D) = G;
  if ((*C) == 67) {
    cout << (*E) << (*C) << endl;
  }

  (*A) = 66;
  while ((*A) > 0) {
    cout << (*A) << (*E) << endl;
    (*F)= (*F) - H;
    (*A) = (*A) - 1;
  }

  // Deletes:
  delete A;

  return 0;
}

/*
  Resultado:
    67 64
    C 67 @
    66 B
*/


