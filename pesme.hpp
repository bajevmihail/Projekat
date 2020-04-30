#ifndef PESME_HPP_INCLUDED
#define PESME_HPP_INCLUDED
class Pesma
{
protected:
	string naziv_pesme;
	int duzina;
	Izvodjac tmina;
public:
	Pesma():tmina(){
		naziv_pesme="";
		izvodjac="";
		duzina=0;
	}
    Pesma(string np, int d, string i, int bc, string ib, int bcb):tmina(i, bc, ib, bcb)
    {
        naziv_pesme=np;
        izvodjac=i;
        duzina=d;
    }
};
#endif
