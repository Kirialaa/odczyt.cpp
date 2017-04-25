#include <iostream>
#include "klasy.h"

using namespace std;
int wybor;
int i=1;
int main()
{
/*
    kasa k;
    k.kasa_start();
*/
    przedmiot p;
    for(;;)
    {
    cout << "Wybierz opcje" << endl;
    cout <<"1. Dodaj przedmiot"<<endl;
    cout <<"2. Wczytaj liste przedmiotow"<<endl;
    cout <<"3. Stan konta"<<endl;
    cout <<"4.Dodaj pieniadze"<<endl;
    cout <<"5.Odejmij pieniadze"<<endl;
    cout <<"6.symulacja zakupu"<<endl;
    cin >>wybor;
    switch(wybor)
    {
        case 1:
        p.dodaj();
        i++;
        break;
        case 2:
        p.wczytaj();
        p.wypisz();
        break;
/*
        case 3:
        k.stan_konta();
        break;

        case 4:
        k.addkasa();
        break;
        case 5:
        k.delkasa();
        case 6:
        k.kup();
        break;
        */

    }
    }
    cout <<"Koniec programu"<<endl;

    return 0;
}
