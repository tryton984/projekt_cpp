//
//  KsiążkaElektroniczna.hpp
//  projekt_c++
//
//  Created by Joe on 04/07/2023.
//

#ifndef KsiazkaElektroniczna_hpp
#define KsiazkaElektroniczna_hpp

#include "Książka.hpp"
#include <stdio.h>
#include <string>

class KsiążkaElektroniczna : public Książka {
public:
    KsiążkaElektroniczna(std::string autor, std::string tytuł, int poziomBaterii);
    ~KsiążkaElektroniczna();

    int pobierzPoziomBaterii() const;
    void ustawPoziomBaterii(int poziomBaterii);

    void informacje() const override;
    
    
    //Deklaracja funkcji zaprzyjaźnionej
    friend void naładujKsiążkęElektroniczną(KsiążkaElektroniczna& książka);

private:
    int poziomBaterii_;
};

#endif /* KsiazkaElektroniczna_hpp */
