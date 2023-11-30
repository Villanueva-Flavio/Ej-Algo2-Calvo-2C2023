Algoritmos y Programaci�n 2 - FI UBA

# TDA: Ahorcado

## Enunciado

Implementar el TDA `Ahorcado` que modele el conocido juego de l�piz y papel, 
en el que el objetivo es adivinar una palabra o frase.

![Ahorcado][ahorcado]

El `Ahorcado` debe proveer operaciones para:

1. Inicializar el juego a partir de una palabra y la cantidad de chances disponibles
   inicialmente para arriesgar letras.
   
2. Conocer la cantidad de chances restantes para arriesgar una letra que no
   exista en la palabra.
   
3. Conocer la palabra, enmascarada por `_` (gui�n bajo) en aquellas letras
   desconocidas.
   
4. Arriesgar una letra.
   
## Soluci�n

### Implementaciones incrementales

1. Constructor de `Ahorcado` y primeros atributos identificados:
    * declaraci�n: [`Ahorcado.h`]
    * implementaci�n: [`Ahorcado.cpp`]
    * uso: [`main.cpp`]
    
2. M�todo `unsigned int obtenerChancesRestantes()`:
    * declaraci�n: [`Ahorcado.h`]
    * implementaci�n: [`Ahorcado.cpp`]
    * uso: [`main.cpp`]

3. M�todo `string obtenerPalabra()`, nuevo atributo e inicializaci�n ampliada:
    * declaraci�n: [`Ahorcado.h`]
    * implementaci�n: [`Ahorcado.cpp`]
    * uso: [`main.cpp`]

4. M�todo `bool arriesgar(char letra)`:
    * declaraci�n: [`Ahorcado.h`]
    * implementaci�n: [`Ahorcado.cpp`]
    * uso: [`main.cpp`]

### Versi�n final

`main.cpp`

`Ahorcado.h`

`Ahorcado.cpp`

[ahorcado]: http://upload.wikimedia.org/wikipedia/commons/5/5f/Ahoracado_%28juego%29_-_2.gif "Ahorcado"