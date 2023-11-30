/******************************************************************************
 *                   Algoritmos y Programaci�n II - 75.41                     *
 *                        C�tedra Ing. Patricia Calvo                         *
 *            Facultad de Ingenier�a - Universidad de Buenos Aires            *
 ******************************************************************************/ 

/* Punteros
 * Ejercicio Tipo Parcial N�1 
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

  Pint A, C, J, F;
  Pint* B;
  Pchar D, E;
  char G;
  int H;
  
  H = 64;
  G = 'C';
  A = new int;
  F = new int;
  (*A) = 70; 
  cout << H << G << (*A) << endl;
  B = &A;
  (*F) = H;
  cout << (**B) << (*A) << endl;
  D = (Pchar)F;
  E = (Pchar)(*B);
  C = (Pint)D;
  J = (Pint)E;
  cout << (*D) << (*E) << (**B) << endl;
  (*C) = (*C) - 62;
  (*J) = (*J) - (*J);
  
  if ((*F) == H) {
    cout << G << H << (*E) << endl;
  }
  
  while ((*C) != 0) {
    cout << (*A) << (*C) << endl;
    (*C) = (*C) - 1;
    (*E) = 'B';
  }
  
  // Deletes:
  delete A;
  delete F;
  
  return 0;
}

/*
  Resultado:
  
      64C70
      7070    
      @F70
      02
      661
  
*/
