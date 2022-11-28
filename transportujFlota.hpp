#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int licznik_towar = 0;
    unsigned int licznik_zaglowce = 0;
    if (towar == 0)
    {
        return 0;
    }
    else
    {
        while (licznik_towar < towar)
        {
            Stocznia stocznia{};
            Statek* s1 = stocznia();
            licznik_towar += (*s1).transportuj();
            if (s1 == dynamic_cast<Zaglowiec*>(s1))
            {
                licznik_zaglowce ++;
            }
            delete s1;
        }
    }
    return 0;
}