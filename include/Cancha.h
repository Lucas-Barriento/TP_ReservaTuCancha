#ifndef CANCHA_H
#define CANCHA_H


class Cancha
{
    private:
        char Nombre[15];
        float tipo;/// 5,7,9,11
        char cesped[15]; /// natural o sintetico

    public:
        Cancha();
        ~Cancha();
};

#endif // CANCHA_H
