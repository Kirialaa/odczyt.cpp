#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;
int *baza, wybor, ile, x=0, ilosc, stackow, wybor2, nr_linii=1, l, i=0;
string nazwa[500], line[500], ilvl[500], cena[500];
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
                cout <<"Prosze podac Item Level przedmiotu"<<endl;
                cin >>ilvl[i];
                cout <<"Prosze podac cene"<<endl;
                cin >>cena[i];
                cout <<"nazwa to: "<<nazwa[i]<<" ilvl to: "<<ilvl[i]<<"cena to: "<<cena[i]<<endl;
                x++;
                system("cls");
                baza_danych<<nazwa[i]<<endl;
                baza_danych<<ilvl[i]<<endl;
                baza_danych<<cena[i]<<endl;
                }while(x<ile);
                break;

                case 5:
                cout <<"Wybrano opcje itemow stackowalnych"<<endl;
                cout<<"Prosze podac nazwe przedmiotu";
                getline(cin, nazwa[i]);
            }
            }
        case 2:
            while(getline(baza_danych, line[i]))
            {
                switch(nr_linii)
                {
                case 1: nazwa[i]=line;
                case 2: ilvl[i]=line;
                case 3: cena[i]=line;
                }
                nr_linii++;
                i++
            }
            cout <<"Nazwa tego przedmiotu to: " <<nazwa[i]<<endl;
            cout <<"Item Level tego przedmiotu to: "<<ilvl[i]<<endl;
            cout <<"Cena tego przedmiotu to: "<<cena[i]<<endl;

        break;
        case 3:
            system("cls");
            cout <<""<<endl;
            break;
        case 0:
            exit(0);


            baza_danych.close();

return 0;
}
}
}
