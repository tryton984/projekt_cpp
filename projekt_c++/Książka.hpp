//
//  Książka.hpp
//  projekt_c++
//
//  Created by Joe on 04/07/2023.
//

#ifndef Ksiazka_hpp
#define Ksiazka_hpp

#include <stdio.h>
#include <string>

class Książka {
public:
    Książka(std::string autor, std::string tytuł);
    virtual ~Książka();

    std::string pobierzAutora() const;
    std::string pobierzTytuł() const;
    void ustawAutora(std::string autor);
    void ustawTytuł(std::string tytuł);

    //Funkcja czysto wirtualna
    virtual void informacje() const = 0;
  
protected:
    std::string autor_;
    std::string tytuł_;
};


#endif /* Ksiazka_hpp */
