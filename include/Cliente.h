#ifndef CLIENTE_H
#define CLIENTE_H
#include"Persona.h"

class Cliente:public Persona
{
    public:
        void iniciarSesion();
        void menuCliente();
        int buscarID(int );
        bool buscarContrasenia(int, char*);
    private:
};

#endif // CLIENTE_H
