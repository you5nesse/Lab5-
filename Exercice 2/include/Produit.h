#ifndef PRODUIT_H
#define PRODUIT_H
#include <iostream>
#include <string>
using namespace std;


class Produit
{
    private:
        string nom;
        double prixHT;
        static double tauxTVA;
    public:
       Produit(string n,double ht){
       nom = n;
       prixHT = ht;
       }

    double getPrixTTC()const{
    return prixHT * (1 + tauxTVA);
    }
    void static modifierTVA(float nouveauTaux){
    tauxTVA = nouveauTaux;
    }
   void afficher() const {
    cout << "Produit : " << nom << endl;
    cout << "Prix HT : " << prixHT << " DH" << endl;
    cout << "Prix TTC : " << getPrixTTC() << " DH" << endl;
}

};

#endif // PRODUIT_H
