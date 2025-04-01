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
const int TALLA_INICIAL = 1000;
// Talla final
const int TALLA_FINAL = 10000;
// Incremento entre iteraciones de la talla
const int TALLA_INCREMENTO = 1000;


// ------------------------------- Implementaciones ------------------------------- 



int main() {

	ofstream archivo("resultados$$$.csv");
	if (!archivo.is_open()) {
		cerr << "Error al abrir el archivo." << endl;
		return 1;
	}

	// Inicializa el generador de números aleatorios
	archivo << fixed << setprecision(6); // Fijar precisión decimal
	archivo << "Tamano del Vector;Coste A1; Coste A2" << endl;

	for (int n = TALLA_INICIAL; n <= TALLA_FINAL; n += TALLA_INCREMENTO) {
		

		//int p = Algoritmos.A1(n);
		archivo << n << endl ;//<< ";" << ";"<< endl;
	}

	archivo.close();
	cout << "Los resultados se han guardado en el archivo 'resultados.csv'." << endl;

	return 0;
}