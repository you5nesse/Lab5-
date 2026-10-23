#include <iostream>
#include<Boite.h>
using namespace std;

int main() {
    Boite b1(10, 5, 3);
    Boite b2(8, 4, 2);
    Boite b3(6, 3, 2);
    cout << "Nombre de boites : "
         << Boite::getNombreBoites() << endl;
}
