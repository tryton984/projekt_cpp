//
//  Klient.cpp
//  projekt_c++
//
//  Created by Joe on 03/07/2023.
//

#include "Klient.hpp"

#include <iostream>
#include <string>
#include <stdexcept>


// Konstruktor
Klient::Klient(std::string imie, std::string adres) {
    if (imie.empty() || adres.empty()) {
        throw std::invalid_argument("Imię i adres nie mogą być puste"); //Przykład rzucenia wyjątku
    }
    
    imie_ = imie;
    adres_ = adres;
    std::cout << "Konstruktor stworzył instancję klienta" << std::endl;
}

// Konstruktor kopiujący
Klient::Klient(Klient& other) {
    imie_ = other.imie_;
    adres_ = other.adres_;
    std::cout << "Konstruktor kopiujący stworzył instancję klienta" << std::endl;
}
//Ten konstruktor kopiujący dokonuje płytkie kopiowanie. Jest to wystarczające dla tych danych, ponieważ nie są one alokowane dynamicznie

// Destruktor
Klient::~Klient() {
    std::cout << "Destruktor zniszczył instancję klienta" << std::endl;
}

// Metoda do odczytu imienia
std::string Klient::pobierzImie() {
    return imie_;
}

// Metoda do odczytu adresu
std::string Klient::pobierzAdres() {
    return adres_;
}

// Metoda do ustawienia imienia
void Klient::ustawImie(std::string imie) {
    if (imie.empty()) {
        throw std::invalid_argument("Imię nie może być puste");
    }
    
    imie_ = imie;
}

// Metoda do ustawienia adresu
void Klient::ustawAdres(std::string adres) {
    if (adres.empty()) {
        throw std::invalid_argument("Adres nie może być pusty");
    }
    
    adres_ = adres;
}

//przeciążenie operatora ==
bool Klient::operator==(const Klient& other) const {
    return imie_ == other.imie_ && adres_ == other.adres_;
}
