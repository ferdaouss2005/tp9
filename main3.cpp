
#include <iostream>
#include <string>

using namespace std;

// Classe de base Vehicule
class Vehicule {
protected:
    string marque;
    string modele;

public:
    Vehicule(string ma, string mo)
        : marque(ma), modele(mo) {}
};

// Classe Thermique avec heritage virtuel
class Thermique : virtual public Vehicule {
protected:
    float consommation;

public:
    Thermique(string ma, string mo, float c)
        : Vehicule(ma, mo), consommation(c) {}
};

// Classe Electrique avec heritage virtuel
class Electrique : virtual public Vehicule {
protected:
    float autonomie;

public:
    Electrique(string ma, string mo, float a)
        : Vehicule(ma, mo), autonomie(a) {}
};

// Classe Hybride
class Hybride : public Thermique, public Electrique {
public:
    Hybride(string ma, string mo, float c, float a)
        : Vehicule(ma, mo),
          Thermique(ma, mo, c),
          Electrique(ma, mo, a) {}

    void afficherCaracteristiques() const {
        cout << "=== Caracteristiques du vehicule hybride ==="
             << endl;

        cout << "Marque : " << marque << endl;
        cout << "Modele : " << modele << endl;
        cout << "Consommation carburant : "
             << consommation << " L/100 km" << endl;
        cout << "Autonomie batterie : "
             << autonomie << " km" << endl;
    }
};

int main() {
    Hybride v1("Toyota", "Prius", 4.5, 60);

    v1.afficherCaracteristiques();

    return 0;
}
