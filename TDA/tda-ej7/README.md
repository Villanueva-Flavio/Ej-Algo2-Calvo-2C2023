Algoritmos y Programaci�n 2 - FI UBA

# TDA: Ascensor

## Enunciado

Dise�ar la especificaci�n e implementar el TDA `Ascensor`. 

![Ascensor][ascensor]

El `Ascensor` debe proveer operaciones para:

1. Inicializarlo recibiendo como par�metro la cantidad de pisos por los que se 
mueve (sin considerar la planta baja).

2. Devolver el n�mero de piso en el que se encuentra, considerando 0 como la planta baja.

3. Llamar desde un piso: debe moverlo y devolver la cantidad de pisos que el ascensor se movi� 
para llegar al piso indicado. 

4. Devolver la cantidad total de pisos que el ascensor subi� y baj�.

5. Devolver la cantidad de veces que fue a un piso.

## Soluci�n

### Implementaciones incrementales

1. Constructor de `Ascensor` y primeros atributos identificados:
    * declaraci�n: [`Ascensor.h`]
    * implementaci�n: [`Ascensor.cpp`]
    * uso: [`main.cpp`]

2. M�todo `unsigned int obtenerPisoActual()`:
    * declaraci�n: [`Ascensor.h`]
    * implementaci�n: [`Ascensor.cpp`]
    * uso: [`main.cpp`]

3. M�todo `unsigned int llamarDesdePiso(unsigned int piso)`:
    * declaraci�n: [`Ascensor.h`]
    * implementaci�n: [`Ascensor.cpp`]
    * uso: [`main.cpp`]

4. M�todo `unsigned int totalizarPisosDesplazados()`:
    * declaraci�n: [`Ascensor.h`]
    * implementaci�n: [`Ascensor.cpp`]
    * uso: [`main.cpp`]

4. M�todo `unsigned int totalizarLlamadasDesdePiso(unsigned int piso)`:
    * declaraci�n: [`Ascensor.h`]
    * implementaci�n: [`Ascensor.cpp`]
    * uso: [`main.cpp`]


### Versi�n final

`Ascensor.h`

`Ascensor.cpp`

`main.cpp`


[ascensor]: https://upload.wikimedia.org/wikipedia/commons/thumb/6/6d/Feature_elevators.svg/200px-Feature_elevators.svg.png "Ascensor"