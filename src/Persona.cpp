#include <iostream>
#include "../include/Persona.h"
using namespace std;

void Persona::cargar(){
cout<< "Nombre: "<<endl;
cin.getline(Nombre,15);
cout<< "Apellido: "<<endl;
cin.getline(Apellido,15);
cout<< "Contraseña: "<<endl;
cin.getline(Contrasenia,15);
cout<< "DNI: "<<endl;
cin>>Dni;
cout<< "email: "<<endl;
cin.getline(Email,30);
}

void Persona::mostrar(){
cout<< "Nombre: "<<endl;
cout<<Nombre<<endl;
cout<< "Apellido: "<<endl;
cout<< Apellido<<endl;
cout<< "Contraseña: "<<endl;
cout<< Contrasenia<<endl;
cout<< "DNI: "<<endl;
cout<< Dni<<endl;
cout<< "email: "<<endl;
cout<< Email<<endl;
}

