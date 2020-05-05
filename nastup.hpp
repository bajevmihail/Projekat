#ifndef NASTUP_HPP_INCLUDED
#define NASTUP_HPP_INCLUDED
#include "izvodjac.hpp"
#include "dvorana.hpp"

class Nastup
{
protected:
	string mesto_izvodjenja;
	int broj_izvodjaca;
	int cena_karte;
public:
	Nastup(string mi, int ck, int bi=1)
	{
		mesto_izvodjenja=mi;
		broj_izvodjaca=bi;
		cena_karte=ck;
	}
	int cena(Dvorana &d, Izvodjac &i)
	{
		cena_karte=(d.getcena()+i.getplata())/broj_izvodjaca;
		return cena_karte;
	}
};
#endif
