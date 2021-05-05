#include <iostream>
#include "../include/Fecha.h"
using namespace std;

 Fecha::Fecha(int d, int m, int a){
    Dia = d;
    Mes = m;
    Anio = a;
}
int Fecha::getDia(){
    return Dia;
}
int Fecha::getMes(){
    return Mes;
}
int Fecha::getAnio(){
    return Anio;
}
void Fecha::setDia(int d){
    Dia = d;
}
void Fecha::setMes(int m){
    Mes = m;
}
void Fecha::setAnio(int a){
    Anio = a;
}
void Fecha::mostrar(){
    cout << Dia << "/" << Mes << "/" << Anio;
}
void Fecha::cargar(){
    cout << "Día: ";
    cin >> Dia;
    cout << "Mes: ";
    cin >> Mes;
    cout << "Año: ";
    cin >> Anio;
}
