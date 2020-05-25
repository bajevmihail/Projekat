#ifndef DVORANA_HPP_INCLUDED
#define DVORANA_HPP_INCLUDED
#include <vector>
class Dvorana
{
protected:
	//string ozvucenje;
	//string osvetljenje;
	string naziv_dvorane;
	int broj_mesta;
	int cena;
public:
	Dvorana(/*string oz, string os,*/ string nd, int bm, int c) 
	{
		/*ozvucenje=oz;
		osvetljenje=os;*/
		naziv_dvorane=nd;
		broj_mesta=bm;
		cena=c;
	}
    Dvorana()
    {
        /*ozvucenje=oz;
        osvetljenje=os;*/
        naziv_dvorane=" ";
        broj_mesta=0;
        cena=0;
    }
string getnaziv_dvorane(){
	return naziv_dvorane;
}
int getcena(){
	return cena;
}
int getbroj_mesta(){
	return broj_mesta;
}
friend ostream& operator<<(ostream& ispis, const Dvorana& d)
    {
        ispis<<"ispis Dvorana: "<<endl;
        ispis<<"naziv_dvorane "<<d.naziv_dvorane<<endl;
        //ispis<<"ozvucenje"<<d.ozvucenje<<endl;
        //ispis<<"osvetljenje"<<d.osvetljenje<<endl;
        ispis<<"broj_mesta: "<<d.broj_mesta<<endl;
        ispis<<"cena: "<<d.cena<<endl;
        return ispis;
    }
};
#endif
