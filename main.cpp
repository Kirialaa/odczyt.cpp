#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;
string odpowiedz[5], login, haslo, hobby, typdanych, dane;
int nr_linii=1, wybor, wybor2;
int main()
{
    fstream baza_danych;
    baza_danych.open("bazadanych.txt", ios::out);
    if( baza_danych.good() == false )
    {
        cout << "Brak podanego pliku, w przypadku wybrania opcji pierwszej plik zostanie utworzony.";
        getchar();
        exit( 1 );
    }
    cout << "1.Prosze wybrac jedna z opcji" << endl;
    cout << "2.Zapis do pliku" <<endl;
    cin >>wybor;
            switch(wybor)
            {
            case 1: cout << "Wybrales opcje zapis do pliku";
            cout << "Prosze podac login :" << endl;
            cin >>login;
            baza_danych<<login<<endl;
            cout << "Prosze podac haslo :" <<endl;
            cin >>haslo;
            baza_danych<<haslo<<endl;
            cout << "Prosze podac hobby :" <<endl;
            cin >>hobby;
            baza_danych<<hobby<<endl;
            system("cls");
            cout << "Dane zostaly poprawnie wpisane do pliku"<<endl;
            cout << "Czy chcesz dodac inne dane?"<<endl;
            cout << "1.Tak" <<endl;
            cout << "2.Nie" <<endl;
                switch(wybor2)
                {
                case 1:
                cout <<"Nazwij Typ danych"<<endl;
                cin >> typdanych;
                cout <<"Typ danych pozytywnie dodany"<<endl;
                cout << "Prosze o podanie wartosci :"<<endl;
                cin >>dane;
                baza_danych<<dane<<endl;
                break;
                case 2:
                cout <<"W takim razie zycze milego dnia "<<endl;
                break;
                }
            break;
            case 2: cout << "Wybrales opcje odczyt z pliku";
            break;
            }
    baza_danych.close();
    return 0;
}
