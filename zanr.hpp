#ifndef ZANR_HPP_INCLUDED
#define ZANR_HPP_INCLUDED
class Zanr
{
protected:
	string naziv_zanra;
	string naziv_podzanra;
public:
	Zanr(string nz, string np){
		naziv_zanra=nz;
		naziv_podzanra=np;
	}
	string getnaziv_zanra(){
        return naziv_zanra;
    }
    string getnaziv_podzanra(){
        return naziv_podzanra;
    }
};
#endif
