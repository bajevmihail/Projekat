#ifndef OZVUCENJE_HPP_INCLUDED
#define OZVUCENJE_HPP_INCLUDED
class Ozvucenje
{
protected:
	string vrsta_ozvucenja;
	int max_decibela;
public:
	Ozvucenje(string voz, int md){
		vrsta_ozvucenja=voz;
		max_decibela=md;
	}
	int getmax_decibela(){
        return max_decibela;
    }
};
#endif
