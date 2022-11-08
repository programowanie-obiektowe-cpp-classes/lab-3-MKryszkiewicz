#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int licznik = 0;
    while (licznik < towar)
    {
        Stocznia stocznia{};
        Statek* s1 = stocznia();
        licznik += (*s1).transportuj();
    }
    return 0;
}