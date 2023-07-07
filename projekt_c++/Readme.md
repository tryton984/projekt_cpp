Autor: Jakub Hudzik

Opis projektu:

    Mój projekt c++ symuluje bazę danych systemu bibliotecznego. Zawiera informacje o klientach biblioteki, oraz znajdujących się w niej książkach, filmach i grach wideo. Program jest symulacją, nie przyjmuje więc danych od użytkownika w trakcie działania. Parametry należy ustalić w pliku main.cpp, przed uruchomieniem (lub można użyć domyślnych, przykładowych danych). Komentarze zawarte w kodzie źródłowym mogą pomóc w zrozumieniu działania programu, zarówno te w pliku main.cpp, jak i te zawarte w plikach nagłówkowych i ich plikach źródłowych.

Zagadnienia projektu:

    1. Projekt obiektowy:
    
    klasy – W moim projekcie są klasy klient, książka, książka drukowana oraz książka elektroniczna
    
    konstruktory, destruktory – Wszystkie klasy posiadają zaimplementowane manualnie konstruktory i destruktory
    
    konstruktor kopiujacy – Klasa klient posiada również zaimplementowany konstruktor kopiujący, ułatwiając wprowadzenie danych ludzi, którzy na przykład mieszkają pod tym samym adresem
    
    deklaracja przyjaciela – Funkcja naładujKsiążkęElektroniczną jest funkcją przyjazną dla klasy Książka elektroniczna, pozwalając jej na dostęp do elementów tej klasy, które są prywatne.
    
    dziedziczenie – Klasy Książka elektroniczna oraz Książka drukowana obie dziedziczą z klasy wirtualnej Książka.
    
    polimorfizm – Wirtualna metoda Informacje, należąca do klasy Książka, może być wywoływana dla Książki Elektronicznej oraz Książki Drukowanej, w obu wypadkach wypisując ważne dla nich informacje przy użyciu polimorfizmu.
    
    klasa abstrakcyjna – Książka jest klasą abstrakcyjną, służącą jedynie jako baza dla książek elektronicznych oraz książek drukowanych
    
    czysto wirtualne metody – Metoda Informacje w klasie Książka jest metodą czysto wirtualną, zaimplementowaną w dwóch klasach dziedziczących z niej

    2. STL
    
    szablony (np. vector , array) – Wykorzystałem dwa wektory par jako kontenery, pierwszy dla posiadanych przez bibliotekę filmów a drugi dla gier komputerowych
    
    iteratory – Wykorzystałem iteratory w wektorze Filmy, aby móc przez ten wektor iterować i wypisać informacje o posiadanych filmach, oraz do pomocy przy sortowaniu filmów (po dacie wydania lub po tytule). Do wypisania informacji o grach użyłem natomiast słowa kluczowego "auto"
    
    algorytmy – Wykorzystałem algorytm sortowania STL do sortowania Filmów

    3. C++
    
    zakresowa petla for – Wykorzystałem zakresową pętle for, ze słowem kluczowym "auto", do wypisywania informacji o posiadanych przez bibliotekę grach wideo.
    
    przeciazanie operatorów – Przeciążyłem operator == aby służył do porównywania danych klientów. Dzięki temu łatwiej wyłapać powtarzające się informacje. Pozwala to również potwierdzić, że konstruktor kopiujący rzeczywiście spełnia swoje zadanie i poprawnie kopiuje dane.
    
    wyjatki – Zademonstrowałem użycie wyjątków w kodzie w klasie klient. Próbując ustawić adres lub imię klienta na wartość pustą, pojawia się błąd.
    
    plik .h z deklaracja i .cpp z definicja metod – Każda klasa, wektor, oraz funkcja nie związana z nimi, posiadają własne pliki nagłówkowe i pliki źródłowe
