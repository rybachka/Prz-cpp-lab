//
// Created by Mariia Rybak on 20.01.2024.
//

#ifndef LAB_C___PRACOWNIK_H
#define LAB_C___PRACOWNIK_H
#include "Napis.h"
#include "Data.h"
using namespace std;
class Pracownik {
private:
    Napis m_Imie;
    Napis m_Nazwisko;
    Data m_DataUrodzenia;
    const int m_nIDZatrudnienia;
    int m_nLiczbaPracownikow;
public:
    Pracownik *m_pNastepny;
    Pracownik(const char* im="", const char * naz="", int dzien=1, int miesiac=1, int rok=2000);
    Pracownik(const Pracownik & wzor);
    int Porownaj(const Pracownik & wzorec) const;

    const char * Imie() const;
    const char * Nazwisko() const;

    void Imie(const char * nowe_imie);
    void Nazwisko(const char * nowe_nazwisko);
    void DataUrodzenia(int nowy_dzien, int nowy_miesiac, int nowy_rok);
    void Wypisz() const;
    void Wpisz();

    int SprawdzImie(const char* por_imie) const;
    int SprawdzNazwisko(const char* por_nazwisko) const;

    Pracownik & operator=(const Pracownik & wzor);
};


#endif //LAB_C___PRACOWNIK_H
