#ifndef UNIVERSITE_H
#define UNIVERSITE_H

#include <iostream>
#include <string>
using namespace std;

class Universite {
private:
    string nom;

public:
    Universite(string n) {
        nom = n;
    }

    void afficherNom() {
        cout << "Universite : " << nom << endl;
    }

    string getNom() {
        return nom;
    }
};

#endif
