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
    //KONSTRUKTORZY
    Data(int d, int m, int r);
    Data();

    int Dzien() const;
    int Miesiac() const;
    int Rok() const;

    void Wpisz();
    void Ustaw(int d, int m, int r);
    void Wypisz() const;
    void Koryguj();
    int Porownaj(const Data &wzor) const;

//OPERATORY
 friend ostream & operator<<(ostream & wy, const Data & d);
 friend istream & operator>>(istream & we, Data & d);


};


#endif //LAB_C___DATA_H
