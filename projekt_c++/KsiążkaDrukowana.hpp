//
//  KsiążkaDrukowana.hpp
//  projekt_c++
//
//  Created by Joe on 04/07/2023.
//

#ifndef KsiazkaDrukowana_hpp
#define KsiazkaDrukowana_hpp

#include <stdio.h>
#include <string>
#include "Książka.hpp"


class KsiążkaDrukowana : public Książka {
public:
    KsiążkaDrukowana(std::string autor, std::string tytuł, std::string dataWydania);
    ~KsiążkaDrukowana();

    std::string pobierzDataWydania() const;
    void ustawDataWydania(std::string dataWydania);

    void informacje() const override;

private:
    std::string dataWydania_;
};

#endif /* KsiazkaDrukowana_hpp */
