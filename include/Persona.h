#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include "Fecha.h"
using namespace std;
class Persona{
protected:

    char Nombre[15], Apellido[15], Email[30],Contrasenia[15];
    int Dni, ID;
    bool Administrador;
    Fecha Nacimiento;
public:
    bool cargar();
    bool guardarEnDisco();
    void mostrar();
    ///get
    int getID();
    const char *getContrasenia();
};

#endif // PERSONA_H_INCLUDED
