//
//  GryWideo.cpp
//  projekt_c++
//
//  Created by Joe on 05/07/2023.
//

#include "GryWideo.hpp"
#include <iostream>
#include <utility>
#include <vector>
#include <unistd.h> //dla sleep()


//Tworzymy wektor gry. Każdy jego element to para (int,string), data wydania i tytuł
std::vector<std::pair<std::string, int>> gry;

//Zakresowa pętla for do iterowania
void iterujPrzezGry(const std::vector<std::pair<std::string, int>>& gryWideo) {
    for (const auto& gra : gryWideo) {
        std::cout << "Tytuł: " << gra.first << ", Rok wydania: " << gra.second << std::endl;
        sleep(1);
    }
}
