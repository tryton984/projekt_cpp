//
//  Książka.cpp
//  projekt_c++
//
//  Created by Joe on 04/07/2023.
//

#include "Książka.hpp"

#include <iostream>

//Konstruktor
Książka::Książka(std::string autor, std::string tytuł)
    : autor_(std::move(autor)), tytuł_(std::move(tytuł)) {}

//Destruktor
Książka::~Książka() {}

//Pobranie i nadpisanie parametrów
std::string Książka::pobierzAutora() const {
    return autor_;
}

std::string Książka::pobierzTytuł() const {
    return tytuł_;
}

void Książka::ustawAutora(std::string autor) {
    autor_ = std::move(autor);
}

void Książka::ustawTytuł(std::string tytuł) {
    tytuł_ = std::move(tytuł);
}

//Funkcja czysto wirtualna
void Książka::informacje() const {
    std::cout << "Autor: " << autor_ << std::endl;
    std::cout << "Tytuł: " << tytuł_ << std::endl;
}
