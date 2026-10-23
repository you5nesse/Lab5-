
#include <iostream>
#include "Produit.h"
using namespace std;
int main() {
    Produit p1("Ordinateur", 5000);
    Produit p2("Telephone", 3000);
    Produit p3("Clavier", 200);

    cout << "=== TVA initiale : 20% ===" << std::endl;

    p1.afficher();
    cout << endl;

    p2.afficher();
    cout << endl;

    p3.afficher();
    cout << endl;

    // Modifier la TVA pour tous les produits : 10%
     Produit::modifierTVA(0.10f);

    cout << "\n=== Nouvelle TVA : 10% ===" << endl;

    p1.afficher();
    cout << endl;

    p2.afficher();
    cout <<endl;

    p3.afficher();

    return 0;
}
