# MORE FUNCTIONS NESTED LOOPS


## 📑 DESCRIPTION

les boucles (loops) et les fonctions sont deux éléments clés pour la création de programmes.

Les boucles en C permettent de répéter une ou plusieurs instructions un certain nombre de fois. Il existe trois types de boucles en C: la boucle while, la boucle for, et la boucle do-while.

La boucle while s'exécute tant que la condition donnée est vraie:

    while(condition){
      // instructions à exécuter
    }
La boucle for utilise une syntaxe particulière, en spécifiant une initialisation, une condition d'arrêt, et une mise à jour de l'indice de boucle à chaque itération:


    for(initialisation; condition; mise_à_jour){
      // instructions à exécuter
    }
Enfin, la boucle do-while est similaire à la boucle while, mais exécute d'abord les instructions, puis vérifie la condition:

    do{
      // instructions à exécuter
    } while(condition);
Les fonctions en C sont des blocs de code qui effectuent une tâche spécifique. Elles permettent de réutiliser du code et de rendre le programme plus modulaire. Les fonctions en C sont définies avec un nom, un type de retour (void si aucune valeur de retour n'est attendue), et une liste d'arguments éventuels:

    type_de_retour nom_de_la_fonction(type_argument argument1, type_argument argument2, ...){
      // instructions à exécuter
      return valeur_de_retour; // (si type_de_retour != void)
    }
Une fois définie, une fonction peut être appelée à tout moment dans le programme en utilisant son nom et en fournissant les arguments nécessaires:

    valeur_retour = nom_de_la_fonction(argument1, argument2, ...);
Les fonctions permettent une meilleure organisation du code, une réutilisation de code et une abstraction de la complexité. Elles peuvent également rendre le code plus facile à comprendre et à maintenir en divisant le programme en blocs logiques plus petits.
----------------------
## 🔧 STACKS

    LANGAGE C

----------------------
## 💻 SUIVANT

  - 🗒 [Pointers arrays strings](https://github.com/RedginaldGodeau/holbertonschool-low_level_programming/tree/main/pointers_arrays_strings)
----------------------
## 👦 Authors

- [@Redginald Godeau](https://github.com/RedginaldGodeau)
