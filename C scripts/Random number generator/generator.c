 // Génère un nombre pseudo-aléatoire de 5 chiffres, inventé par moi même, Seth Martin.

#include <stdio.h>

void main() {

  int first;
  int second;
  int third;
  int fourth;
  int fifth;


  // La seule vulnérabilité est que si quelqu'un savait se code
  // et les chiffres que tu a utilisé pour le générés,
  // ils pourrait facillement trouver le mot de passe généré.
  // Mais bons, facile, dits le pas et il y a aucun prôblème.

  printf("Je vais te générés un nombre pseudo-aléatoire");

  printf("\n\nMais il faudra que tu me donne 5 chiffres de to chois pour les générer:");

  printf("\nPremier chiffre: ");
  scanf("%1d", &first);

  printf("Second chiffre: ");
  scanf("%1d", &second);

  printf("Troisième chiffre: ");
  scanf("%1d", &third);

  printf("Quatrième chiffre: ");
  scanf("%1d", &fourth);

  printf("Cinquième chiffre: ");
  scanf("%1d", &fifth);


  // Plus il y a d'étapes plus pseudo-aléatoires c'est,
  // tu peut en rajouter si tu veut, c'est comme mélanger un rubiks cube,
  // le donner a ton amis, imprimer en 1ere dimension
  // et lui demander de le résoudre,
  // ils vont souffrir, donc c'est asser pour n'importe quoi.

  int result = first + third;
  result = result * fifth;
  result = result + fourth / 8;
  result = (result + (second * 3)) * 46;
  result = (result + fifth) * third;
  result = result / 6;

  printf("Voici le résultat long attendu: %d", result);

}
