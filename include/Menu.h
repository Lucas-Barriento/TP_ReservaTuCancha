#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include"rlutil.h"
#include"Persona.h"
#include"Cliente.h"
#include <cstdlib>
#include <cstdio>
using namespace std;
void menuAdministrador();
void menuExportar();
void menuInformes();
void menuConfiguracion();

void menuPrincipal(){
    Persona p;
    Cliente cl;
    bool salir=false;
    while(salir==false){
        system("cls");
        cout << "BIENVENIDOS A RESERVA TU CANCHA" << endl;
        cout << "1 - INICIAR SESION             " << endl;
        cout << "2 - REGISTRARSE                " << endl;
        cout << "-------------------------------" << endl;
        cout << "0 - SALIR                      " << endl;
        int pos;
        cout << endl << "> ";
        cin >> pos;
        cin.ignore();
        switch(pos){
        case 1:
            cl.iniciarSesion();
            break;
        case 2:
            if(p.cargar()==true){
                if(p.guardarEnDisco()==true){
                    cout<< "Guardado."<<endl;
                }
            }
            break;
        case 0:
            salir=true;
            break;
        default:
            cout<< "Opcion incorrecta"<<endl;
            break;

        }
    cin.ignore();
    }
}


void menuAdministrador(){
    while(true){
        system ("cls");
        cout << "1  - GENERAR RESERVA NUEVA             " << endl;
        cout << "2  - MODIFICAR RESERVA                 " << endl;
        cout << "3  - LISTAR CANCHAS                    " << endl;
        cout << "4  - MODIFICAR CLIENTE                 " << endl;
        cout << "5  - MODIFICAR PRECIO DE RESERVA       " << endl;
        cout << "6  - BUSCAR CLIENTE POR ID             " << endl;
        cout << "7  - INFORMES                          " << endl;
        cout << "8  - BUSCAR CANCHA DISPONIBLE POR FECHA" << endl;
        cout << "9  - EXPORTAR                          " << endl;
        cout << "10 - BACK UP                           " << endl;
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
            ///modificarCliente();
        case 5:
            ///modificarPrecioReserva();
            break;
        case 6:
            ///buscarCliente();
            break;
        case 7:
            menuInformes();
            break;
        case 8:
            ///buscarCanchaDisponibleXFecha();
            break;
        case 9:
            ///exportar();
            break;
        case 10:
            ///backUp();
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

void menuExportar(){
    while (true) {
        system("cls");
        cout << "1 - " << endl;
        cout << "2 - " << endl;
        cout << "------------------" << endl;
        cout << "0 - VOLVER" << endl;
        int pos;
        cout << endl << "> ";
        cin >> pos;

        switch (pos){
        case 1:
            break;
        case 2:
            break;
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
void menuInformes(){
while(true){
    system("cls");
      cout<<"1 - LISTA DE CLIENTES ORDENADOS POR NOMBRE" << endl;
      cout<<"2 - LISTA DE CANCHAS DISPONIBLES" <<endl;
      cout<<"3 - LISTA DE RESERVAS DE CANCHAS ACTIVAS" <<endl;
      cout<<"4 - BUSCAR RESERVA POR ID" <<endl;
      cout<<"5 - CONSULTAR DISPONIBILIDAD EN CASO DE MODIFICACION DE RESERVA"<< endl;
      cout<<"-------------------------------------------------------------" << endl;
      cout<<"0 - VOLVER" << endl;
        int pos;
        cout << endl << "> ";
        cin >> pos;

        switch (pos) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
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
void menuConfiguracion(){
    while(true){
            system("cls");
    cout<< "1 - REALIZAR COPIA DE SEGURIDAD"<<endl;
    cout<< "2 - CARGAR COPIA DE SEGURIDAD"<<endl;
    cout<<"--------------------------------" << endl;
    cout<<"0 - VOLVER" << endl;
            int pos;
        cout << endl << "> ";
        cin >> pos;

        switch (pos) {
        case 1:
            break;
        case 2:
            break;
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

#endif // MENU_H_INCLUDED

