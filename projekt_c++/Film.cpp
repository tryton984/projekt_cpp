//
//  Film.cpp
//  projekt_c++
//
//  Created by Joe on 05/07/2023.
//

#include "Film.hpp"
#include <iostream>
#include <utility> //dla pair
#include <vector>
#include <algorithm> // dla sort
#include <unistd.h> //dla sleep()

//Tworzymy wektor filmy. Każdy jego element to para (int,string), data wydania i tytuł
std::vector<std::pair<std::string, int>> filmy;


// Wykorzystujemy iteratory
void iterujPrzezFilmy(const std::vector<std::pair<std::string, int>>& filmy) {
    std::vector<std::pair<std::string, int>>::const_iterator it;
    
    for (it = filmy.begin(); it != filmy.end(); ++it) {
        std::cout << "Tytuł: " << it->first << ", Rok wydania: " << it->second << std::endl;
        sleep(1);
    }
}


// Wykorzystujemy algorytm sortowania STL

void sortujFilmyPoDacie(std::vector<std::pair<std::string, int>>& filmy) {
    std::sort(filmy.begin(), filmy.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });
}

void sortujFilmyPoTytule(std::vector<std::pair<std::string, int>>& filmy) {
    std::sort(filmy.begin(), filmy.end(), [](const auto& a, const auto& b) {
        return a.first < b.first;
    });
}
