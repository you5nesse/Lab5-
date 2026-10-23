#ifndef BOITE_H
#define BOITE_H


class Boite
{
    private:
        double longueur;
        double largeur;
        double hauteur;
        static int nbBoites;

    public:
    Boite(double l, double lar, double h) {
        longueur = l;
        largeur = lar;
        hauteur = h;

        nbBoites++;
    }
    ~Boite() {
        nbBoites--;
    }
    static int getNombreBoites() {
        return nbBoites;
    }

};

#endif // BOITE_H
