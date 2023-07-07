//
//  KsiążkaElektroniczna.cpp
//  projekt_c++
//
//  Created by Joe on 04/07/2023.
//

#include "KsiążkaElektroniczna.hpp"
#include <iostream>

//Konstruktor
KsiążkaElektroniczna::KsiążkaElektroniczna(std::string autor, std::string tytuł, int poziomBaterii)
    : Książka(autor, tytuł), poziomBaterii_(poziomBaterii) {}

//Destruktor
KsiążkaElektroniczna::~KsiążkaElektroniczna() {}


// Pobierz poziom baterii
int KsiążkaElektroniczna::pobierzPoziomBaterii() const {
    return poziomBaterii_;
}


// Ustawianie poziomu baterii
void KsiążkaElektroniczna::ustawPoziomBaterii(int poziomBaterii) {
    poziomBaterii_ = poziomBaterii;
}


// Wyświetlanie informacji o książce
void KsiążkaElektroniczna::informacje() const {
    std::cout << "Autor: " << pobierzAutora() << std::endl;
    std::cout << "Tytuł: " << pobierzTytuł() << std::endl;
    std::cout << "Poziom baterii: " << poziomBaterii_ << std::endl << std::endl;
}
