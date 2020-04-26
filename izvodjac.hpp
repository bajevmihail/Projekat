#ifndef IZVODJAC_HPP_INCLUDED
#define IZVODJAC_HPP_INCLUDED
#include "bend.hpp"
class Izvodjac:public Bend
{
protected:
    string ime_izvodjaca;
    int broj_clanova;

public:
	Izvodjac(){
		ime_izvodjaca="";
		broj_clanova=0;
	}
    Izvodjac(string i, int bc, string ib, int bcb):Bend(ib, bcb)
    {
        ime_izvodjaca=i;
        broj_clanova=bc;
    }
#endif