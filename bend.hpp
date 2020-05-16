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
   friend ostream& operator<<(ostream& ispis, const Bend& b)
    {
        ispis<<"ispis Bend: "<<endl;
        ispis<<"ime benda: "<<b.ime_benda<<endl;
        ispis<<"broj clanova benda \n"<<b.broj_clanova_benda<<endl;
        return ispis;
    }
    void Plata(){
      cout<<"plata benda je ";
    }
    string getime_benda(){
      return ime_benda;
    }
    virtual void ispis_benda(Bend &b){
      cout<<b;
    }
};
#endif
