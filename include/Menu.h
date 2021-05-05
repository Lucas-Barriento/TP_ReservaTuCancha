#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include"rlutil.h"
using namespace std;
void menuAdministrador();
void menuCliente();
void menuCanchas();
void menuExportar();
void menuInformes();
void menuConfiguracion();

void menuPrincipal(){
    bool salir=false;
    while(salir==false){
        system("cls");
        cout << "BIENVENIDOS A RESERVA TU CANCHA" << endl;
        cout << "1 - ADMINISTRADOR" << endl;
        cout << "2 - CLIENTE" << endl;
        cout << "3 - CANCHAS" << endl;
        cout << "4 - EXPORTAR" << endl;
        cout << "5 - INFORMES" <<endl;
        cout << "6 - CONFIGURACION" << endl;
        cout << "------------------" << endl;
        cout << "0 - SALIR" << endl;
        int pos;
        cout << endl << "> ";
        cin >> pos;
        cin.ignore();
        switch(pos){
        case 1:
            menuAdministrador();
            break;
        case 2:
            menuCliente();
            break;
        case 3:
            menuCanchas();
            break;
        case 4:
            menuExportar();
            break;
        case 5:
            menuInformes();
            break;
        case 6:
            menuConfiguracion();
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

}
void menuCliente(){

    while(true){
        system ("cls");
        cout << "1 - INICIAR SESION " << endl;
        cout << "2 - REGISTRARSE " << endl;
        cout << "3 - MODIFICAR CLIENTE " << endl;
        cout << "4 - LISTAR CANCHAS " << endl;
        cout << "------------------ " << endl;
        cout << "0 - VOLVER" << endl;
        int pos;
        cout << endl << "> ";
        cin >> pos;

        switch(pos){
        case 1:
            break;
        case 2:
            break;
        case 3:
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

void menuCanchas() {
    while (true) {
            system("cls");
        cout << "1 - MOSTRAR CANCHAS" << endl;
        cout << "2 - LISTAR PRECIOS" << endl;
        cout << "3 - LISTAR X TIPO DE CAMPO" << endl;
        cout << "4 - LISTAR X ZONA " << endl;
        cout << "------------------" << endl;
        cout << "0 - VOLVER" << endl;
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
      cout<<"3 - LISTA DE RESERVAS DE CANCHAS" <<endl;
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
/*
class Menu{     /// entidades funaciones locales ///atributos
private:
    int recuadro();
    char titulo_Principal[40];
    char titulo_1[20];
    char titulo_2[20];
    char titulo_3[20];
    int imagen();
public:
    /// funciones globales son las que que antes era funciones solamentes//comportamientos
    void mostrar(char );
    void guardar_seleccion(char );/// metodo que permite seleccionar

};
Menu::mostrar(char){

cout<<"ädios";

}
*/
#endif // MENU_H_INCLUDED
