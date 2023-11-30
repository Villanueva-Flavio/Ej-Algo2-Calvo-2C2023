/******************************************************************************
 *                   Algoritmos y Programación II - 75.41                     *
 *                        Cátedra Ing. Patricia Calvo                         *
 *            Facultad de Ingeniería - Universidad de Buenos Aires            *
 ******************************************************************************/ 

/* Punteros
 * Ejercicio Tipo Parcial Nº6 
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
  G = 'E';
  A = new int;
  F = new int;
  (*A) = 64;
  B = &F;  
  (*F) = (*A);
  cout << (**B) << (*A) << endl;
  
  D = (Pchar)(*B);
  E = (Pchar)A;
  C = (Pint)D;
  (*C) = H;
  cout << (*D) << (*C) << (**B) << endl;
  
  (*F) = (*C) + 3;
  if ((*D) == G) {
    cout << (*E) << (*C) << endl;
  }

  (*E) = 'A';
  (*F) = (*C) - (*A);
  if (F == (*B))
    cout << (*A) << (*C) << endl;

  delete A;
  delete F;

  return 0;
}

/*
  Resultado:
            64 64
            B 66 66
            @ 69
            65 4
*/

