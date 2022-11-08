#ifndef KWADRAT_H
#define KWADRAT_H

#include "figura.h"
#include <iostream>

using namespace std;

class kwadrat : public Figura
{
    public:
    kwadrat() : kwadrat(0) {}
    kwadrat(double x) : a(x) {pole = a*a;cout << "Wywołano konstruktor kwadratu"<< "\n";}
    virtual void id()
    {
        cout << "Kolo o polu: " << pole << endl;
    }
    ~kwadrat() {cout << "Destrukcja Kwadratu" << endl;}
    private:
    double a;
};


#endif