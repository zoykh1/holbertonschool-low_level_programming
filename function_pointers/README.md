📚 Projet : Fonction Pointeurs
Bienvenue dans le projet Fonction Pointeurs ! Ce projet explore l'utilisation des pointeurs de fonction en C pour effectuer diverses opérations sur des données. 🚀
🎯 Objectifs
Exécuter des fonctions sur chaque élément d'un tableau.
Rechercher un entier dans un tableau à l'aide d'une fonction de comparaison.
Créer un calculateur simple qui effectue des opérations arithmétiques de base.
🛠️ Installation
Clonez le dépôt :
bash
git clone https://github.com/zoykh1/fonction_pointeurs.git

Accédez au répertoire du projet :
bash
cd fonction_pointeurs

⚙️ Utilisation
Exécuter une fonction sur chaque élément d'un tableau :
c
array_iterator(int *array, size_t size, void (*action)(int));

Rechercher un entier :
c
int_index(int *array, int size, int (*cmp)(int));

Calculateur simple :
bash
./calc num1 operator num2

Où operator peut être +, -, *, /, ou %.
📄 Exemples
Pour afficher un nom :
c
print_name("Alice", print_name_as_is);

Pour utiliser le calculateur :
bash
./calc 10 + 5 # Affiche 15

📜 Auteurs
👤 Ahmet(zoy)
💬 Contribuer
Les contributions sont les bienvenues ! N'hésitez pas à ouvrir une issue ou à soumettre une pull request.
🎉 Remerciements
Merci d'avoir consulté ce projet ! Profitez de l'exploration des pointeurs de fonction en C. 😊
