//
// Created by macie on 06.02.2022.
//

#ifndef TURUWA_GRACZ_H
#define TURUWA_GRACZ_H

#include "Plansza.h"

class Gracz
{
    Plansza &plansza;
    std::string imie;

public:
    Gracz(Plansza &plansza);

    //gettery
    std::string getImie();

    void podaj_imie(std::string nazwa);  //funkcja do wprowadzenia imienia gracza
    bool skresl(int rzad, int ilosc);

};


#endif //TURUWA_GRACZ_H
