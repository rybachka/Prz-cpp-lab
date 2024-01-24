//
// Created by Mariia Rybak on 20.01.2024.
//

#include "ListaPracownikow.h"
ListaPracownikow::ListaPracownikow() {
    this->m_nLiczbaPracownikow=0;
    this->m_pPoczatek= nullptr;
}
ListaPracownikow::~ListaPracownikow() {
    if (m_pPoczatek == nullptr) return;

    Pracownik* obecny = m_pPoczatek;
    Pracownik* popszedni = nullptr;

    while (obecny != nullptr) {
        popszedni= obecny;
        obecny= obecny->m_pNastepny;
        delete popszedni;
    }
}

void ListaPracownikow::Dodaj(const Pracownik &p){

    if(this->Szukaj(p.Nazwisko(), p.Imie())!= nullptr)
        return;
    Pracownik * nowy = new Pracownik(p);
    Pracownik *obecny=m_pPoczatek;
    Pracownik *popszedni= nullptr;

    while(obecny!= nullptr && obecny->Porownaj(*nowy)<0){
        popszedni=obecny;
        obecny=obecny->m_pNastepny;
    }
    if(popszedni== nullptr){
        nowy->m_pNastepny=m_pPoczatek;
        m_pPoczatek=nowy;
    }else{
        popszedni->m_pNastepny=nowy;
        nowy->m_pNastepny=obecny;
    }
    m_nLiczbaPracownikow++;
}

const Pracownik * ListaPracownikow::Szukaj(const char * nazwisko, const char* imie){
    Pracownik * pierwszy=this->m_pPoczatek;
    while(pierwszy!= nullptr){
        int SprawdzImie=pierwszy->SprawdzImie(imie);
        int SprawdzNazwisko=pierwszy->SprawdzNazwisko(nazwisko);
        if(SprawdzImie==0 && SprawdzNazwisko==0) {
            cout << "Pracownik "<<imie<<" "<<nazwisko<<" jest w liscie "<<endl;
            return pierwszy;
        }
        pierwszy=pierwszy->m_pNastepny;
    }
    cout << "Pracownika "<<imie<<" "<<nazwisko<<" nie ma w liscie "<<endl;
    return nullptr;
}

void ListaPracownikow::WypiszPracownikow() const {
    Pracownik * p= this->m_pPoczatek;
    while(p!= nullptr){
        p->Wypisz();
        p=p->m_pNastepny;
    }
    cout<<endl;
}
void ListaPracownikow::Usun(const Pracownik &wzorzec) {
    if (this->Szukaj(wzorzec.Nazwisko(), wzorzec.Imie()) == nullptr){
        cout<<"Pracownika nie istnieje";
        return;
    }
    Pracownik * obecny=m_pPoczatek;
    Pracownik * popszedni= nullptr;
    while(obecny!= nullptr && obecny->Porownaj(wzorzec)!=0){
        popszedni=obecny;
        obecny=obecny->m_pNastepny;
    }
    if(popszedni!= nullptr && obecny!= nullptr){
        popszedni->m_pNastepny=obecny->m_pNastepny;
        delete obecny;
        cout<<"Pracownik usunienty"<<endl;
    }
    if(popszedni== nullptr && obecny!= nullptr){
        m_pPoczatek=obecny->m_pNastepny;
        delete obecny;
        cout<<"Pracownik usuniety"<<endl;
    }
}

void ListaPracownikow::ZapiszDoPliku(const char *nazwaPliku) {
    ofstream wePlik(nazwaPliku);
    if(!wePlik.is_open()){
        cout<<"Program nie moze otworzyc pliku"<<endl;
        return;
    }

    Pracownik * obecny = m_pPoczatek;
    while(obecny!= nullptr){
        wePlik<<(* obecny)<<endl;
        obecny=obecny->m_pNastepny;
    }
    cout<<"Zapisano"<<endl;
    wePlik.close();
}

void ListaPracownikow::WczytajZPliku(const char *nazwaPliku) {
    ifstream wyPlik(nazwaPliku);
    if (!wyPlik.is_open()){
        cout<<"Program nie moze otworzyc pliku"<<endl;
        return;
    }
    char line[1000];
    while(wyPlik.getline(line, sizeof (line))){
        cout<<line<<endl;
    }
    cout<<"Wczytano"<<endl;
    wyPlik.close();
}