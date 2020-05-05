#ifndef BEND_HPP_INCLUDED
#define BEND_HPP_INCLUDED
#include "izvodjac.hpp"
#include "dvorana.hpp"
#include <string>
class Bend:public Izvodjac
{
protected:
    string ime_benda;
    int broj_clanova_benda;
public:
	Bend(){ime_benda="";broj_clanova_benda=0;}
    Bend(string ib, int bcb, string i, string p, int pl, string qwe, string wer, int rty):Izvodjac(i, p, pl, qwe, wer, rty)
    {
        ime_benda=ib;
        broj_clanova_benda=bcb;
    }

   void provera_zvucnika(){
   	if (instrument.gettipzvucnici()>0)
   	{
   		cout<<"instrument zahteva zvucnik";
   	}
   	else {
   		cout<<"instrument ne zahteva zvucnik";
   }
   }
};
#endif
