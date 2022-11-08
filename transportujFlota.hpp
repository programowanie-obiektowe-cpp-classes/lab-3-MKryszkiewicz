#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int licznik = 0;
    Stocznia stocznia{};
    while (licznik < towar)
    {
        Statek* s1 = stocznia();
        licznik += (*s1).transportuj();
        delete s1;
    }

    return 0;
}