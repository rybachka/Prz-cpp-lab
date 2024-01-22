//
// Created by Mariia Rybak on 20.01.2024.
//

#include "Pracownik.h"
Pracownik::Pracownik(const char *im, const char *naz, int dzien, int miesiac, int rok) :
        m_Imie(im), m_Nazwisko(naz), m_DataUrodzenia(Data(dzien, miesiac, rok)), m_nIDZatrudnienia(++m_nLiczbaPracownikow)
{
//    this->m_Imie=im;
//    this->m_Nazwisko=naz;
}
Pracownik::Pracownik(const Pracownik& wzor) : m_nIDZatrudnienia(++m_nLiczbaPracownikow) {
    m_Imie.Ustaw(wzor.Imie());
    m_Nazwisko.Ustaw(wzor.Nazwisko());
    m_DataUrodzenia.Ustaw(wzor.m_DataUrodzenia.Dzien(), wzor.m_DataUrodzenia.Miesiac(), wzor.m_DataUrodzenia.Rok());
}

Pracownik & Pracownik::operator=(const Pracownik& wzor){
    if(this!=&wzor){
        m_Imie.Ustaw(wzor.Imie());
        m_Nazwisko.Ustaw(wzor.Nazwisko());
        m_DataUrodzenia.Ustaw(wzor.m_DataUrodzenia.Dzien(), wzor.m_DataUrodzenia.Miesiac(), wzor.m_DataUrodzenia.Rok());
    }
    return *this;
}
const char* Pracownik::Imie ()const{return m_Imie.Zwroc();}
const char* Pracownik::Nazwisko() const {return m_Nazwisko.Zwroc();}

void Pracownik::Imie(const char* nowe_imie){m_Imie.Ustaw(nowe_imie);}
void Pracownik::Nazwisko(const char* nowe_nazwisko) {m_Nazwisko.Ustaw(nowe_nazwisko);}
void Pracownik::DataUrodzenia(int nowy_dzien, int nowy_miesiac, int nowy_rok) {m_DataUrodzenia.Ustaw(nowy_dzien, nowy_miesiac, nowy_rok);}

void Pracownik::Wypisz() const {
    cout<<"Imie: ";
    m_Imie.Wypisz();
    cout<<"Nazwisko: ";
    m_Nazwisko.Wypisz();
    cout<<"Data urodzenia: ";
    m_DataUrodzenia.Wypisz();
}

void Pracownik::Wpisz(){
    cout<<"Imie: ";
    m_Imie.Wpisz();
    cout<<"Nazwisko: ";
    m_Nazwisko.Wpisz();
    cout<<"Data urodzenia: "<<endl;
    m_DataUrodzenia.Wpisz();
}

int Pracownik::SprawdzImie(const char *por_imie) const {
    return m_Imie.SprawdzNapis(por_imie);
}
int Pracownik::SprawdzNazwisko(const char *por_nazwisko) const {
    return m_Nazwisko.SprawdzNapis(por_nazwisko);
}

int Pracownik::Porownaj(const Pracownik &wzorec) const {
    int porownanieImie = this->m_Imie.SprawdzNapis(wzorec.Imie());
    int porownanieNazwisko = this->m_Nazwisko.SprawdzNapis(wzorec.Nazwisko());
    int porownanieData = this->m_DataUrodzenia.Porownaj(wzorec.m_DataUrodzenia);
    if (porownanieNazwisko != 0)
        return porownanieNazwisko;
    if (porownanieImie != 0)
        return porownanieImie;
    return porownanieData;
}