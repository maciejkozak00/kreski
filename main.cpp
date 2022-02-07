#include <iostream>
#include "Plansza.h"
#include "Gracz.h"
#include "Gra.h"

int main()
{
    Plansza plansza;

    Gracz gracz1(plansza);
    Gracz gracz2(plansza);

    Gra gra(plansza, gracz1, gracz2);

    gra.start();

    gra.pokazPlansze();
    gra.losujRuch();

    while (1)
    {
        gra.manage();
        gra.pokazPlansze();
    }

}
