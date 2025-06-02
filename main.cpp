/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*#include <iostream>
#include "Matrica.hpp"

using namespace std;

int main(){
    // Pravimo matricu m1
    Matrica m1(3, 4);
   // Dodajemo elemente
    m1.dodajElement(0, 0, 10);
    m1.dodajElement(0, 1, 20);
    m1.dodajElement(0, 2, 30);
    m1.dodajElement(0, 3, 40);

    m1.dodajElement(1, 0, 50);
    m1.dodajElement(1, 1, 60);
    m1.dodajElement(1, 2, 70);
    m1.dodajElement(1, 3, 80);

    m1.dodajElement(2, 0, 90);
    m1.dodajElement(2, 1, 11);
    m1.dodajElement(2, 2, 22);
    m1.dodajElement(2, 3, 33);

    cout << "Stampanje matrice dimenzija 3 x 4" << endl;
    cout << m1 << endl;

    cin.get(); // Pauza da vidimo ispis pre zatvaranja programa

    return 0;
}*/

#include <iostream>

using namespace std;
#include "Krug.hpp"
#include "Pravougaonik.hpp"
#include "Valjak.hpp"
#include "NoviValjak.hpp"
class A{
    public:
    A(){cout<<"KA"<<endl;}
    A(int){cout<<"KPA"<<endl;}
};
class B : public A{
    private:
    Krug k1;
    Pravougaonik k2;
    Krug k3;
    public:
    B() : A(3), k1(), k2(), k3() {cout<<"KB"<<endl;}
};



int main()
{
    /*
    Krug k1;
    cout << endl;
    cout << endl;
    cout << endl;
    Pravougaonik p1;
    cout << endl;
    cout << endl;
    cout << endl;
    NoviValjak nv1;

    
   */
   B b;
    return 0;
}






