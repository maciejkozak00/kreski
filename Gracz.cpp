//
// Created by macie on 06.02.2022.
//

#include "Gracz.h"

Gracz::Gracz(Plansza &plansza) : plansza(plansza)
{

}

void Gracz::podaj_imie(std::string nazwa)
{
    imie = nazwa;
}

bool Gracz::skresl(int rzad, int ilosc)
{
    return plansza.skresl(rzad, ilosc);
}

std::string Gracz::getImie()
{
    return imie;
}
