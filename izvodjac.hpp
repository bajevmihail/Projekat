#ifndef IZVODJAC_HPP_INCLUDED
#define IZVODJAC_HPP_INCLUDED
#include "instrumenti.hpp"
#include<vector>

class Izvodjac
{
protected:
    string ime_izvodjaca;
    string prezime_izvodjaca;
    /*Instrument instrument;*/
    int plata;
public:
    Izvodjac()/*:instrument()*/{
        ime_izvodjaca="";
        prezime_izvodjaca="";
        plata=0;
    }
    int getplata(){
    return plata;
}
    Izvodjac(string i, string p, int pl/*, string qwe, string wer, int rty*/)/*:instrument(qwe, wer, rty)*/
    {
        ime_izvodjaca=i;
        prezime_izvodjaca=p;
        plata=pl;
    }
    /*int getinstrument(){
        return instrument.gettipzvucnici();
        }*/
    virtual void Plata(){
        plata=1000;
        cout<<plata;
    }
  
};
#endif
