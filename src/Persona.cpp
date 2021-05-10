#include <iostream>
#include "../include/Persona.h"
#include "../include/Validar.h"
#include<cstdio>
using namespace std;
int cantID();

bool Persona::cargar()
{
    cin.ignore();
    cout<< "ID generado automaticamente: ";
    ID=cantID()+1;/// cantID devuelve el num de ID cargados y le suma 1
    cout<< ID<<endl;
    cout<< "Nombre: "<<endl;
    cin.getline(Nombre,15);
    if(strcmp(Nombre,"\0")==0)
    {
        cout<< "nombre invalido"<<endl;
        return false;
    }
    cout<< "Apellido: "<<endl;
    cin.getline(Apellido,15);
    if(strcmp(Apellido, "\0")==0)
    {
        cout<< "apellido invalido"<<endl;
        return false;
    }
    cout<< "Contraseña: "<<endl;
     cin.getline(Contrasenia,15);
    cout<< "DNI: "<<endl;
     cin>>Dni;
    cout<< "Email: "<<endl;
     cin.ignore();
     cin.getline(Email,30);
    if(validarEmail(Email)==false)
    {
        cout<< "Email invalido"<<endl;
        return false;
    }
    cout<< "Fecha de nacimiento (dd/mm/aaaa): "<<endl;
    Nacimiento.cargar();
    if(validarFecha(Nacimiento)==false)
    {
        cout<< "Fecha invalida"<<endl;
    }
    return true;
}

void Persona::mostrar()
{
    cout<< "Nombre: "<<endl;
    cout<< Nombre<<endl;
    cout<< "Apellido: "<<endl;
    cout<< Apellido<<endl;
    cout<< "Contraseña: "<<endl;
    cout<< Contrasenia<<endl;
    cout<< "DNI: "<<endl;
    cout<< Dni<<endl;
    cout<< "Email: "<<endl;
    cout<< Email<<endl;
    Nacimiento.mostrar();
}
int cantID()
{
    FILE*p;
    int bytes;
    p=fopen("CantID.dat","ab");
    if(p==NULL)
    {
        return -1;
    }
    fseek(p,0,SEEK_END);
    bytes=ftell(p);
    int cantidad=bytes/sizeof(Persona);
    fclose(p);

    return cantidad;
}
