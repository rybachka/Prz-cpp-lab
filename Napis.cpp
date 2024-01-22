//
// Created by Mariia Rybak on 20.01.2024.
//

#include "Napis.h"

Napis::Napis(const char *nap) {
    m_nD1= strlen(nap)+1;
    m_pszNapis=new char[this->m_nD1];
    strncpy(m_pszNapis, nap, m_nD1);
}
Napis::Napis(const Napis & wzor) {
    m_nD1= strlen(wzor.Zwroc())+1;
    m_pszNapis=new char[m_nD1];
    strncpy(m_pszNapis, wzor.Zwroc(), m_nD1);

}

Napis::~Napis(){
    delete[] m_pszNapis;
    m_pszNapis= nullptr;//zeby nikt nie skorzystal juz z usunietego wskaznika
}

Napis& Napis::operator=(const Napis &wzor) {
    if(this!=&wzor){
        delete[] this->m_pszNapis;
        m_nD1= strlen(wzor.Zwroc())+1;
        m_pszNapis=new char[m_nD1];
        strncpy(this->m_pszNapis, wzor.Zwroc(), m_nD1);

    }
    return *this;
}

void Napis::Wpisz() {
   // cout<<"Wpisz napis: "<<endl;

   const int maxRozmiar=5000;
   char napis[maxRozmiar];
   cin>>napis;
   m_nD1= strlen(napis)+1;
   m_pszNapis=new char[m_nD1];
   strncpy(m_pszNapis, napis, m_nD1);

}
void Napis::Wypisz() const {cout<<this->m_pszNapis<<endl;}

void Napis::Ustaw(const char *nowy_napis) {
//    if (sizeof(m_pszNapis) < strlen(nowy_napis)) {
//        cerr << "TWOJ NAPIS JEST WIEKSZY NIZ MOZE BYC" << endl;
//        return;
//    }
    m_nD1= strlen(nowy_napis)+1;
    m_pszNapis=new char[m_nD1];
    strncpy(this->m_pszNapis, nowy_napis, m_nD1);
}
const char * Napis::Zwroc() const {return  m_pszNapis;}

int Napis::SprawdzNapis(const char *por_napis) const {return strcmp(this->Zwroc(), por_napis);}