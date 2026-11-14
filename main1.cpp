
#include <iostream>
#include <string>

using namespace std;

// Classe Personne
class Personne {
protected:
    string nom;
    string prenom;

public:
    Personne(string n, string p) {
        nom = n;
        prenom = p;
    }

    void afficher() const {
        cout << "Nom : " << nom << endl;
        cout << "Prenom : " << prenom << endl;
    }
};

// Classe Chercheur
class Chercheur {
protected:
    string domaineRecherche;

public:
    Chercheur(string domaine) {
        domaineRecherche = domaine;
    }

    void afficher() const {
        cout << "Domaine de recherche : "
             << domaineRecherche << endl;
    }
};

// Classe EnseignantChercheur
class EnseignantChercheur : public Personne, public Chercheur {
public:
    EnseignantChercheur(string n, string p, string domaine)
        : Personne(n, p), Chercheur(domaine) {}

    void afficher() const {
        cout << "=== Informations de l'enseignant chercheur ==="
             << endl;

        Personne::afficher();
        Chercheur::afficher();
    }
};

int main() {
    EnseignantChercheur e1(
        "Bennani",
        "Ahmed",
        "Intelligence Artificielle"
    );

    e1.afficher();

    return 0;
}
