#include <iostream>
#include "Cliente.h"
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

void Cliente::menuCliente()
{
    while(true)
    {
        system ("cls");
        cout << "1 - GENERAR RESERVA NUEVA              " << endl;
        cout << "2 - MODIFICAR RESERVA                  " << endl;
        cout << "3 - LISTAR CANCHAS                     " << endl;
        cout << "4 - BUSCAR CANCHA DISPONIBLE POR FECHA " << endl;
        cout << "---------------------------------------" << endl;
        cout << "0 - VOLVER                             " << endl;
        int pos;
        cout << endl << "> ";
        cin >> pos;

        switch(pos){
        case 1:
            ///nuevaReserva();
            break;
        case 2:
            ///modificarReserva();
            break;
        case 3:
            ///listarCanchas();
            break;
        case 4:
            ///buscarCanchaDisponibleXFecha();
        case 0:
            return;
            break;
        default:
            cout<< "Opcion incorrecta"<<endl;
            break;
        }
        cin.ignore();

    }
}

void Cliente::iniciarSesion(){
    cin.ignore();
cout<< "Ingrese el numero de ID: "<<endl;
cin>>ID;
if(buscarID(ID)>=0){
        cin.ignore();
    cout<< "Ingrese la Contraseña: "<<endl;
    cin.getline(Contrasenia,15);
        if(buscarContrasenia(ID,Contrasenia)==true){
            menuCliente();
        }
else{
    cout<< "Contraseña incorrecta"<<endl;
}
}
else{
    cout<< "El ID no existe "<<endl;
    return;
}

}

int Cliente::buscarID(int id){
    FILE*p;
    int i=0;
    Persona cl;
    p=fopen("Clientes.dat","rb");
    if(p==NULL)
    {
        cout<< "No se pudo abrir el archivo"<<endl;
        return -1;
    }
    while(fread(&cl,sizeof(Persona),1,p)==1)
    {
        if(cl.getID()==id)
        {
                fclose(p);
                return i;
            }
        i++;
    }
    return -2;
}

bool Cliente::buscarContrasenia(int id,char*contrasenia){
 FILE*p;
    int i=0;
    Persona cl;
    p=fopen("Clientes.dat","rb");
    if(p==NULL)
    {
        cout<< "No se pudo abrir el archivo"<<endl;
        return false;
    }
    while(fread(&cl,sizeof(Persona),1,p)==1)
    {
        if(cl.getID()==id)
        {
                if(strcmp(cl.getContrasenia(),contrasenia)==0){
                    fclose(p);
                return true;
                }
            }
        i++;
    }
    return false;
}
