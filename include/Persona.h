#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

using namespace std;
class Persona{
protected:
    char Nombre[15], Apellido[15], Email[30],Contrasenia[15];
    int Dni;
    ///Nacimiento
public:
    void cargar();
    void mostrar();
};

#endif // PERSONA_H_INCLUDED
