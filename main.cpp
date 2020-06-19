#include <iostream>
#include <cstdlib>
#include "paczkomat.h"

//int main() {
int main() {
    paczkomat krakowskie;
    cout << "\nRobimy skrzynki...\n";
    krakowskie.start_pacz(0, 80, 380);
    krakowskie.start_pacz(1, 190, 380);
    krakowskie.start_pacz(1, 410, 380);
    krakowskie.status_skrzynki(0, false);
    krakowskie.status_skrzynki(1, true);
    krakowskie.wloz(0,70,300);
    krakowskie.wloz(0,70,300);


}
