#include <iostream>

using namespace std;

class przedmiot
{
public:
    string nazwa;
    int typ;
    int ilosc;
    int stackow;
    string cena;
    string przedmiot;

    void dodaj();
    void wczytaj();
    void wypisz();
};
class kasa
{
public:
    int kasa;

    void kasa_start();
    void addkasa();
    void delkasa();
    void stan_konta();
    void kup();
    void zakup_informacje();
};
