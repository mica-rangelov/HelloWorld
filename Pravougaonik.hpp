

#ifndef  PRAVOUGAONIK_HPP_INCLUDED
#define PRAVOUGAONIK_HPP_INCLUDED

#include <iostream>
using namespace std;

class Pravougaonik{
    private:
        double a;
        double b;
    public:
        Pravougaonik() {a = 3; b = 5; cout << "Ja sam Pravougaonik"<< endl;}
        Pravougaonik(double aa , double bb) { a= aa ; b =bb;}
        Pravougaonik(const Pravougaonik& p) {a = p.a; b = p.b;}
        
        double getA()const{return a;} 
        double getB()const{return b;} 
        
        void setA(double aa ){a = aa;}
        void setB(double bb ){b = bb;}
        
        double getO()const{return 2*a + 2*b;}
        double getP()const{return a * b;}
    
};

#endif //PRAVOUGAONIK_HPP_INCLUDED