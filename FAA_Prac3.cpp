// FAA_Prac3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Reutilizacion codigo prac 1

#include <iostream>   // Necesario para cout y cerr
#include <vector>     // Necesario para vector
#include <cstdlib>    // Necesario para rand y srand
#include <fstream>    // Necesario para ofstream (manejo de archivos)
#include <iomanip>    // Necesario para fixed y setprecision
#include <algorithm>  // Necesario para min, max
#include <chrono>     // Necesario para medir tiempos con chrono
#include <random>     // Necesario para mt19937 y shuffle
#include <limits>     // Necesario para numeric_limits
#include "Algoritmos.h"

using namespace std;

// ------------------------------- Constantes para varias las tallas -------------------------------

// Numero de busquedas
const int N_BUSQUEDAS = 10;
// Talla inicial
const int TALLA_INICIAL = 10;
// Talla final
const int TALLA_FINAL = 40;
// Incremento entre iteraciones de la talla
const int TALLA_INCREMENTO = 1;


// ------------------------------- Implementaciones ------------------------------- 



int main() {

	// Abrimos fichero logico de escritura asociado al fichero csv
	ofstream archivo("resultados$$$.csv");

	// Controlamos error de apertura
	if (!archivo.is_open()) {
		cerr << "Error al abrir el archivo." << endl;
		return 1;
	}

	// En este caso no trabajamos con decimales 
	//archivo << fixed << setprecision(6); // Fijar precisión decimal
	
	
	// Escribimos primera linea de archivo / cabecera
	archivo << "Tamano del Vector;Coste A1; Coste A2" << endl;

	// Bucle que empieza en una talla inicial y va incrementando en funcion a TALLA_INCREMENTO hasta llegar a la talla final
	for (int n = TALLA_INICIAL; n <= TALLA_FINAL; n += TALLA_INCREMENTO) {

		// Escribimos en archivo el resultado de los dos algoritmos con la talla de la iteracion actual
		archivo << n << ";" << Algoritmos::A1(n) << ";" << Algoritmos::A2(n) << ";" << endl;
	}

	// Cerramos archivo
	archivo.close();

	// Output por pantalla indicando que hemos finalizado
	cout << "Los resultados se han guardado en el archivo 'resultados.csv'." << endl;

	return 0;
}