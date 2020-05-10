#ifndef DVORANA_HPP_INCLUDED
#define DVORANA_HPP_INCLUDED
class Dvorana
{
protected:
	string ozvucenje;
	string osvetljenje;
	int broj_mesta;
	int cena;
public:
	Dvorana(string oz, string os, int bm, int c) 
	{
		ozvucenje=oz;
		osvetljenje=os;
		broj_mesta=bm;
		cena=c;
	}
int getcena(){
	return cena;
}
int getbroj_mesta(){
	return broj_mesta;
}
friend ostream& operator<<(ostream& ispis, const Dvorana& d)
    {
        ispis<<"ispis Dvorana:"<<endl;
        ispis<<"ozvucenje"<<d.ozvucenje<<endl;
        ispis<<"osvetljenje"<<d.osvetljenje<<endl;
        ispis<<"broj_mesta: "<<d.broj_mesta<<endl;
        ispis<<"cena: "<<d.cena<<endl;
        return ispis;
    }
};
#endif
