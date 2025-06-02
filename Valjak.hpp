#ifndef  VALJAK_HPP_INCLUDED
#define VALJAK_HPP_INCLUDED

class Valjak{
    private:
        double r;
        double h;
    public:
        Valjak() {r = 2; h = 3;}
        Valjak(double rr , double hh) { r= rr ; h =hh;}
        Valjak(const Valjak& v) {r = v.r; h = v.h;}
        
        double getR()const{return r;} 
        double getH()const{return h;} 
        
        void setR(double rr ){r = rr;}
        void setH(double hh ){h = hh;}
        
        double getV()const{return r * r * h * 3.14;}
        double getP()const{return 2 * r *3.14 * h + 2 * r * r *3.14;}
};

#endif //VALJAK_HPP_INCLUDED