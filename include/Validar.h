#ifndef VALIDAR_H_INCLUDED
#define VALIDAR_H_INCLUDED
#include"Persona.h"
#include<cstring>
#include<ctime>

bool validarEmail(char*email){
if (strchr(email,'@')==NULL){/// tener arroba/s
    return false;
}

if(strchr(email,'.')==0){/// tener punto/s
    return false;
}
int i=0,cont=0;
while(email[i]!='\0'){
    if(email[i]=='@'){
        cont++;
    }
    i++;
}
if(cont>1){/// tener un solo arroba
    return false;
}

int tam=strlen(email);/// no empezar ni terminar con @ o .
if(email[0]=='@' || email[tam-1]=='@' || email[0]=='.' || email[tam-1]=='.'){
    return false;
}

int j=0;
while(email[j]!='\0'){///no tener dos puntos seguidos
    if(email[j]=='.'){
        if(email[j+1]=='.'){
            return false;
        }
    }
    j++;
}
return true;
}

bool validarFecha(Fecha Nacimiento){
time_t t;
t=time(NULL);
struct tm*fec;
fec= localtime(&t);

if(Nacimiento.getAnio()>=(fec->tm_year+1900)){
    return false;
}
else{
    switch (Nacimiento.getMes())
    {
    case 1:
        if(Nacimiento.getDia()>=1 && Nacimiento.getDia()<=31){
            return true;
        }
        else{
            return false;
        }
        break;
    case 2:
        if(Nacimiento.getAnio()%4==0 && Nacimiento.getAnio()%100==0 && Nacimiento.getAnio()%400==0){
            if(Nacimiento.getDia()>=1 && Nacimiento.getDia()<=28){
                return true;
            }
            else{
                return false;
            }
}
else{
    if(Nacimiento.getDia()>=1 && Nacimiento.getDia()<=29){
        return true;
    }
    else{
        return false;
    }
}
        break;
    case 3:
        if(Nacimiento.getDia()>=1 && Nacimiento.getDia()<=31){
            return true;
        }
        else{
            return false;
        }
        break;
    case 4:
        if(Nacimiento.getDia()>=1 && Nacimiento.getDia()<=30){
            return true;
        }
        else{
            return false;
        }
        break;
    case 5:
        if(Nacimiento.getDia()>=1 && Nacimiento.getDia()<=31){
            return true;
        }
        else{
            return false;
        }
        break;
    case 6:
        if(Nacimiento.getDia()>=1 && Nacimiento.getDia()<=30){
            return true;
        }
        else{
            return false;
        }
        break;
    case 7:
        if(Nacimiento.getDia()>=1 && Nacimiento.getDia()<=31){
            return true;
        }
        else{
            return false;
        }
        break;
    case 8:
        if(Nacimiento.getDia()>=1 && Nacimiento.getDia()<=31){
            return true;
        }
        else{
            return false;
        }
        break;
    case 9:
        if(Nacimiento.getDia()>=1 && Nacimiento.getDia()<=30){
            return true;
        }
        else{
            return false;
        }
        break;
    case 10:
        if(Nacimiento.getDia()>=1 && Nacimiento.getDia()<=31){
            return true;
        }
        else{
            return false;
        }
        break;
    case 11:
        if(Nacimiento.getDia()>=1 && Nacimiento.getDia()<=30){
            return true;
        }
        else{
            return false;
        }
        break;
    case 12:
        if(Nacimiento.getDia()>=1 && Nacimiento.getDia()<=31){
            return true;
        }
        else{
            return false;
        }
        break;
    default:
        return false;
        break;
    }

}

return false;
}


#endif // VALIDAR_H_INCLUDED
