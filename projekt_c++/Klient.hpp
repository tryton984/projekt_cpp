//
//  Klient.hpp
//  projekt_c++
//
//  Created by Joe on 03/07/2023.
//

#ifndef Klient_hpp
#define Klient_hpp

#include <stdio.h>
#include <string>

class Klient {
public:
    Klient(std::string imie, std::string adres);
    Klient(Klient& other); // Konstruktor kopiujący
    ~Klient();
    
    std::string pobierzImie();
    std::string pobierzAdres();
    void ustawImie(std::string imie);
    void ustawAdres(std::string adres);
    
    bool operator==(const Klient& other) const; //przeciążenie operatora, na przykład do sprawdzenia czy konstruktor kopiujący działa poprawnie

private:
    std::string imie_;
    std::string adres_;
};

#endif /* Klient_hpp */
