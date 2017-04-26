#include "Error.h"
class Hora
{
  private:
	// Entero que representa la hora
    int _horas;
	// Entero que representa los minutos
    int _minutos;
	// Entero que representa los segundos
    int _segundos;

  public:
	// Constructor Hora
    Hora();
	// Modificador de Hora
    void setHora(int h, int m, int s);
    // Muestra por pantalla una hora
	void write(ostream &sOut);
	// Devuelve un entero que indica la hora
    int getHH() const;
	// Devuelve un entero que indica los minutos
    int getMM() const;
	// Devuelve un entero que indica los segundos
    int getSS() const;
	// Operador para comparar si una hora es menor
    bool operator<(const Hora &hora) const;
    // Operador para insertar una hora
	friend istream &operator>>(istream &sIn, Hora &hora) throw (Error);
    // Operador para mostrar una hora
	friend ostream &operator<<(ostream &sOut, Hora &hora);
};