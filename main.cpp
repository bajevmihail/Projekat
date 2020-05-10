#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

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
  return 0;
}
