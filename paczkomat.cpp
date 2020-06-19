//
// Created by slawek_mac on 17/06/2020.
//
#include "paczkomat.h"
void paczkomat::start_pacz(int ID_skrzynki, float wys, float szer)
{
    if(!wsk_skrz[ID_skrzynki]) wsk_skrz[ID_skrzynki] = new skrzynka(szer, wys);
    else  cout << "\tW skrzynce " << ID_skrzynki << " jest inna paczka\n";
}

void paczkomat::status_skrzynki(int ID_skrzynki, bool status)
{
    zajeta[ID_skrzynki] = status;
}

bool paczkomat::wloz(int ID_skrzynki, float wysP, float szerP)
{

        if (zajeta[ID_skrzynki]== false) {
        if (wysP < 80 && szerP < 380) {
            cout << "\tMała paczka!\n";
            zajeta[ID_skrzynki] = true;
            cout << "\tWłożona do skrzynki nr  " << ID_skrzynki << ".\n";
            return true;
        } else if (wysP < 190 && szerP < 380) {
            cout << "\tTo średnia paczka!\n";
            status_skrzynki(ID_skrzynki, true);
            return true;
        } else if (wysP < 410 && szerP < 380) {
            cout << "\tDuża paczka!\n";
            status_skrzynki(ID_skrzynki, true);
            return true;
        } else {
            cout << "\tPaczka jest za duża!\n";
            return false;
        }
    } else {
            cout << "\tW skrzynce jest paczka!\n";
        return false;
    }
}