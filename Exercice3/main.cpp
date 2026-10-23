#include <iostream>
#include<Utilisateur.h>
using namespace std;

int main() {
    cout << "Utilisateurs connectes : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    Utilisateur* u1 = new Utilisateur("Ali", "admin");
    cout << "Apres connexion de Ali : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    Utilisateur* u2 = new Utilisateur("Sara", "visiteur");
    cout << "Apres connexion de Sara : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    Utilisateur* u3 = new Utilisateur("Amine", "visiteur");
    cout << "Apres connexion de Amine : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    // Deconnexion de Sara
    delete u2;
    cout << "Apres deconnexion de Sara : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    // Deconnexion de Ali
    delete u1;
    cout << "Apres deconnexion de Ali : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    // Deconnexion de Amine
    delete u3;
    cout << "Apres deconnexion de Amine : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    return 0;
}
