#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

#include "instrumenti.hpp"
#include "tip.hpp"
#include "zanr.hpp"
#include "izvodjac.hpp"
#include "bend.hpp"
#include "nastup.hpp"
#include "ozvucenje.hpp"
#include "osvetljenje.hpp"
#include "pesme.hpp"
#include "dvorana.hpp"

vector<Dvorana> spisak_dvorana;
vector<Izvodjac> spisak_izvodjaca;
vector<Bend> spisak_bendova;

void citajTxt(string nazivFajla)
{
    string linija;
    ifstream fajl (nazivFajla);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }

    else
        cout << "Neuspesno otvoren fajl";

}
void dodavanje_dvorane(Dvorana &d)
{
    spisak_dvorana.push_back(d);
    cout<<"Dvorana koja je stavljena na spisak je:\n";
    cout<<d;
}
void dodavanje_izvodjaca(Izvodjac &i)
    {
        spisak_izvodjaca.push_back(i);
    }
void ispis_spiska_dvorana()
{
    for(auto i=spisak_dvorana.begin(); i != spisak_dvorana.end(); i++)
    {
        cout<<*i<<endl;
    }
}
void ispis_spiska_bendova()
{
    for(auto i=spisak_bendova.begin(); i != spisak_bendova.end(); i++)
    {
        cout<<(*i).getime_benda()<<" "<<(*i).getukupna_plata()<<endl;

    }
}

int Pesma::broj_pesme=0;

int main()
{
    int broj;

    string ime_benda;
    int broj_clanova_benda;

    string ime_izvodjaca;
    string prezime_izvodjaca;
    int plata;
    int broj_bendova;

    int broj_mesta;
    int cena;

    string q;
    int cena_karte;
    int zarada;
    int plata_svih_bendova;
    string naziv_dvorane;

    Dvorana odabrana_dvorana, d1("arena1",240,10000),d2("arena2",500,30000),d3("arena3",100,8000);
    spisak_dvorana.push_back(d1);
    spisak_dvorana.push_back(d2);
    spisak_dvorana.push_back(d3);
    Bend b1("Iron_maiden",6),b2("Brkovi",4),b3("Michael_Jackson",1);
    

    Izvodjac i2("A","B",1000),i3("C","D",2000),i4("H","I",1500),i5("J","K",1700),i6("L","M",2200),i7("N","O",2700),i8("P","Q",1500),i9("R","S",1900),i10("T","U",2600),i11("V","W",1300),i12("X","Y",2100);
    b1.dodajIzvodjaca(&i2);
    b1.dodajIzvodjaca(&i3);
    b1.dodajIzvodjaca(&i4);
    b1.dodajIzvodjaca(&i5);
    b1.dodajIzvodjaca(&i6);
    b1.dodajIzvodjaca(&i7);
    b2.dodajIzvodjaca(&i8);
    b2.dodajIzvodjaca(&i9);
    b2.dodajIzvodjaca(&i10);
    b2.dodajIzvodjaca(&i11);
    b3.dodajIzvodjaca(&i12);
    b1.izracunaj_ukupnu_platu();
    b2.izracunaj_ukupnu_platu();
    b3.izracunaj_ukupnu_platu();
    spisak_bendova.push_back(b1);
    spisak_bendova.push_back(b2);
    spisak_bendova.push_back(b3);
    


    do
    {
        cout<<"Ako zelite da dodate nov bend unesite 1"<<endl;
        cout<<"Ako zelite da dodate novu dvoranu unesite 2"<<endl;
        cout<<"Ako zelite da vidite spisak postojecih bendova unesite 3"<<endl;
        cout<<"Ako zelite da vidite spisak postojecih dvorana unesite 4"<<endl;
        cout<<"Ako zelite da kreirate nastup unesite 5"<<endl;
        cin>>broj;
        if(broj==1)
        {
            cout<<"Unesite ime benda";
            cin>>ime_benda;
            cout<<"Unesite broj clanova benda";
            cin>>broj_clanova_benda;
            Bend novi_bend(ime_benda,broj_clanova_benda);
               for(int i=0; i<broj_clanova_benda; i++)
            {
                cout<<"Unesite ime "<<i+1<<". izvodjaca";
                cin>>ime_izvodjaca;
                cout<<"Unesite prezime "<<i+1<<". izvodjaca";
                cin>>prezime_izvodjaca;
                cout<<"Unesite platu koju prima "<<i+1<<". izvodjac";
                cin>>plata;
                Izvodjac i1(ime_izvodjaca, prezime_izvodjaca, plata);
                novi_bend.dodajIzvodjaca(&i1);
            }
            novi_bend.izracunaj_ukupnu_platu();
            spisak_bendova.push_back(novi_bend);
           
        }
            if(broj==2)
            {
                cout<<"Unesite naziv dvorane";
                cin>>naziv_dvorane;
                cout<<"Unesite broj mesta u dvorani";
                cin>>broj_mesta;
                cout<<"Unesite cenu dvorane";
                cin>>cena;
                Dvorana nova_dvorana(naziv_dvorane,broj_mesta,cena);
                spisak_dvorana.push_back(nova_dvorana);
            }
            
            if (broj==3)
            {
                ispis_spiska_bendova();
                
            }
            if (broj==4)
            {
                ispis_spiska_dvorana();
            }
            if (broj==5)
            {
                cout<<"Izaberite dvoranu"<<endl;
                ispis_spiska_dvorana();
                cin>>q;
                for(auto i=spisak_dvorana.begin(); i!=spisak_dvorana.end(); i++)
                {
                    if((*i).getnaziv_dvorane()==q)
                    {
                        odabrana_dvorana=(*i);
                    }
                }
                cout<<"Unesite broj bendova koji ce nastupati"<<endl;
                cin>>broj_bendova;
                cout<<"Izaberite bend/bendove sa spiska"<<endl;
                ispis_spiska_bendova();
                vector<Bend>bendovi;
                for(int i=0; i<broj_bendova; i++)
                {
                    string ime;
                    cin>>ime;
                    if(ime==spisak_bendova.at(i).getime_benda())
                    {
                        bendovi.push_back(spisak_bendova.at(i));
                    }
                }
                plata_svih_bendova=0;
                for(int i=0; i<bendovi.size(); i++)
                {
                    plata_svih_bendova+=bendovi.at(i).getukupna_plata();
                }
                cout<<"Unesite pozeljnu zaradu"<<endl;
                cin>>zarada;
                cena_karte=(plata_svih_bendova+zarada+odabrana_dvorana.getcena())/odabrana_dvorana.getbroj_mesta();
                Nastup n1(odabrana_dvorana, (int)broj_bendova, cena_karte);
                cout<<"Cena karte je: "<<cena_karte<<"dinara"<<endl;
                for(int i=0; i<bendovi.size(); i++)
                {
                    n1.dodavanje_benda(bendovi.at(i));
                }
            }
        }
    while(broj!=0);
    ofstream ispisfajl;
    ispisfajl.open("ispisfajl.txt");
    ispisfajl<<"Nastup se odrzava u dvorani "<<q<<endl;
    ispisfajl<<"Nastupace bendovi"<<endl;
    for(auto i=spisak_bendova.begin(); i!=spisak_bendova.end(); i++)
    {
        ispisfajl<<(*i).getime_benda()<<endl;
    }
    ispisfajl.close();
    citajTxt("ispisfajl.txt");
   
  /*  ispisfajl<<cena_karte;
    ispisfajl.close();
    citajTxt("tekst.txt");
    Pesma p;
    cout<<p;
    Bend b;
    cout<<b;
    Dvorana d("1","2",3, 4);
    cout<<d;
    Bend b1("Iron Maiden", 6, "a", "s", 1, "f", "t", 3);
    Bend b2("Soad", 5, "a", "s", 1, "f", "t", 3);
    Bend b3("Foo fighters", 4, "a", "s", 1, "f", "t", 3);
    Nastup n("Novi Sad", 3, 1500, "d", 2, "f", "g", 5, "t", "r", 5);
    n.dodavanje_benda(b1);
    n.dodavanje_benda(b2);
    n.dodavanje_benda(b3);
    n.ispis_spiska_bendova();*/
    return 0;
}
