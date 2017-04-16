#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;
int *baza, wybor, ilvl, cena, ile, x=0, ilosc, stackow, wybor2, nr_linii, l;
string nazwa;
int linia(int line)
{
    line+3;
}
int main()
{
for(;;)
{
cout <<"Witaj w symulatorze domu aukcyjnego"<<endl;
cout <<"Wybierz opcje"<<endl;
cout <<"1.Dodaj Pozycje"<<endl;
cout <<"2.Odczytaj Pozycje"<<endl;
cout <<"3.Informacje o autorze"<<endl;
cout <<"Wyjdz z programu"<<endl;
cin >> wybor;
fstream baza_danych;
baza_danych.open("bazadanych.txt", ios::app| ios::in);
    switch(wybor)
    {

        case 1:
            {

            system("cls");
            cout <<"Wybrales opcje : Dodaj Pozycje"<<endl;
            cout <<"Wybierz opcje:"<<endl;
            cout <<"1.Dodawanie itemow niestackowalnych"<<endl;
            cout <<"2.Dodawanie itemow stackowalnych"<<endl;
            cin >>wybor2;
            wybor2=wybor2+3;
            switch(wybor2)
            break;
            {
                case 4:

                cout <<"Ile przedmiotow chcesz dodac? "<<endl;
                cin >>ile;
                baza= new int[ile];
                do
                {
                cout <<"Prosze podac nazwe przedmiotu"<<endl;
                getline(cin, nazwa);
                cout <<"Prosze podac Item Level przedmiotu"<<endl;
                cin >>ilvl;
                cout <<"Prosze podac cene"<<endl;
                cin >>cena;
                cout <<"nazwa to: "<<nazwa<<" ilvl to: "<<ilvl<<"cena to: "<<cena<<endl;
                x++;
                system("cls");
                baza_danych<<nazwa<<endl;
                baza_danych<<ilvl<<endl;
                baza_danych<<cena<<endl;
                }while(x<ile);
                break;

                case 5:
                cout <<"Wybrano opcje itemow stackowalnych"<<endl;
                cout<<"Prosze podac nazwe przedmiotu";
                getline(cin, nazwa);

            }
        case 2:
            do
            {
                cout <<"Wyswietlanie"<<endl;
                getline(baza_danych, nazwa);
                getline(baza_danych, ilvl);
                cout <<"Nazwa przedmiotu: "<<nazwa<<endl;
                cout <<"Linia:" <<linia(nr_linii);
                break;
                switch(nr_linii)
                {
                case 1: cout <<"hej";
                case 2: cout <<

                }
                nr_linii++;
                break;
            }while(1<2);
            break;

        case 3:
            system("cls");
            cout <<"Program stworzony przez Dawid ,,Kirialaa'' Smaga"<<endl;
            break;
        case 0:
            exit(0);

    }
            baza_danych.close();
return 0;
}
}
}
