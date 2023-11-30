/******************************************************************************
 *                   Algoritmos y Programaci�n II - 75.41                     *
 *                        C�tedra Ing. Patricia Calvo                         *
 *            Facultad de Ingenier�a - Universidad de Buenos Aires            *
 ******************************************************************************/ 

/* Punteros
 * Ejercicio Tipo Parcial N�8 
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

  Pint A, C;
  Pint* B;
  Pint* F;
  Pchar D, E;
  char G;
  int H;

  H = 70;
  G = 'A';
  A = new int;
  (*A) = 65;
  F = new Pint;  
  B = &A;  
  (*F) = A;
  cout << (**B) << (**F) << endl;
  
  D = (Pchar)(*B);
  E = (Pchar)&H;
  C = (Pint)D;
  (*C) = H;
  
  if ((*A) == H ) {
    cout << (**B) << (*E) << (*C) << endl;
  }
  
  (*D) = G;
  (*A) = (**F) - 1;
  (*E) = (char) (**F);
  cout << (*C) << H;

  // Deletes
  delete A;
  delete F;

  return 0;
}

/**
 * Resultados
 * 65 65
 * 70 F 70
 * 64 64
*/

