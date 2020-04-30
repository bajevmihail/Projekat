#ifndef INSTRUMENTI_HPP_INCLUDED
#define INSTRUMENTI_HPP_INCLUDED
#include "tip.hpp"
class Instrument
{
protected:
    string naziv_instrumenta;
    Tip zicani;
public:
	Instrument():zicani(){naziv_instrumenta="";}
    Instrument(string n, string t, string v, int z):zicani(v, z)
    {
        naziv_instrumenta=n;
        prezime=t;
    }
    Tip gettipzvucnici(){
    	return zicani.getzvucnici();
    }
    
};
#endif
