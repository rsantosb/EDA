#include <iostream>
#include "pelicula.h"
using namespace std;

//Constructor sin argumentos
Pelicula::Pelicula()
{
    _horaInicio.setHora(0,0,0);
    _duracion.setHora(0,0,0);
    _nombre ="";
}

//Modificador de datos
void Pelicula::setDatos(Hora horaInicio, Hora duracion, string nombre)
{
    _horaInicio = horaInicio;
    _duracion = duracion;
    _nombre = nombre;
}

//Método que muestra en pantalla la información de la pelicula
void Pelicula::write(ostream &sOut)
{
    sOut << _horaInicio << " " << _duracion << " " << _nombre << endl;
}

//Devuelve la hora de inicio de la pelicula
Hora Pelicula::getHora() const
{
    return _horaInicio;
}

//Devuelve la duración de la pelicula
Hora Pelicula::getDuracion() const
{
    return _duracion;
}

//Devuelve el nombre de la pelicula
string Pelicula::getNombre() const
{
    return _nombre;
}

bool Pelicula::operator<(const Pelicula &p) const
{
}

//Operador para introducir pelicula
istream &operator>>(istream &sIn, Pelicula &p)
{
    Hora inicio, duracion;
    string nombre;
    char c;
    sIn >> inicio;
    sIn >> duracion;
    sIn >> nombre;
    sIn.get(c);
    getline(sIn, nombre);
    p.setDatos(inicio, duracion, nombre);
    return sIn;
}

//Operador para mostrar la pelicula
ostream &operator<<(ostream &sOut, Pelicula &p)
{
    p.write(sOut);
    return sOut;
}