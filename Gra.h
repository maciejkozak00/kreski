//
// Created by macie on 06.02.2022.
//

#ifndef TURUWA_GRA_H
#define TURUWA_GRA_H

#include <time.h>
#include "Plansza.h"
#include "Gracz.h"

enum Gamestate {STARTING, RUNINNG, FINISHED};

class Gra
{
    Plansza & plansza;
    Gracz &gracz1;
    Gracz &gracz2;

    bool ruch;


public:
    Gra(Plansza &plansza1, Gracz &gracz1, Gracz &gracz2);

    void start();
    void pokazPlansze();

    void losujRuch();

    void manage();
    bool checkIfLost();

};


#endif //TURUWA_GRA_H
