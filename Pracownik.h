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

    //KONSTRUKTORZE
    Pracownik(const char* im="", const char * naz="", int dzien=1, int miesiac=1, int rok=2000);//domysny
    Pracownik(const Pracownik & wzor);//kopijacy

    const char * Imie() const;
    const char * Nazwisko() const;

    void Wpisz();
    void Wypisz() const;
    void Imie(const char * nowe_imie);
    void Nazwisko(const char * nowe_nazwisko);
    void DataUrodzenia(int nowy_dzien, int nowy_miesiac, int nowy_rok);

    int Porownaj(const Pracownik & wzorec) const;
    int SprawdzImie(const char* por_imie) const;
    int SprawdzNazwisko(const char* por_nazwisko) const;

    //OPERATORY
    Pracownik & operator=(const Pracownik & wzor);
    bool operator==(const Pracownik & wzor) const;
    friend ostream & operator<<(ostream & wy, const Pracownik & p);
    friend istream & operator>>(istream & we, Pracownik & p);
};


#endif //LAB_C___PRACOWNIK_H
