#include <iostream>
#include "klasy.h"
#include <stdlib.h>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;
int nr_linii;
int aktualny_nr=0;
string linia, tekst;
int liniacyfra;
int typ;
int cena;

void przedmiot::dodaj()
{
    fstream nstack;
    fstream stak;
    string przedmiot[250][250];
    int tablica, i=0, j=0;
    stak.open("stak.txt", ios::out | ios::in);
    nstack.open("nstack.txt", ios::out | ios::in);
    cout <<"Prosze podac typ przedmiotu: "<<endl;
    cout <<"1. Pojedynczy przedmiot "<<endl;
    cout <<"2. Przedmiot stackowalny "<<endl;
    cin>>typ;
        switch(typ)
        {
            /*
            case 1:
                cout <<"Wybrano pojedynczy przedmiot"<<endl;
                cout <<"Prosze podac nazwe przedmiotu"<<endl;
                cin>>nazwa;
                cout <<"Prosze podac cene"<<endl;
                cin>>cena;
                nstack<<nazwa<<endl;
                nstack<<cena<<endl;
                */
                 case 1:
                cout <<"Wybrano pojedynczy przedmiot"<<endl;
                cout <<"Prosze podac nazwe przedmiotu"<<endl;
                cin>>przedmiot[j][i];
                i++;
                cout <<"Prosze podac cene: "<<endl;
                cin>>przedmiot[j][i];
                i++;
                j++;
                cout<<"Przedmiot dodany, nazwa to: "<<endl<<przedmiot[j-1][i-2]<<"Cena to: "<<przedmiot[j-1][i-1]<<endl;
                nstack<<nazwa<<endl;
                nstack<<cena<<endl;
                break;
            case 2:
                cout <<"Wybrano przedmiot stackowalny"<<endl;
                cout <<"Prosze podac nazwe przedmiotu"<<endl;
                cin >>nazwa;
                cout <<"Prosze podac ilosc"<<endl;
                cin>>ilosc;
                cout <<"Prosze podac ilosc stackow"<<endl;
                cin>>stackow;
                cout <<"Prosze podac cene"<<endl;
                cin>>cena;
                stak<<nazwa<<endl;
                stak<<ilosc<<endl;
                stak<<stackow<<endl;
                stak<<stackow<<endl;
                break;
        }
        stak.close();
        nstack.close();
}

void przedmiot::wczytaj()
{
    int wybor;
    cout <<"Prosze podac typ przedmiotu: "<<endl;
    cout <<"1. Przedmiot pojedynczy"<<endl;
    cout <<"2. Przedmiot stackowalny"<<endl;
    cin >>typ;
    switch(wybor)
    {
    /*
    case 1:
        {
            fstream nstack;
            nstack.open("nstack.txt", ios::in);
            int nr_linii=(przedmiot)*2+1;
            int aktualny_nr=1;
            string linia;
            while(getline(nstack, linia));
            {
            if(aktualny_nr==nr_linii) nazwa=linia;
            if(aktualny_nr=nr_linii+1) cena=linia;
            }

            nstack.close();
            break;
    }
    */
    case 1:
        {
            fstream nstack;
            nstack.open("nstack.txt", ios::in);
            while(!nstack.eof())
            {
                getline(nstack, linia);
                cout <<"Nazwa to: "<<linia<<endl;
            nstack.close();
            break;
        }
        }
    case 2:
        {
            fstream stak;
            stak.open("stak.txt", ios::in);
            while(!stak.eof())
            {
                getline(stak, linia);
                cout <<"Nazwa tego przedmiotu to: "<<linia<<endl;
                cout <<"Ilosc przedmiotow w stacku to: "<<linia<<endl;
                cout <<"Ilosc stackow: "<<linia<<endl;
                cout <<"Cena: "<<linia<<endl;

            }
            stak.close();
            break;
        }
    }
}
void przedmiot::wypisz()
{
    cout <<"nazwa to: "<<nazwa<<endl;
    cout <<"cena to: "<<cena<<endl;
}
void kasa::kasa_start()
{
    cout <<"Prosze podac ilosc pieniedzy z ktora chcesz rozpoczac gre"<<endl;
    cin>>kasa;
}
void kasa::stan_konta()
{
    system("cls");
    cout <<"Twoje obecne srodki wynosza: "<<kasa<<endl<<endl<<endl;

}
void kasa::addkasa()
{
    int add;
cout <<"Prosze podac jaka ilosc funduszy chcesz dodac: "<<endl;
cin >>add;
kasa=kasa+add;
cout <<"Srodki pomyslnie dodane, teraz masz: "<<kasa<<endl;
}
void kasa::delkasa()
{
    int odejmij;
    cout <<"Wybrano opcje: Odejmij pieniadze, wpisz ilosc jaka chcesz odjac: "<<endl;
    cin >>odejmij;
    kasa=kasa-odejmij;
    cout <<"Pozostale srodki to: "<<kasa<<endl;
}
void kasa::kup()
{
    kasa=kasa-(int)cena;
    cout <<"Twoje pozostale srodki wynosza: "<<kasa<<endl;
}
/*void kasa::zakup_informacje()
{
    cout <<"Zakupiono nastepujacy produkt: "<<###<<"Za: "<<###<<<"W ilosci: "<<###<<<###<<endl<<Dziekujemy za zakup<<endl;
}
*/
