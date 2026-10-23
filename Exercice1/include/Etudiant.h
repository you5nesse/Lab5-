#ifndef ETUDIANT_H
#define ETUDIANT_H
#include<string>
using namespace std;
#include<universite.h>
class Etudiant
{
    private:
        string nom;
        int age;
        Universite* universite;
        static int nbEtudiants;

    public:
        Etudiant( string n,int a,Universite* u){
          nom = n;
          age = a;
          universite = u;
          nbEtudiants++;
        }
   void afficher(){
      cout << "Nom : " << nom << endl;
      cout << "Age : " << age << endl;
      if (universite != nullptr) {
            universite->afficherNom();
        }
   }

  static void afficherTotal() {
        cout << "Nombre total d'etudiants : "
             << nbEtudiants << endl;
    }


};

#endif // ETUDIANT_H
