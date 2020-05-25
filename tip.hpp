#ifndef TIP_HPP_INCLUDED
#define TIP_HPP_INCLUDED

class Tip
{
protected:
    string vrsta_instrumenta;
    int zvucnici;

public:
    Tip(){vrsta_instrumenta="";zvucnici=0;}
    Tip(string v, int z)
    {
        vrsta_instrumenta=v;
        zvucnici=z;
    }
    int getzvucnici(){
        return zvucnici;
    }
};
#endif
