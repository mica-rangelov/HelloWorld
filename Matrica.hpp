
#ifndef MATRICA_HPP_INCLUDED
#define MATRICA_HPP_INCLUDED

#include <iostream>
using namespace std;

#include <iomanip>     // zbog setw(3)  // konstante i f-je za manipulisanje izlaznim strimom

class Matrica{
    private:
        int **p;          //dvostruki pokazivač zato što je matrica niz nizova
        int redova, kolona;   //broj redova i kolona može biti različit, na osnovu njih vidimo koliko pokazivač možemo da pomeramo po prvoj dimenziji i koliko po drugoj
    public:
        Matrica();
        Matrica(int r, int k);        // r i k za red i kolonu
        ~Matrica();
        bool dodajElement(int r, int k, int v);         // metoda za dodavanje elemenata u matricu, u preseku kog reda i koje kolone dodajemo vrednost v
        friend ostream& operator<<(ostream &out, const Matrica &m);    //preklopljen operator ispisa
};

#endif // MATRICA_HPP_INCLUDED
