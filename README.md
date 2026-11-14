# tp9
exercice1

<img width="403" height="149" alt="image" src="https://github.com/user-attachments/assets/c595e554-fb2c-4378-b3e1-570492a5d56f" />

Dans cet exercice, j’ai créé deux classes de base : `Personne`, contenant les attributs nom et prénom, et `Chercheur`, contenant le domaine de recherche. J’ai ensuite créé la classe `EnseignantChercheur` qui hérite des deux classes en utilisant l’héritage multiple. J’ai ajouté un constructeur qui initialise les attributs des deux classes parentes grâce à la liste d’initialisation, ainsi qu’une méthode `afficher()` qui appelle les méthodes `afficher()` des deux classes parentes avec l’opérateur de résolution de portée `::`.

exercice2


<img width="373" height="150" alt="image" src="https://github.com/user-attachments/assets/a69a9558-a772-489c-ac0d-616399fb32f6" />

Dans cet exercice, j’ai créé deux classes `Technicien` et `Comptable`, chacune contenant un attribut `salaire` et une méthode `afficherSalaire()`. J’ai ensuite créé la classe `EmployePolyvalent` qui hérite des deux classes grâce à l’héritage multiple. J’ai ajouté un constructeur permettant d’initialiser les deux salaires et une méthode `afficherTousSalaires()` qui appelle les deux méthodes parentes. Pour résoudre l’ambiguïté entre les méthodes portant le même nom, j’ai utilisé l’opérateur de résolution de portée `::` avec les noms des classes parentes.
