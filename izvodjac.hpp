#ifndef IZVODJAC_HPP_INCLUDED
#define IZVODJAC_HPP_INCLUDED
#include "instrumenti.hpp"

class Izvodjac:
{
protected:
    string ime_izvodjaca;
    string prezime_izvodjaca;
    Instrument instrument;
    int plata;
public:
    Izvodjac(){
        ime_izvodjaca="";
        prezime_izvodjaca="";
        plata=0;
    }
    int getplata(){
    return plata;
}
    Izvodjac(string i, string p, int pl)
    {
        ime_izvodjaca=i;
        prezime_izvodjaca=p;
        plata=pl;
    }
    Instrument getinstrument(){
        return instrument.gettip();
    }
};
#endif
