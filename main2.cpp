
#include <iostream>
using namespace std;

// Classe Technicien
class Technicien {
protected:
    float salaire;

public:
    Technicien(float s) {
        salaire = s;
    }

    void afficherSalaire() const {
        cout << "Salaire Technicien : " << salaire << " DH" << endl;
    }
};

// Classe Comptable
class Comptable {
protected:
    float salaire;

public:
    Comptable(float s) {
        salaire = s;
    }

    void afficherSalaire() const {
        cout << "Salaire Comptable : " << salaire << " DH" << endl;
    }
};

// Classe EmployePolyvalent
class EmployePolyvalent : public Technicien, public Comptable {
public:
    EmployePolyvalent(float salaireTech, float salaireComp)
        : Technicien(salaireTech), Comptable(salaireComp) {}

    void afficherTousSalaires() const {
        Technicien::afficherSalaire();
        Comptable::afficherSalaire();
    }
};

int main() {
    EmployePolyvalent e1(5000, 6000);

    cout << "=== Salaires de l'employe polyvalent ===" << endl;

    e1.afficherTousSalaires();

    return 0;
}
