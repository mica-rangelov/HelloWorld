#ifndef KRUG_HPP_INCLUDED
#define KRUG_HPP_INCLUDED

#include <iostream>
using namespace std;

class Krug{
    private:
        double r;
    public:
        // konstruktori
        Krug(){r=5; cout<< "Ja sam Krug"<<endl;}
        Krug(double rr){r=rr;}
        Krug(const Krug& k){r= k.r;}
        
        double getR()const{return r;} 
        void setR(double rr){r =rr;}
        
        double getO() const {return 2* r * 3.14;}
        double getP() const {return r* r * 3.14;}
        
};
#endif // KRUG_HPP_INCLUDED

