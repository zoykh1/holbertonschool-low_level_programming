<img align="center" width="35%" src="https://cdn.prod.website-files.com/64107f65f30b69371e3d6bfa/65c6179aa44b63fa4f31e7ad_Holberton-Logo-Cherry.svg">



# Projet : Listes Chaînées Simples en C

---

## Description

Ce projet est une introduction aux listes chaînées simples en langage C, faisant partie du programme de bas niveau à **Holberton School**. Le but est d'apprendre à manipuler des structures de données dynamiques et à gérer la mémoire efficacement.

---

## Objectifs d'Apprentissage

- **Comprendre** les concepts de structures de données dynamiques.
- **Implémenter** des listes chaînées simples.
- **Pratiquer** l'allocation et la libération dynamique de mémoire.
- **Renforcer** les compétences en manipulation de pointeurs.

---

## Tâches

1. **Imprimer une Liste**
   - **Fonction** : `size_t print_list(const list_t *h);`
   - **Description** : Affiche tous les éléments d'une liste chaînée.

2. **Longueur de la Liste**
   - **Fonction** : `size_t list_len(const list_t *h);`
   - **Description** : Retourne le nombre d'éléments dans une liste.

3. **Ajouter un Nœud au Début**
   - **Fonction** : `list_t *add_node(list_t **head, const char *str);`
   - **Description** : Ajoute un nouveau nœud au début de la liste.

4. **Ajouter un Nœud à la Fin**
   - **Fonction** : `list_t *add_node_end(list_t **head, const char *str);`
   - **Description** : Ajoute un nouveau nœud à la fin de la liste.

5. **Libérer la Liste**
   - **Fonction** : `void free_list(list_t *head);`
   - **Description** : Libère la mémoire occupée par tous les nœuds de la liste.

---

## Structure de Données

```c
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

Compilation
Tous les fichiers sont compilés sur Ubuntu 20.04 LTS avec gcc en utilisant les options suivantes :
bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89

Auteur
[Votre Nom]
Étudiant à Holberton School
Ressources
Tutoriel sur les listes chaînées
Documentation de la bibliothèque standard C
© 2024 Holberton School. Tous droits réservés.
text
