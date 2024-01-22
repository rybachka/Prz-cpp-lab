//
// Created by Mariia Rybak on 20.01.2024.
//

#ifndef LAB_C___DATA_H
#define LAB_C___DATA_H

#include <iostream>
using namespace std;


class Data {
private:
    int m_nDzien=0;
    int m_nMiesiac=0;
    int m_nRok=0;

public:
    Data(int d, int m, int r);
    Data();

    void Ustaw(int d, int m, int r);
    int Dzien() const;
    int Miesiac() const;
    int Rok() const;

    void Wypisz() const;
    void Wpisz();
    void Koryguj();

    int Porownaj(const Data &wzor) const;

};


#endif //LAB_C___DATA_H
