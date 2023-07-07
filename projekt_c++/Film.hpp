//
//  Film.hpp
//  projekt_c++
//
//  Created by Joe on 05/07/2023.
//

#ifndef Film_hpp
#define Film_hpp

#include <stdio.h>


#include <string>
#include <vector>
#include <utility>

extern std::vector<std::pair<std::string, int>> filmy;

void iterujPrzezFilmy(const std::vector<std::pair<std::string, int>>& filmy);
void sortujFilmyPoDacie(std::vector<std::pair<std::string, int>>& filmy);
void sortujFilmyPoTytule(std::vector<std::pair<std::string, int>>& filmy);


#endif /* Film_hpp */
