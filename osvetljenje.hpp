#ifndef OSVETLJENJE_HPP_INCLUDED
#define OSVETLJENJE_HPP_INCLUDED

class Osvetljenje
{
protected:
	string vrsta_osvetljenja;
	int jacina_osvetljenja;
public:
	Osvetljenje(string vo, int jo){
		vrsta_osvetljenja=vo;
		jacina_osvetljenja=jo;
	}
	int getjacina(){
        return jacina_osvetljenja;
    }
};
#endif
