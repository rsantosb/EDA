#include "Error.h"

// Un polinomio en una variable es una expresion matematica de la
// forma P(x) = anxn + an−1x n−1 + ... + a1x 1 + a0x 0. 
// Las constantes (a0,...,an) se llaman los coeficientes del polinomio 
// y los valores  (0..n)                los exponentes (numero naturales). 

// Cada una de las sumas aixi se denomina un monomio. 

// La operacion mas basica que podemos realizar con un polinomio es
// calcular su valor para cierto valor de la variable. 

// En este problema se pide: 
// calcular el valor de un polinomio para diversos valores de la variable.

class Polinomio
{
  private:
	// El grado del polinomio es el del monomio de mayor grado.
    int _grado;
	int _coeficientes[];

  public:
    // Constructor del polinomio
    polinomio();
	// Constructor con argumentos
	polinomio(int gr, int[] &v);
	// Modificar el polinomio
    void setPolinomio(int gr, int[] v);
	// Escribir un polinomio
    void write(ostream &sOut);
	// Obtener el grado del polinomio
    int getGr() const;
	// Obtener los coeficientes
    void getCoef(int &v[]) const;
	// Operador comparacion (igualdad) de un polinomio
	bool operator==(const Polinomio &polinomio) const;
	// Operador comparacion (menor que) de un polinomio
    bool operator<(const Polinomio &polinomio) const;
	// Operador suma de un polinomio
	bool operator+(const Polinomio &polinomio) const;
	// Operador para insertar un polinomio
    friend istream &operator>>(istream &sIn, Polinomio &polinomio) throw (Error);
	// Operador para mostrar un polinomio
    friend ostream &operator<<(ostream &sOut, Polinomio &polinomio);
};