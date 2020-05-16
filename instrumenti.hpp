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
    Instrument(string n, string v, int z):zicani(v, z)
    {
        naziv_instrumenta=n;
    }
    int gettipzvucnici(){
    	return zicani.getzvucnici();
    }
};
#endif
