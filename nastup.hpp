#ifndef NASTUP_HPP_INCLUDED
#define NASTUP_HPP_INCLUDED
#include "izvodjac.hpp"
#include "dvorana.hpp"
#include "bend.hpp"
#include <vector>
#include <fstream>

class Nastup
{
protected:
    int broj_bendova;
    int cena_karte;
    vector<Bend*>spisak_bendova;
    Dvorana dvorana;
public:
    Nastup(Dvorana &d, int ck, int bb/* ,string ib, int bcb, string i, string p, int pl*//*, string qwe, string wer, int rty*/)//:b(ib, bcb, i, p, pl/*, qwe, wer, rty*/)
    {
        dvorana=d;
        cena_karte=ck;
        broj_bendova=bb;
    }
    Nastup(){}
    /*string getnaziv_benda()
    {
        return naziv_benda;
    }*/
    /*int cena(Dvorana &d, Izvodjac &i)
    {
        cena_karte=(d.getcena()+i.getplata())/broj_izvodjaca;
        return cena_karte;
    }*/
    void dodavanje_benda(Bend &b)
    {
        spisak_bendova.push_back(&b);
    }
    void brisanje_benda()
    {
        string line;
        cin>>line;
        for(auto i=spisak_bendova.begin(); i != spisak_bendova.end(); i++)
        {
            if ((*i)->getime_benda()==line)
            {
                spisak_bendova.erase(i);
                cout<<"Bend koji je izbrisan sa spiska je:\n";
                cout<<**i;
            }
        }
    }
    void pretraga_benda()
    {
        string line;
        cin>>line;
        for(auto i=spisak_bendova.begin(); i != spisak_bendova.end(); i++)
        {
            if ((*i)->getime_benda()==line)
            {
                cout<<**i;
            }
        }
    }
    void ispis_spiska_bendova()
    {
        for(auto i=spisak_bendova.begin(); i != spisak_bendova.end(); i++)
        {
            cout<<(*i)->get_ime_benda()<<" "<<(*i)->getukupna_plata()<<endl;
        }
    }
};
#endif
