#include "Hora.h"
class Pelicula
{
  private:
    //Hora de inicio de la pelicula
    Hora _horaInicio;
	//Tiempo que dura la pelicula
    Hora _duracion;
	//Nombre de la pelicula
    string _nombre;

  public:
	//Constructor
    Pelicula();
	//Modificador de datos
    void setDatos(Hora horaInicio, Hora duracion, string nombre);
	//Método que muestra en pantalla la información de la pelicula
	void write(ostream &sOut);
	//Devuelve la hora de inicio de la pelicula¿INICIO O DURACION?
    Hora getHora() const;
	//Devuelve la duración de la pelicula
    Hora getDuracion() const;
	//Devuelve el nombre de la pelicula
    string getNombre() const;
	//???
    bool operator<(const Pelicula &p) const;
    //Operador para introducir pelicula
	friend istream &operator>>(istream &sIn, Pelicula &p);
    //Operador para mostrar la pelicula
	friend ostream &operator<<(ostream &sOut, Pelicula &p);
};
