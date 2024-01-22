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

    lista.Usun(p1);
    cout<<"LISTA PO USUNIECIU PRACOWNIKA №1 : "<<endl;
    lista.WypiszPracownikow();
    cout<<"------------------------------------------"<<endl;

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


}
int main() {
    TListaPracownikow();
}
