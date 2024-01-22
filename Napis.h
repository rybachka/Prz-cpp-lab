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
    Napis(const char* nap= "");
    ~Napis();
    Napis(const Napis & wzor);
    const char * Zwroc() const;
    void Ustaw(const char * nowy_napis);
    void Wypisz() const;
    void Wpisz();
    int SprawdzNapis(const char * por_napis) const;

    Napis & operator=(const Napis & wzor);
};


#endif //LAB_C___NAPIS_H
