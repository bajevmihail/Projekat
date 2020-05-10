#ifndef PESME_HPP_INCLUDED
#define PESME_HPP_INCLUDED
#include "izvodjac.hpp"
class Pesma
{
protected:
	static int broj_pesme;
	string naziv_pesme;
	int duzina;
	Izvodjac tmina;
public:
	Pesma():tmina(){
		naziv_pesme="";
		duzina=0;
		broj_pesme++;
	}
    Pesma(string np, int d, string i, string bc, int bcb,  string qwe, string wer, int rty):tmina(i, bc, bcb, qwe, wer, rty)
    {
        naziv_pesme=np;
        duzina=d;
        broj_pesme++;
    }
    friend ostream& operator<<(ostream& ispis, const Pesma& p)
    {
        ispis<<"ispis Pesme:"<<endl;
        ispis<<"naziv_pesme"<<p.naziv_pesme<<endl;
        ispis<<"duzina"<<p.duzina<<endl;
        //ispis<<Pesma.tmina<<endl;
        return ispis;
    }
};
#endif
