#include <iostream>
#include "Data.h"
#include "Napis.h"
#include "Pracownik.h"
#include "ListaPracownikow.h"

void TListaPracownikow(){
    Pracownik p1;
    Pracownik p2;
    Pracownik p3;
    Pracownik p4;
    ListaPracownikow lista;

    cout<<"WPISZ PRACOWNIKA №1"<<endl;
    p1.Wpisz();
    cout<<"WPISZ PRACOWNIKA №2"<<endl;
    p2.Wpisz();
    cout<<"WPISZ PRACOWNIKA №3"<<endl;
    p3.Wpisz();
    cout<<"WPISZ PRACOWNIKA №4"<<endl;
    p4.Wpisz();

    cout<<"------------------------------------------"<<endl;
    cout<<"LISTA PRZED DODANIEM PRACOWNIKOW: "<<endl;
    cout<<"------------------------------------------"<<endl;


    lista.Dodaj(p1);
    lista.Dodaj(p2);
    lista.Dodaj(p3);
    lista.Dodaj(p4);
    cout<<"LISTA PO DODANIU PRACOWNIKOW: "<<endl;
    lista.WypiszPracownikow();
    cout<<"------------------------------------------"<<endl;

    cout<<"USUNIECIE PRACOWNIKA №1 : "<<endl;
    lista.Usun(p1);
    cout<<"LISTA PO USUNIECIU PRACOWNIKA №1 : "<<endl;
    lista.WypiszPracownikow();
    cout<<"------------------------------------------"<<endl;

    cout<<"USUNIECIE PRACOWNIKA №2 : "<<endl;
    lista.Usun(p2);
    cout<<"LISTA PO USUNIECIU PRACOWNIKA №2 : "<<endl;
    lista.WypiszPracownikow();
    cout<<"------------------------------------------"<<endl;

    cout<<"SZUKAMY PRACOWNIKA NR3"<<endl;
    lista.Szukaj("Nr3", "Pracownik");
    cout<<"------------------------------------------"<<endl;

    cout<<"SZUKAMY PRACOWNIKA NR5(Ktorego nie istnieje)"<<endl;
    lista.Szukaj("Nr5", "Pracownik");
    cout<<"------------------------------------------"<<endl;

    cout<<"ZAPISYWANIE LISTY DO PLIKU"<<endl;
    lista.ZapiszDoPliku("plik.txt");
    cout<<"------------------------------------------"<<endl;

    cout<<"WCZYTANIE LISTY Z PLIKU"<<endl;
    lista.WczytajZPliku("plik.txt");
    cout<<"------------------------------------------"<<endl;

//    cout<<"LISTA PO WCZYTANIU: "<<endl;
//    lista.WypiszPracownikow();
//    cout<<"------------------------------------------"<<endl;
}

void TData(){
    Data d1;
    Data d2;

    cout<<"WPISZ DATE №1"<<endl;
    cin>>d1;
    cout<<"DATA №1"<<endl;
    cout<<d1;
    cout<<"------------------------------------------------"<<endl;

    cout<<"WPISZ DATE №2"<<endl;
    cin>>d2;
    cout<<"DATA №2"<<endl;
    cout<<d2;
    cout<<"------------------------------------------------"<<endl;

    cout<<"POROWNYWANIE DATY №1 I DATY №2"<<endl;
    cout<<d1.Porownaj(d2)<<endl;
    cout<<"------------------------------------------------"<<endl;


}
void TNapis(){
    Napis n1;
    Napis n2;
    Napis n3;

    cout<<"WPISZ NAPIS №1"<<endl;
    cin>>n1;
    cout<<"NAPIS №1"<<endl;
    cout<<n1;
    cout<<"------------------------------------------------"<<endl;

    cout<<"WPISZ NAPIS №2"<<endl;
    cin>>n2;
    cout<<"NAPIS №2"<<endl;
    cout<<n2;
    cout<<"------------------------------------------------"<<endl;

    cout<<"WPISZ NAPIS №3"<<endl;
    cin>>n3;
    cout<<"NAPIS №3"<<endl;
    cout<<n3;
    cout<<"------------------------------------------------"<<endl;

    cout<<"SPRAWDZENIE NAPISA №1 Z NAPISEM *Mariia* "<<endl;
    cout<<n1.SprawdzNapis("Mariia")<<endl;
    cout<<"------------------------------------------------"<<endl;

    cout<<"NAPIS №1 I NAPIS №2 PRZED OPERATOREM PRZYPISANIA"<<endl;
    cout<<"NAPIS №1"<<endl;
    cout<<n1;
    cout<<"NAPIS №2"<<endl;
    cout<<n2;
    cout<<"------------------------------------------------"<<endl;

    cout<<"NAPIS №1 I NAPIS №2 PO OPERATORZE PRZYPISANIA"<<endl;
    n1=n2;
    cout<<"NAPIS №1"<<endl;
    cout<<n1;
    cout<<"NAPIS №2"<<endl;
    cout<<n2;
    cout<<"------------------------------------------------"<<endl;

    cout<<"POROWNYWANIA NAPIS №1 I NAPIS №2 "<<endl;
    if(n1==n2){
        cout<<"NAPIS №1 == NAPIS №2"<<endl;
    }else{
        cout<<"NAPIS №1 !== NAPIS №2"<<endl;
    }
    cout<<"------------------------------------------------"<<endl;

    cout<<"POROWNYWANIA NAPIS №1 I NAPIS №3 "<<endl;
    if(n1==n3){
        cout<<"NAPIS №1 == NAPIS №3"<<endl;
    }else{
        cout<<"NAPIS №1 !== NAPIS №3"<<endl;
    }
    cout<<"------------------------------------------------"<<endl;
};

void TPracownik(){
    Pracownik p1;
    Pracownik p2;
    Pracownik p3;

    cout<<"WPISZ PRACOWNIKA №1"<<endl;
    cin>>p1;
    cout<<"PRACOWNIK №1"<<endl;
    cout<<p1;
    cout<<"------------------------------------------------"<<endl;

    cout<<"WPISZ PRACOWNIKA №2"<<endl;
    cin>>p2;
    cout<<"PRACOWNIK №2"<<endl;
    cout<<p2;
    cout<<"------------------------------------------------"<<endl;

    cout<<"WPISZ PRACOWNIKA №3"<<endl;
    cin>>p3;
    cout<<"PRACOWNIK №3"<<endl;
    cout<<p3;
    cout<<"------------------------------------------------"<<endl;

    cout<<"POROWNANIE  PRACOWNIKA №1 I PRACOWNIKA №2"<<endl;
    cout<<p1.Porownaj(p2)<<endl;
    cout<<"------------------------------------------------"<<endl;

    cout<<"SPRAWDZENIE IMIENI PRACOWNIKA №1 I *Mariia*"<<endl;
    cout<<p1.SprawdzImie("Mariia")<<endl;
    cout<<"------------------------------------------------"<<endl;

    cout<<"SPRAWDZENIE NAZWISKA PRACOWNIKA №3 I *Rybak*"<<endl;
    cout<<p3.SprawdzNazwisko("Rybak")<<endl;
    cout<<"------------------------------------------------"<<endl;

    cout<<"PRACOWNIK №1 I PRACOWNIK №2 PZRED OPERATOREM RSZYPISANIA"<<endl;
    cout<<"PRACOWNIK №1"<<endl;
    cout<<p1;
    cout<<"PRACOWNIK №2"<<endl;
    cout<<p2;
    cout<<"------------------------------------------------"<<endl;

    cout<<"PRACOWNIK №1 I PRACOWNIK №2 PO OPERATORZE RSZYPISANIA"<<endl;
    p1=p2;
    cout<<"PRACOWNIK №1"<<endl;
    cout<<p1;
    cout<<"PRACOWNIK №2"<<endl;
    cout<<p2;
    cout<<"------------------------------------------------"<<endl;

    cout<<"POROWNANIE  PRACOWNIKA №1 I PRACOWNIKA №2(OPERATOR ==)"<<endl;
    if(p1==p2){
        cout<<"PRACOWNIK №1 == PRACOWNIK №2"<<endl;
    }else{
        cout<<"PRACOWNIK №1 !== PRACOWNIK №2"<<endl;
    }
    cout<<"------------------------------------------------"<<endl;

    cout<<"POROWNANIE  PRACOWNIKA №1 I PRACOWNIKA №3(OPERATOR ==)"<<endl;
    if(p1==p3){
        cout<<"PRACOWNIK №1 == PRACOWNIK №2"<<endl;
    }else{
        cout<<"PRACOWNIK №1 !== PRACOWNIK №2"<<endl;
    }
    cout<<"------------------------------------------------"<<endl;

}

int main() {
   // TListaPracownikow();
    //TData();
   //TNapis();
   //TPracownik();
}
