/******************************************************************************
 *                   Algoritmos y Programación II - 75.41                     *
 *                        Cátedra Ing. Patricia Calvo                         *
 *            Facultad de Ingeniería - Universidad de Buenos Aires            *
 ******************************************************************************/ 

/* Punteros
 * Ejercicio Tipo Parcial Nº5 
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

  H = 70;
  G = 'C';
  F = new int;
  (*F) = H;
  C = new int;
  A = C;
  (*A) = 67;
  H++;
  
  cout << (*C) << (*A) << (*F) << endl;
    
  B = &A;
  D = (Pchar)F;
  E = (Pchar)(*B);
  (**B) = (*A) - 63;

  if ( (*E) != G ) {
    cout << (*A) << (*D) << (*C) << endl;
  }
  
  (*A) = (*A) - (*C) + 66;
  cout << (*E) << (*F) << G << endl;
  
  while ((*C) > 0) {

    (*E) = 'E';    
    (*A) = (*F) - (*C);
    
    cout << (**B) << endl;
    
    (*C)--;
  }

  delete A;
  delete F;

  return 0;
}

/*
  Resultado:
            676770
            4F4
            B70C
            1
*/

