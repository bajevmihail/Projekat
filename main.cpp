#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

#include <vector>
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

vector<Dvorana>spisak_dvorana;

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
void dodavanje_dvorane(Dvorana &d){
        spisak_dvorana.push_back(&d);
        cout<<"Dvorana koja je stavljena na spisak je:\n";
        cout<<d;
    }
void ispis_spiska_dvorana(){
            for(auto i=spisak_dvorana.begin(); i != spisak_dvorana.end(); i++){
                cout<<*i<<endl;
            }
int Pesma::broj_pesme=0;
int main ()
int x=1;
int broj;

string ime_benda;
int broj_clanova_benda;

string ime_izvodjaca;
string prezime_izvodjaca;
int plata;


int broj_mesta;
int cena;

string q;
int zarada;
int cena_karte;
int zarada;
int plata_svih_bendova;

Dvorana odabrana_dvorana;
{
    do {cout<<"Ako zelite da dodate nov bend unesite 1"<<endl;
    cout<<"Ako zelite da dodate novu dvoranu unesite 2"<<endl;
    cout<<"Ako zelite da vidite spisak postojecih bendova unesite 3"<<endl;
    cout<<"Ako zelite da vidite spisak postojecih dvorana unesite 4"<<endl;
    cout<<"Ako zelite da kreirate nastup unesite 5"<<endl;
    cin>>broj;
    if(broj==1){
        cout<<"Unesite ime benda";
        cin>>ime_benda;
        cout<<"Unesite broj clanova benda";
        cin>>broj_clanova_benda
        for(i=0; i<broj_clanova_benda; i++){
            cout<<"Unesite ime "<<i+1<<". izvodjaca";
            cin>>ime_izvodjaca;
            cout<<"Unesite prezime "<<i+1<<". izvodjaca";
            cin>>prezime_izvodjaca;
            cout<<"Unesite platu koju prima "<<i+1<<". izvodjac";
            cin<<plata;
            Izvodjac i1(ime_izvodjaca, prezime_izvodjaca, plata);
            dodavanje_izvodjaca(i1)
        }
        n.dodavanje_benda();

    if(broj==2){
        cout<<"Unesite broj mesta u dvorani";
        cin>>broj_mesta;
        cout<<"Unesite cenu dvorane";
        cin>>cena;
    }
    n.dodavanje_dvorane();

    if (broj==3){
            n.ispis_spiska_bendova();
        i.ukupna_plata();
    }
    if (broj=4){
        ispis_spiska_dvorana();
    }
    if (broj=5){
        cout<<"Izaberite dvoranu"<<endl;
        ispis_spiska_dvorana();
        cin>>q;
        for(auto i=spisak_dvorana.begin(); i!=spisak_dvorana.end(); i++){
            if(spisak_dvorana.getnaziv_dvorane()==q){
                odabrana_dvorana=*i;
            }
        }
        cout<<"Izaberite jedan ili vise bendova sa spiska"<<endl;
        n.ispis_spiska_bendova();
        vector<Bend>bendovi;
        for(i=0; i<spisak_bendova.size; i++){
            string ime;
            cin<<ime;
            if(ime==spisak_bendova.at(i).getime_benda()){
                bendovi.at(j)=spisak_bendova.at(i);
            }
        }
        plata_svih_bendova=0;
        for(i=0; i<spisak_bendova.size; i++){
            plata_svih_bendova+=bendovi.at(i);
        }
        broj_bendova=bendovi.size();
        cout<<"Unesite pozeljnu zaradu"<<enld;
        cin>>zarada;
        cena_karte=(plata_svih_bendova+zarada+d.getcena())/d.getbroj_mesta();
        Nastup n1(mesto_izvodjenja, broj_bendova, cena_karte);
        cout<<cena_karte;
    }
    }
}while(x!=0);
ofstream ispisfajl;
ispisfajl.open("ispisfajl.txt");
ispisfajl<<"Nastup se odrzava u dvorani"<<q<<endl;
ispisfajl<<"Nastupace bendovi"<<endl;
               for(auto i=bendovi.begin(); i!=bendovi.end(); i++)
        {
            cout<<**i<<endl;
        }
ispisfajl<<cena_karte;
ispisfajl.close();
/*citajTxt("tekst.txt");
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
  return 0
