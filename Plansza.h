//
// Created by macie on 05.02.2022.
//

#ifndef TURUWA_PLANSZA_H
#define TURUWA_PLANSZA_H

#include <vector>
#include <iostream>

class Plansza
{
    std::vector<int> plansza; //plansza jako wektor intów

public:

    Plansza();

    std::vector<int> getPlansza();
    bool skresl(int rzad, int ilosc);   //skresla podaną ilość kresek w określonym rzędzie
    void debugDisplay();

};


#endif //TURUWA_PLANSZA_H
