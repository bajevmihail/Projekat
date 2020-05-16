#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

#include <vector>
#include "instrumenti.hpp"
#include "tip.hpp"
#include "zanr.hpp"
#include "izvodjac.hpp"
#include "bend.hpp"//metoda proverava da li je instrumentu potreban zvucnih da bi radio 
#include "nastup.hpp"//metoda izracunava cenu karte na osnovu cene dvoane i plate koju primaju izvodjaci 
#include "ozvucenje.hpp"
#include "osvetljenje.hpp"
#include "pesme.hpp"
#include "dvorana.hpp"
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
int Pesma::broj_pesme=0;
int main ()
{
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
n.ispis_spiska_bendova();
  return 0;
}
