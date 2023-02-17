# FILE IO

## 📑 DESCRIPTION

Les fonctions open et write sont utilisées pour effectuer des opérations de lecture/écriture de fichiers.

La fonction open est utilisée pour ouvrir un fichier et renvoie un descripteur de fichier (un entier) qui sera utilisé pour effectuer des opérations sur le fichier. Elle prend deux arguments: le nom du fichier à ouvrir (chaîne de caractères) et le mode d'ouverture du fichier. Le mode d'ouverture peut être O_RDONLY pour une ouverture en lecture seule, O_WRONLY pour une ouverture en écriture seule ou O_RDWR pour une ouverture en lecture/écriture. Il peut également être combiné avec d'autres drapeaux pour spécifier des options supplémentaires telles que la création du fichier s'il n'existe pas (O_CREAT) ou l'accès en lecture/écriture en mode binaire (O_BINARY).

La fonction write est utilisée pour écrire des données dans un fichier ouvert en utilisant la fonction open. Elle prend trois arguments: le descripteur de fichier, un pointeur vers les données à écrire et la taille des données à écrire. Elle renvoie le nombre d'octets écrits avec succès ou -1 en cas d'erreur.

----------------------
## 🔧 STACKS

    LANGAGE C

----------------------
## 💻 SUIVANT

  - 🗒 [Doubly linked lists](https://github.com/RedginaldGodeau/holbertonschool-low_level_programming/tree/main/doubly_linked_lists)
----------------------
## 👦 Authors

- [@Redginald Godeau](https://github.com/RedginaldGodeau)
