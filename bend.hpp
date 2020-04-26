#ifndef BEND_HPP_INCLUDED
#define BEND_HPP_INCLUDED
class Bend
{
protected:
    string ime_benda;
    int broj_clanova_benda;
public:
	Bend(){ime_benda="";broj_clanova_benda=0;}
    Bend(string ib, int bcb)
    {
        ime_benda=ib;
        broj_clanova_benda=bcb;
    }
#endif