# tp9
exercice1

<img width="403" height="149" alt="image" src="https://github.com/user-attachments/assets/c595e554-fb2c-4378-b3e1-570492a5d56f" />

Dans cet exercice, j’ai créé deux classes de base : `Personne`, contenant les attributs nom et prénom, et `Chercheur`, contenant le domaine de recherche. J’ai ensuite créé la classe `EnseignantChercheur` qui hérite des deux classes en utilisant l’héritage multiple. J’ai ajouté un constructeur qui initialise les attributs des deux classes parentes grâce à la liste d’initialisation, ainsi qu’une méthode `afficher()` qui appelle les méthodes `afficher()` des deux classes parentes avec l’opérateur de résolution de portée `::`.

exercice2


<img width="373" height="150" alt="image" src="https://github.com/user-attachments/assets/a69a9558-a772-489c-ac0d-616399fb32f6" />

Dans cet exercice, j’ai créé deux classes `Technicien` et `Comptable`, chacune contenant un attribut `salaire` et une méthode `afficherSalaire()`. J’ai ensuite créé la classe `EmployePolyvalent` qui hérite des deux classes grâce à l’héritage multiple. J’ai ajouté un constructeur permettant d’initialiser les deux salaires et une méthode `afficherTousSalaires()` qui appelle les deux méthodes parentes. Pour résoudre l’ambiguïté entre les méthodes portant le même nom, j’ai utilisé l’opérateur de résolution de portée `::` avec les noms des classes parentes.

exercice3

<img width="437" height="167" alt="image" src="https://github.com/user-attachments/assets/1df9a1ff-a6a3-41da-b0e5-f7620cc0d293" />


Dans cet exercice, j’ai créé une classe de base `Vehicule` contenant les attributs marque et modèle. J’ai ensuite créé deux classes dérivées `Thermique` et `Electrique`, qui héritent virtuellement de `Vehicule`. La classe `Hybride` hérite des deux classes afin de représenter un véhicule utilisant les deux technologies. J’ai utilisé l’héritage virtuel avec le mot-clé `virtual` pour éviter le problème du diamant (Diamond Problem) et garantir qu’un seul exemplaire de `Vehicule` existe dans la classe `Hybride`. Enfin, j’ai ajouté la méthode `afficherCaracteristiques()` pour afficher toutes les informations du véhicule.

exercice4


<img width="386" height="349" alt="image" src="https://github.com/user-attachments/assets/8b9f2de7-98fe-4b72-82f9-8dcc7bd269f6" />

Dans cet exercice, j’ai créé une classe `Utilisateur` contenant un identifiant et un login. J’ai ensuite créé deux classes dérivées `Administrateur` et `Moderateur`, chacune possédant ses propres attributs et méthodes. La classe `SuperUtilisateur` hérite des deux classes parentes et peut donc gérer le système et modérer le contenu. J’ai utilisé les constructeurs des deux classes parentes et l’opérateur de résolution de portée `::` pour éviter les ambiguïtés lors de l’appel des méthodes. Enfin, j’ai ajouté un menu interactif permettant de créer un SuperUtilisateur, de saisir ses informations et de tester ses différentes actions.
