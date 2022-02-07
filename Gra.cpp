//
// Created by macie on 06.02.2022.
//

#include "Gra.h"

Gra::Gra(Plansza &plansza1, Gracz &gracz1, Gracz &gracz2) : plansza(plansza1), gracz1(gracz1), gracz2(gracz2)
{

}

void Gra::start()
{
    std::cout << "Podaj imie gracza 1" << std::endl;

    std::string s;
    std::cin >> s;
    gracz1.podaj_imie(s);

    std::cout << "Podaj imie gracza 2" << std::endl;

    std::cin >> s;
    gracz2.podaj_imie(s);
}

void Gra::pokazPlansze()
{
    for(int i = 0; i < plansza.getPlansza().size(); i++)
    {
        std::cout << ' ';
        for(int j = 0; j < plansza.getPlansza().at(i); j++)
        {
            std::cout << "|";
        }
        std::cout << std::endl;

    }
}

void Gra::manage()
{
    pokazPlansze();
    if(ruch == 0)
    {
        int a = -1;
        int b = -1;
        do
        {
            std::cout << "Gracz1, rzad" << std::endl;
            std::cin >> a;
            std::cout << "Gracz1, ilosc" << std::endl;
            std::cin >> b;
        }while(!gracz1.skresl(a, b));

        if(checkIfLost())
        {
            std:: cout << "przegrałeś" << gracz1.getImie() << std::endl;
            abort();
        }
        ruch = 1;
    }
    else if(ruch == 1)
    {
        int a = -1;
        int b = -1;
        do
        {
            std::cout << "Gracz2, rzad" << std::endl;
            std::cin >> a;
            std::cout << "Gracz2, ilosc" << std::endl;
            std::cin >> b;
        }while(!gracz2.skresl(a, b));

        if(checkIfLost())
        {
            std:: cout << "przegrałeś" << gracz1.getImie() << std::endl;
            abort();
        }
        ruch = 0;
    }
}

void Gra::losujRuch()
{
    srand(time(NULL));
    ruch = int(rand() % 2);
}

bool Gra::checkIfLost()
{
    int a = 0;
    for(int i = 0; i < plansza.getPlansza().size(); i++)
    {
        a = a + plansza.getPlansza().at(i);
    }

    if(a == 0)
    {
        return true;
    }
    return false;
}

