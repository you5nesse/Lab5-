#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include<string>
using namespace std;
class Utilisateur
{
    private:
        string nom;
        string role;
        int static nbUtilisateursConnectes;

    public:
        Utilisateur( string n,string r){
         nom = n;
         role = r;
         nbUtilisateursConnectes++;
        }
        ~Utilisateur(){
        nbUtilisateursConnectes--;
        }
      int static getNbUtilisateursConnectes(){
        return nbUtilisateursConnectes;
      }

};

#endif // UTILISATEUR_H
