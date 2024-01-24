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

void Napis::Wpisz() {
   // cout<<"Wpisz napis: "<<endl;

   const int maxRozmiar=5000;
   char napis[maxRozmiar];
   cin>>napis;
   m_nD1= strlen(napis)+1;
   m_pszNapis=new char[m_nD1];
   strncpy(m_pszNapis, napis, m_nD1);

}

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

void Napis::Wypisz() const {cout<<this->m_pszNapis<<endl;}

int Napis::SprawdzNapis(const char *por_napis) const {return strcmp(this->Zwroc(), por_napis);}

Napis& Napis::operator=(const Napis &wzor) {
    if(this!=&wzor){
        delete[] this->m_pszNapis;
        m_nD1= strlen(wzor.Zwroc())+1;
        m_pszNapis=new char[m_nD1];
        strncpy(this->m_pszNapis, wzor.Zwroc(), m_nD1);

    }
    return *this;
}

bool Napis::operator==(const Napis &wzor) const {
    if(this->SprawdzNapis(wzor.Zwroc())==0){
        cout<<"Napisy sa rowne"<<endl;
        return true;
    }
    cout<<"Napisy sa rozne"<<endl;
    return false;

}
ostream & operator<<(ostream & wy, const Napis & p){
    wy<<p.m_pszNapis<<endl;
    return wy;
}

istream & operator>>(istream & we, Napis & p){
//    const int maxRozmiar=5000;
//    char napis[maxRozmiar];
//    we>>p.m_pszNapis;
//    p.m_nD1= strlen(napis)+1;
//    p.m_pszNapis=new char[p.m_nD1];
//    strncpy(p.m_pszNapis, napis, p.m_nD1);
    p.Wpisz();
    return we;
}