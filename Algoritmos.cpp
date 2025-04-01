#include "Algoritmos.h"
#include <math.h>

int Algoritmos::Factorial(int n) {
	// early return
	if (n < 0)
		return -1;

	// Caso base
	if (n == 0)		// factorial(0) = 1
		return 1;

	return n * Factorial(n - 1);
}

int Algoritmos::A1(int n){
	// Caso base
	if (n < 5)
		return 1;

	// Division
	int tiempoDivision = 3 * pow(n, 2);

	// Recursividad
	int tiempoRecursivo = 2 * A1(n - 1) + 3 * A1(n - 2);

	// Combinacion
	int tiempoCombinacion = 2 * n;

	// total
	return tiempoDivision + tiempoRecursivo + tiempoCombinacion;
}

int  Algoritmos::A2(int n){
	if (n < 5)
		return Factorial(n);

	// Division y combinacion
	int tiempoDivComb = pow(n, 2) * log(n);

	// Recursividad
	int tiempoRecursivo = 2 * A2(n / 2) + A2(n / 3);

	// Total
	return tiempoDivComb + tiempoRecursivo;
}
