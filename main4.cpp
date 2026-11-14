
#include <iostream>
#include <string>

using namespace std;

// Classe Utilisateur
class Utilisateur {
protected:
    int identifiant;
    string login;

public:
    Utilisateur(int id, string l)
        : identifiant(id), login(l) {}

    void afficherUtilisateur() const {
        cout << "Identifiant : " << identifiant << endl;
        cout << "Login : " << login << endl;
    }
};

// Classe Administrateur
class Administrateur : public Utilisateur {
protected:
    string droitsAcces;

public:
    Administrateur(int id, string l, string droits)
        : Utilisateur(id, l), droitsAcces(droits) {}

    void gererSysteme() const {
        cout << "L'administrateur gere le systeme." << endl;
        cout << "Droits d'acces : " << droitsAcces << endl;
    }
};

// Classe Moderateur
class Moderateur : public Utilisateur {
protected:
    int niveauModeration;

public:
    Moderateur(int id, string l, int niveau)
        : Utilisateur(id, l), niveauModeration(niveau) {}

    void modererContenu() const {
        cout << "Le moderateur modere le contenu." << endl;
        cout << "Niveau de moderation : "
             << niveauModeration << endl;
    }
};

// Classe SuperUtilisateur
class SuperUtilisateur : public Administrateur, public Moderateur {
public:
    SuperUtilisateur(int id, string l, string droits, int niveau)
        : Administrateur(id, l, droits),
          Moderateur(id, l, niveau) {}

    void afficherInformations() const {
        cout << "\n=== Informations du SuperUtilisateur ==="
             << endl;

        Administrateur::afficherUtilisateur();
        cout << "Droits d'acces : " << droitsAcces << endl;
        cout << "Niveau de moderation : "
             << niveauModeration << endl;
    }

    void effectuerActions() const {
        Administrateur::gererSysteme();
        Moderateur::modererContenu();
    }
};

int main() {
    int choix;

    cout << "===== MENU =====" << endl;
    cout << "1. Creer un SuperUtilisateur" << endl;
    cout << "2. Quitter" << endl;
    cout << "Votre choix : ";
    cin >> choix;

    if (choix == 1) {
        int id, niveau;
        string login, droits;

        cout << "\nIdentifiant : ";
        cin >> id;

        cout << "Login : ";
        cin >> login;

        cout << "Droits d'acces : ";
        cin >> droits;

        cout << "Niveau de moderation : ";
        cin >> niveau;

        SuperUtilisateur user(id, login, droits, niveau);

        user.afficherInformations();

        cout << "\n=== Actions ===" << endl;
        user.effectuerActions();

    } else if (choix == 2) {
        cout << "Fin du programme." << endl;
    } else {
        cout << "Choix invalide." << endl;
    }

    return 0;
}
