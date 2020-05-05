#ifndef PESME_HPP_INCLUDED
#define PESME_HPP_INCLUDED
#include "izvodjac.hpp"
class Pesma
{
protected:
	string naziv_pesme;
	int duzina;
	Izvodjac tmina;
public:
	Pesma():tmina(){
		naziv_pesme="";
		duzina=0;
	}
    Pesma(string np, int d, string i, string bc, int bcb,  string qwe, string wer, int rty):tmina(i, bc, bcb, qwe, wer, rty)
    {
        naziv_pesme=np;
        duzina=d;
    }
};
#endif
