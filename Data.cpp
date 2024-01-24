//
// Created by Mariia Rybak on 20.01.2024.
//
#include "Data.h"
Data::Data() {}
Data::Data(int d, int m, int r) {
    this->m_nDzien=d;
    this->m_nMiesiac=m;
    this->m_nRok=r;
    Koryguj();
}
void Data::Wpisz() {
    int d, m, r;
    cout<<"Wpisz dzien: ";
    cin>>d;
    cout<<"Wpisz miesiac: ";
    cin>>m;
    cout<<"Wpisz rok: ";
    cin>>r;
    Ustaw(d,m,r);
}

void Data::Ustaw(int d, int m, int r) {
    this->m_nDzien=d;
    this->m_nMiesiac=m;
    this->m_nRok=r;
    this->Koryguj();
}

void Data::Wypisz () const {cout<<Dzien()<<"-"<<Miesiac()<<"-"<<Rok()<<endl;}

int Data::Dzien() const {return m_nDzien;}
int Data::Miesiac() const {return m_nMiesiac;}
int Data::Rok() const {return m_nRok;}

void Data::Koryguj() {
    int arr[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    bool isRok = false;
    if (Rok() % 400 == 0 || (Rok() % 4 == 0 && Rok() % 100 != 0)) {
        isRok = true;
    }
    if (Miesiac() > 12) {
        m_nMiesiac = 12;
        if (Dzien() > 31) {
            m_nDzien = 31;
        }
        else if (Dzien() < 1) {
            m_nDzien = 1;
        }
    }
    else if (Miesiac() == 2 && isRok) {
        if (Dzien() > 29) {
            m_nDzien = arr[1] + 1;
        }
        else if (m_nDzien < 1) {
            m_nDzien = 1;
        }
    }
    else if (Miesiac() == 2 && !isRok) {
        if (m_nDzien > 28) {
            m_nDzien = arr[1];
        }
        else if (m_nDzien < 1) {
            m_nDzien = 1;
        }
    }
    else if (Miesiac() < 1) {
        m_nMiesiac = 1;
        if (Dzien() > arr[0]) {
            m_nDzien = arr[0];
        }
        else if (Dzien() < 1) {
            m_nDzien = 1;
        }
    }
    else {
        if (Dzien() > arr[Miesiac() - 1]) {
            m_nDzien = arr[Miesiac() - 1];
        }
        else if (Dzien() < 1) {
            m_nDzien = 1;
        }
    }
}
int Data::Porownaj(const Data& wzor) const {
    if (this->Rok() < wzor.Rok())
        return 1;
    if (this->Rok() > wzor.Rok())
        return -1;
    if (this->Rok() == wzor.Rok()) {
        if (this->Miesiac() < wzor.Miesiac())
            return 1;
        if (this->Miesiac() > wzor.Miesiac())
            return -1;
        if (this->Miesiac() == wzor.Miesiac()) {
            if (this->Dzien() > wzor.Dzien())
                return -1;
            if (this->Dzien() < wzor.Dzien())
                return 1;
            if (this->Dzien() == wzor.Dzien())
                return 0;

        }
    }
}
ostream & operator<<(ostream & wy, const Data & d){
    wy<<d.m_nDzien<<"-"<<d.m_nMiesiac<<"-"<<d.m_nRok<<endl;
    return wy;
}

istream & operator>>(istream & we, Data & d){
    int dn, m, r;
    cout<<"Wpisz dzien: ";
    we>>dn;
    cout<<"Wpisz miesiac: ";
    we>>m;
    cout<<"Wpisz rok: ";
    we>>r;
    d.Ustaw(dn, m, r);
    return we;
}



