//
//  naładujKsiążkęElektroniczną.cpp
//  projekt_c++
//
//  Created by Joe on 04/07/2023.
//

#include "naładujKsiążkęElektroniczną.hpp"

//Funkcja zaprzyjaźniona do ładowania czytników elektronicznych
void naładujKsiążkęElektroniczną(KsiążkaElektroniczna& książka) {
    książka.poziomBaterii_ += 10;

    if (książka.poziomBaterii_ > 100) {
        książka.poziomBaterii_ = 100;
    }
}
