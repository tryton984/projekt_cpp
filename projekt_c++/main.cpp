//
//  main.cpp
//  projekt_c++
//
//  Created by Joe on 03/07/2023.
//

#include <iostream>
#include <string>
#include <stdexcept>
#include <utility>
#include <vector>
#include <unistd.h>

#include "Klient.hpp"
#include "Książka.hpp"
#include "KsiążkaElektroniczna.hpp"
#include "KsiążkaDrukowana.hpp"
#include "Film.hpp"
#include "GryWideo.hpp"


int main() {
    
    std::cout << "By zrozumieć działanie programu, ważne jest by użytkownik zapoznał się z plikiem Readme" << std::endl;
    sleep(2);

    
    std::cout << "Po każdej fazie, program oczekuje na wciśnięcie klawisza enter, aby dać użytkownikowi czas na zapoznanie się z sytuacją w symulacji." << std::endl;
    sleep(2);



    std::cout << "Naciśnij enter by przejść do fazy pierwszej" << std::endl;
    std::cin.ignore();



    //Klienci

    std::cout << "Faza pierwsza: klienci" << std::endl << std::endl;
    sleep(1);

    Klient* klient1 = new Klient("Jan Kowalski", "ul. Przykładowa 123"); //Użycie konstruktora
    sleep(1);

    Klient* klient2 = new Klient("Anna Nowak", "ul. Inna 456");
    sleep(1);

    Klient* klient3 = new Klient(*klient1);     // Użycie konstruktora kopiującego
    sleep(1);
    std::cout << std::endl;
    
    std::cout << "Stworzyliśmy 3 klientów. Dwóch za pomocą konstruktora, a trzeciego za pomocą konstruktora kopiującego. Zobaczmy ich informacje:" << std::endl << std::endl;
    sleep(3);


    std::cout << "Dane klienta 1:" << std::endl;
    std::cout << "Imię: " << klient1->pobierzImie() << std::endl;
    std::cout << "Adres: " << klient1->pobierzAdres() << std::endl << std::endl;
    sleep(2);

    std::cout << "Dane klienta 2:" << std::endl;
    std::cout << "Imię: " << klient2->pobierzImie() << std::endl;
    std::cout << "Adres: " << klient2->pobierzAdres() << std::endl << std::endl;
    sleep(2);

    std::cout << "Dane klienta 3 (kopia klienta 1):" << std::endl;
    std::cout << "Imię: " << klient3->pobierzImie() << std::endl;
    std::cout << "Adres: " << klient3->pobierzAdres() << std::endl << std::endl;
    sleep(2);


    //Użycie przeciążonego operatora ==, by ocenić czy konstruktor kopiujący działa poprawnie
    std::cout << "Porównanie danych klienta oryginalnego i kopi używając przeciążonego operatora:" << std::endl;
    sleep(1);
    if (*klient1 == *klient3) {
        std::cout << "Dane klientów są identyczne." << std::endl << std::endl;
    } else {
        std::cout << "Dane klientów są różne." << std::endl << std::endl;
    }
    sleep(1);


    std::cout << "Naciśnij enter by przejść do fazy drugiej" << std::endl;
    std::cin.ignore();


    //Książki

    std::cout << "Faza druga: książki" << std::endl << std::endl;
    sleep(1);


    //Tworzenie książek drukowanych
    KsiążkaDrukowana ksiazkad1("J.R.R. Tolkien", "Władca Pierścieni: Drużyna Pierścienia", "1954");
    KsiążkaDrukowana ksiazkad2("George Orwell", "Rok 1984", "1949");
    KsiążkaDrukowana ksiazkad3("Harper Lee", "Zabić drozda", "1960");

    //Tworzenie książek elektronicznych
    KsiążkaElektroniczna ksiazkae1("Neal Stephenson", "Snow Crash", 70);
    KsiążkaElektroniczna ksiazkae2("Philip K. Dick", "Czy androidy śnią o elektrycznych owcach?", 60);
    KsiążkaElektroniczna ksiazkae3("William Gibson", "Neuromancer", 75);

    std::cout << "Stworzyliśmy 3 książki drukowane i 3 elektroniczne. Wyświetlmy ich informacje" << std::endl << std::endl;
    sleep(3);

    //używamy tej samej metody (informacje), by otrzymać różne rodzaje danych dla różnych klas (polimorfizm)
    std::cout << "Informacje o książce pierwszej:" << std::endl << std::endl;
    ksiazkad1.informacje();
    sleep(2);

    std::cout << "Informacje o książce drugiej:" << std::endl << std::endl;
    ksiazkad2.informacje();
    sleep(2);

    std::cout << "Informacje o książce trzeciej:" << std::endl << std::endl;
    ksiazkad3.informacje();
    sleep(2);

    std::cout << "Informacje o książce czwartej:" << std::endl << std::endl;
    ksiazkae1.informacje();
    sleep(2);

    std::cout << "Informacje o książce piątej:" << std::endl << std::endl;
    ksiazkae2.informacje();
    sleep(2);

    std::cout << "Informacje o książce szóstej:" << std::endl << std::endl;
    ksiazkae3.informacje();
    sleep(2);


    //Wykorzystanie funkcji zaprzyjaźnionej

    std::cout << "Teraz naładujemy czytnik elektroniczny Snow Crash, używając funkcji zaprzyjaźnionej" << std::endl << std::endl;
    sleep(2);

    std::cout << "Dane przed naładowaniem:" << std::endl << std::endl;
    sleep(1);
    ksiazkae1.informacje();

    sleep(2);
    naładujKsiążkęElektroniczną(ksiazkae1);

    std::cout << "Dane po naładowaniu:" << std::endl << std::endl;
    sleep(1);
    ksiazkae1.informacje();
    sleep(2);

    std::cout << "Naciśnij enter by przejść do fazy trzeciej" << std::endl;
    std::cin.ignore();



    //Filmy

    std::cout << "Faza trzecia: filmy" << std::endl << std::endl;
    sleep(1);


    //Dodajemy filmy do wektora
    filmy.push_back(std::make_pair("Incepcja", 2010));
    filmy.push_back(std::make_pair("Interstellar", 2014));
    filmy.push_back(std::make_pair("Matrix", 1999));
    filmy.push_back(std::make_pair("Blade Runner", 1982));
    filmy.push_back(std::make_pair("Gone with the Wind", 1939));
    filmy.push_back(std::make_pair("The Godfather", 1972));
    filmy.push_back(std::make_pair("Star Wars: Episode IV - A New Hope", 1977));
    filmy.push_back(std::make_pair("Jurassic Park", 1993));
    filmy.push_back(std::make_pair("The Lion King", 1994));
    filmy.push_back(std::make_pair("Titanic", 1997));
    filmy.push_back(std::make_pair("Avatar", 2009));
    filmy.push_back(std::make_pair("La La Land", 2016));
    filmy.push_back(std::make_pair("Parasite", 2019));
    filmy.push_back(std::make_pair("Nomadland", 2020));

    std::cout << "Do wektora filmy, który jest szablonem STL, dodaliśmy kilka filmów. Zobaczmy teraz informacje o nich" << std::endl;
    sleep(2);

    std::cout << std::endl;
    iterujPrzezFilmy(filmy);

    std::cout << std::endl << std::endl << "Możemy je też posortować używając algorytmów STL. Oto posortowane według daty premiery:" << std::endl;
    sleep(2);

    sortujFilmyPoDacie(filmy);
    std::cout << std::endl;
    iterujPrzezFilmy(filmy);

    std::cout << std::endl << std::endl << "A teraz posortowane alfabetycznie według tytułu:" << std::endl;
    sleep(2);

    sortujFilmyPoTytule(filmy);
    std::cout << std::endl;
    iterujPrzezFilmy(filmy);


    std::cout << std::endl;



    std::cout << "Naciśnij enter by przejść do fazy czwartej" << std::endl;
    std::cin.ignore();

    //Gry

    std::cout << "Faza czwarta: gry wideo" << std::endl << std::endl;
    sleep(1);

    //Dodajemy kilka gier do wektora
    gry.push_back(std::make_pair("Factorio", 2016));
    gry.push_back(std::make_pair("Watch Dogs", 2014));
    gry.push_back(std::make_pair("Red Dead Redemption", 2010));
    gry.push_back(std::make_pair("Civilization V", 2010));

    std::cout << "Posiadamy również wektor gry. Przez niego również możemy iterować, tym razem używając pętli zakresowej:" << std::endl;
    sleep(2);

    //Iterujemy używając pętli zakresowych
    iterujPrzezGry(gry);


    std::cout << std::endl << "Naciśnij enter by przejść do fazy piątej" << std::endl;
    std::cin.ignore();


    //Destruktory

    std::cout << "Faza piąta: destruktory" << std::endl << std::endl;
    sleep(1);


    //Używanie destruktorów napisanych w programie (nie automatycznych)
    std::cout << "Na koniec używamy destruktorów tam gdzie nie stanie się to automatycznie przy zakończeniu programu, by nie doszło do wycieku pamięci:" << std::endl << std::endl;

    delete klient1;
    sleep(1);
    delete klient2;
    sleep(1);
    delete klient3;
    sleep(1);


    std::cout << std::endl << "Koniec programu" << std::endl << std::endl;
    sleep(1);


    return 0;
}
