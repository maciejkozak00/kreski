//
// Created by macie on 05.02.2022.
//

#include "Plansza.h"

Plansza::Plansza()
{
    plansza.resize(4);  //plansza ma 5 rzędów

    for(int i = 0; i < plansza.size(); i++)
    {
        plansza.at(i) = i * 2 + 1;
    }
}

bool Plansza::skresl(int rzad, int ilosc)
{
    if(rzad < 0 || rzad >= plansza.size()) //jeżeli jest poza obszarem do działania
    {
        return false;
    }
    if(ilosc > plansza.at(rzad))    //jak chce skreślić więcej niż jest w rzędzie
    {
        return false;
    }
    plansza.at(rzad) = plansza.at(rzad) - ilosc;
    return true;
}

void Plansza::debugDisplay()
{
    for(int i = 0; i < plansza.size(); i++)
    {
        std::cout << ' ';
        for(int j = 0; j < plansza.at(i); j++)
        {
            std::cout << '|';
        }
        std::cout << std::endl;
    }
}

std::vector<int> Plansza::getPlansza()
{
    return plansza;
}
