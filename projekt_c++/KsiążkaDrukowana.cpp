//
//  KsiążkaDrukowana.cpp
//  projekt_c++
//
//  Created by Joe on 04/07/2023.
//

#include "KsiążkaDrukowana.hpp"
#include <iostream>


//Konstruktor
KsiążkaDrukowana::KsiążkaDrukowana(std::string autor, std::string tytuł, std::string dataWydania)
    : Książka(autor, tytuł), dataWydania_(dataWydania) {}

//Destruktor
KsiążkaDrukowana::~KsiążkaDrukowana() {}

// Pobieranie daty wydania
std::string KsiążkaDrukowana::pobierzDataWydania() const {
    return dataWydania_;
}

// Ustawianie daty wydania
void KsiążkaDrukowana::ustawDataWydania(std::string dataWydania) {
    dataWydania_ = dataWydania;
}

// Wyświetlanie informacji o książce
void KsiążkaDrukowana::informacje() const {
    std::cout << "Autor: " << pobierzAutora() << std::endl;
    std::cout << "Tytuł: " << pobierzTytuł() << std::endl;
    std::cout << "Data wydania: " << dataWydania_ << std::endl << std::endl;
}
