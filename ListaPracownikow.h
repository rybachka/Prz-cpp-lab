//
// Created by Mariia Rybak on 20.01.2024.
//

#ifndef LAB_C___LISTAPRACOWNIKOW_H
#define LAB_C___LISTAPRACOWNIKOW_H
#include "Pracownik.h"
#include <fstream>
using namespace std;

class ListaPracownikow {
private:
    Pracownik * m_pPoczatek;
    int m_nLiczbaPracownikow;
public:
    ListaPracownikow();
    void Dodaj(const Pracownik & p);
    void Usun(const Pracownik & wzorzec);
    ~ListaPracownikow();
    void WypiszPracownikow() const;
    const Pracownik * Szukaj(const char * nazwisko, const char* imie);

    void ZapiszDoPliku(const char * nazwaPliku);
    void WczytajZPliku(const char * nazwaPliku);

};


#endif //LAB_C___LISTAPRACOWNIKOW_H
