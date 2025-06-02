#include "Matrica.hpp"
// prazan konstruktor
Matrica::Matrica(){
    redova = 0;
    kolona = 0;
    p = NULL;
}

Matrica::Matrica(int r, int k){
    redova = r;
    kolona = k;
    p = new int*[redova];     // dinamički alociramo prostor za prvu dimenziju i to su nam pokazivači i u njima adrese
    for(int i = 0; i < redova; ++i){
        p[i] = new int[kolona];      // ovde sada idu sadržaji tipa int
    }
}
Matrica::~Matrica(){
    for(int i = 0; i < redova; ++i){
        delete[] p[i];                         //prvo brišemo nizove integera (elementi druge dimenzije)
    }
    delete[] p;             // ovde brišemo niz pokazivača
}
// Metoda za dodavanje elemenata
bool Matrica::dodajElement(int r, int k, int sadrzaj){
    bool uspesno = false;                           // false će ostati ako ne postoji ćelija u preseku nekog reda i neke kolone
    if(r >= 0 && r < redova && k >= 0 && k < kolona){
        p[r][k] = sadrzaj;          //sadržaj ili nova vrednost koju postavljamo tom elementu kome pristupamo
        uspesno = true;
    }
    return uspesno;
}
// Preklapanje operatora ispisa kao prijateljske f-je
ostream& operator<<(ostream &out, const Matrica &m){
    for(int i = 0; i < m.redova; ++i){        // prolazimo kroz prvu dimenziju , ćelije redova
        for(int j = 0; j < m.kolona; ++j){            // prolazimo kroz drugu dimenziju , ćelije kolona
            out << setw(3) << m.p[i][j] << " ";   //setw(3), onda  pristupamo pokazivaču p i čitamo sadržaj ćelije koja se nalazi u preseku i-tog reda i j-te kolone,   setw()- za sadržaj posle nje se rezerviše 3 mesta _ _ _
        }
        out << endl;    // premeštamo se u novi red
    }
    return out;
}
