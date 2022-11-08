#ifndef FIGURA_H
#define FIGURA_H
#include <iostream>

using namespace std;
 class Figura
{
    public:
    Figura() : pole(0) {cout << "Wywołano konstruktor Figury"<< "\n";}
    Figura (double p) : pole(p){cout << "Wywołano konstruktor parametrycznyFigury"<< "\n";}
    void SetPole (double S)
    {
        pole = S;
    }
    double GetPole ()
    {
        return pole;
    }
    void print()
    {
        cout << "Pole = " << pole << "\n";
    }
    virtual void id() = 0;
    // {
    //     cout << "Figura bazowa o polu: " << pole << endl;
    // }
    virtual ~Figura() {cout << "Destrukcja Figury" << endl;}
    protected:
    double pole;

 };


#endif
