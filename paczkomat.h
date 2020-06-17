//
// Created by slawek_mac on 17/06/2020.
//

#ifndef TEMAT6_PACZKOMAT_H
#define TEMAT6_PACZKOMAT_H
#endif //TEMAT6_PACZKOMAT_H
#include <iostream>
using namespace std;

class skrzynka{
private:
    float wysokosc;
    float szerokosc;
public:
    skrzynka(float wys, float szer){
        wysokosc = wys;
        szerokosc=szer;
    }
    bool wloz_paczke(float wys, float szer);
};

//-------------------------------------------------
class paczkomat{
private:
    static const int ile_skrzynek = 12;
    skrzynka *wsk_skrz[ile_skrzynek];
    bool zajeta [ile_skrzynek];
public:
    paczkomat(){
        for (int i = 0; i < ile_skrzynek; ++i) {
            wsk_skrz[i] = NULL;
            zajeta[i] = false;
        }
    }
    ~paczkomat(){
            for (int i = 0; i < ile_skrzynek; ++i) {
                delete[] wsk_skrz[i];
                wsk_skrz[i] = NULL;
            }
        }
};