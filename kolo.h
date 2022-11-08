#ifndef KOLO_H
#define KOLO_H

#include "figura.h"
#include <iostream>

using namespace std;

class kolo : public Figura
{
    public:
    kolo() : kolo(0) {}
    kolo(double x) : r(x) {pole = 3.14*r*r;cout << "Wywołano konstruktor kola"<< "\n";}
    // virtual void id()
    // {
    //     cout << "Kwadrat o polu: " << pole << endl;
    // }
    ~kolo() {cout << "Destrukcja Kola" << endl;}
    private:
    double r;
};

#endif