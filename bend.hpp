#ifndef BEND_HPP_INCLUDED
#define BEND_HPP_INCLUDED
#include "izvodjac.hpp"
#include "dvorana.hpp"

class Bend
{
protected:
    string ime_benda;
    int broj_clanova_benda;
    vector<Izvodjac*>spisak_izvodjaca;
    int ukupna_plata;
public:
    Bend()
    {
        ime_benda="";
        broj_clanova_benda=0;
    }
    Bend(string ib, int bcb/*, string qwe, string wer, int rty*/)
    {
        ime_benda=ib;
        broj_clanova_benda=bcb;
        izracunaj_ukupnu_platu();
    }
    void dodajIzvodjaca(Izvodjac *i)
    {
        spisak_izvodjaca.push_back(i);
    }
    void izracunaj_ukupnu_platu()
    {
        int x=0;
        for(auto i=spisak_izvodjaca.begin(); i != spisak_izvodjaca.end(); i++)
        {
            x= ((*i) -> getplata())+x;
        }
        ukupna_plata=x;
        
    }
  /*  void provera_zvucnika()
    {
        if (instrument.gettipzvucnici()>0)
        {
            cout<<"instrument zahteva zvucnik";
        }
        else
        {
            cout<<"instrument ne zahteva zvucnik";
        }
    }*/
    friend ostream& operator<<(ostream& ispis, const Bend& b)
    {
        ispis<<"ispis Bend: "<<endl;
        ispis<<"ime benda: "<<b.ime_benda<<endl;
        ispis<<"broj clanova benda \n"<<b.broj_clanova_benda<<endl;
        return ispis;
    }
    int getukupna_plata()
    {
        return ukupna_plata;
    }
        string get_ime_benda(){return ime_benda;}

    string getime_benda(){return ime_benda;}
};
#endif
