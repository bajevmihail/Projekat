#ifndef TIP_HPP_INCLUDED
#define TIP_HPP_INCLUDED

class Tip
{
protected:
    string vrsta_instrumenta;
    int zvuk;

public:
	Tip(){vrsta_instrumenta="";zvuk=0;}
    Tip(string v, int z)
    {
        vrsta_instrumenta=v;
        zvuk=z;
    }
#endif
