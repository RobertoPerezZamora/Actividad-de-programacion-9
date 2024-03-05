/*************************************************************

NOMBRE: Roberto perez Zamora
FECHA: 05/03/24
PROGRAMA: Actividad de programacion - 9.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Tomar la actividad de programación 8, y anexar lo siguiente:

Biblioteca de funciones
Mejorar y optimizar código propia
Además de las tareas ya especificadas (UNIÓN, INTERSECCIÓN, DIFERENCIA Y COMPLEMENTO).
Los arreglos no deben introducir símbolos, solo caracteres
No debe haber caracteres repetidos en el mismo conjunto

***************************/

#include <iostream>
#include <vector>
#include "mylib.cpp" // Archivo que contiene las definiciones de las funciones

using namespace std;

int main() {
    vector<char> conjunto1, conjunto2;
    int opcion;

    do {
        // Menú de opciones
        cout << "==============================" << endl;

        cout << "Operaciones con conjuntos:" << endl;
        cout << "1. Insertar elementos en conjunto 1" << endl;
        cout << "2. Insertar elementos en conjunto 2" << endl;
        cout << "3. Mostrar conjuntos" << endl;
        cout << "4. Realizar la union de los conjuntos" << endl;
        cout << "5. Realizar la interseccion de los conjuntos" << endl;
        cout << "6. Realizar la diferencia entre los conjuntos" << endl;
        cout << "7. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Switch para seleccionar la opción elegida por el usuario
        switch (opcion)
        {
            
            // caso 1 para insertar elementos en el conjunto 1
            case 1:
            {
                cout << "==============================" << endl;

                char elemento;
                cout << "Inserte un elemento en conjunto 1: ";
                cin >> elemento;
                conjunto1.push_back(elemento);
                break;
            }// fin caso 1

            //====================================================================

            // caso 2 para insertar elementos en el conjunto 2
            case 2:
            {
                cout << "==============================" << endl;

                char elemento;
                cout << "Inserte un elemento en conjunto 2: ";
                cin >> elemento;
                conjunto2.push_back(elemento);
                break;
            }// fin caso 2

            //====================================================================

            // caso 3 para mostrar los conjuntos
            case 3:
            {
                cout << "==============================" << endl;

                cout << "Conjunto 1:" << endl;
                imprimirConjunto(conjunto1);
                cout << "Conjunto 2:" << endl;
                imprimirConjunto(conjunto2);
                break;
            }// fin caso 3

            //====================================================================

            // caso 4 para realizar la union de los conjuntos
            case 4:
            {
                cout << "==============================" << endl;

                vector<char> union_resultado = unionConjuntos(conjunto1, conjunto2);
                cout << "Union de los conjuntos:" << endl;
                imprimirConjunto(union_resultado);
                break;
            }// fin caso 4

            //====================================================================

            // caso 5 para realizar la interseccion de los conjuntos
            case 5:
            {
                cout << "==============================" << endl;

                vector<char> interseccion_resultado = interseccionConjuntos(conjunto1, conjunto2);
                cout << "Interseccion de los conjuntos:" << endl;
                imprimirConjunto(interseccion_resultado);
                break;
            }// fin caso 5

            //====================================================================

            // caso 6 para realizar la diferencia entre los conjuntos
            case 6:
            {
                cout << "==============================" << endl;

                vector<char> diferencia_resultado = diferenciaConjuntos(conjunto1, conjunto2);
                cout << "Diferencia de los conjuntos (Conjunto 1 - Conjunto 2):" << endl;
                imprimirConjunto(diferencia_resultado);
                break;
            }// fin caso 6

            //====================================================================

            // caso 7 para salir del programa
            case 7:
                cout << "Saliendo del programa..." << endl;
                break;
            // fin caso 7

            //====================================================================

            // caso default para mostrar un mensaje de error si el usuario selecciona una opcion no valida
            default:
                cout << "==============================" << endl;
                cout << "Opcion no valida. Por favor, seleccione una opcion valida." << endl;
        }


      // Mientras el usuario no seleccione la opcion 7, el programa seguira ejecutandose
    } while (opcion != 7);

    return 0;
}