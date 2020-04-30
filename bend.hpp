#ifndef BEND_HPP_INCLUDED
#define BEND_HPP_INCLUDED
#include "izvodjac.hpp"
#include "dvorana.hpp"
class Bend:public Izvodjac
{
protected:
    string ime_benda;
    int broj_clanova_benda;
public:
	Bend(){ime_benda="";broj_clanova_benda=0;}
    Bend(string ib, int bcb, string i, string p, int pl):Izvodjac(string i, string p, int pl)
    {
        ime_benda=ib;
        broj_clanova_benda=bcb;
    }

   void provera_zvucnika(){
   	if (instrument.gettip()>0)
   	{
   		cout<<"instrument zahteva zvucnik";
   	}
   	else {
   		cout<<"instrument ne zahteva zvucnik";
   }
   }
};
#endif
