//
// Created by Mariia Rybak on 20.01.2024.
//

#ifndef LAB_C___NAPIS_H
#define LAB_C___NAPIS_H
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Napis {
private:
    char * m_pszNapis;
    int m_nD1;
public:
    //KONSTRUKTORZE
    Napis(const char* nap= "");//domysny
    Napis(const Napis & wzor);//kopijacy

    //DESTRUKTOR
    ~Napis();

    const char * Zwroc() const;
    void Ustaw(const char * nowy_napis);
    void Wypisz() const;
    void Wpisz();
    int SprawdzNapis(const char * por_napis) const;

//OPERATORY
    Napis & operator=(const Napis & wzor);
    bool operator==(const Napis & wzor) const;
    friend ostream & operator<<(ostream & wy, const Napis & p);
    friend istream & operator>>(istream & we, Napis & p);
};


#endif //LAB_C___NAPIS_H
