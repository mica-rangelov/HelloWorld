#ifndef  NOVIVALJAK_HPP_INCLUDED
#define NOVIVALJAK_HPP_INCLUDED

#include <iostream>
#include "Krug.hpp"  //moramo da ih inkludujemo jer radimo sa tim tipovima podataka
#include "Pravougaonik.hpp"


using namespace std;

class NoviValjak{
    private:
        Krug baza;     //polje baza tipa klse Krug
        Pravougaonik omotac; //polje baza tipa klse Pravougaonik
       
    public:
        //KONSTRUKTOR BEZ PARAMETARA
        //NoviValjak(): {}     
        NoviValjak() : baza(), omotac() {cout<< "Ja sam NoviValja"<<endl;}  
        
        //KONSTRUKTOR SA PARAMETRIMA
        NoviValjak(double rr, double hh) : baza(rr) , omotac(baza.getO(), hh){} 
    
        //KONSTRUKTOR KOPIJE
        NoviValjak(const NoviValjak& nv) : baza(nv.baza) , omotac(nv.omotac){}
            // nv moze direktno da pristupi svojim poljima
            
        //GETERI
         double getR() const{
            return baza.getR();
        }
         double getH() const{
            return omotac.getB();
        }
         double getP() const{
            return 2 * baza.getP() + omotac.getP();
        }
         double getV() const{
            return  baza.getP() * omotac.getB();
        }
        
};
#endif //NOVIVALJAK_HPP_INCLUDED