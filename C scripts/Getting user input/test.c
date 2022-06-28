 // Juste pour tester scanf

#include <stdio.h>

void main() {

  int age;

  printf("Type in your age please: ");

  scanf("%d", &age);

  if (age < 100) {

    printf("\nYou are %d years old, I believe ;P", age);

  } else if (age == 100) {

    printf("\nYou are %d years old! Congratulations!", age);

  } else if (age <= 120) {

    printf("\nYou are %d years old! My condolences, I pay respect to your long but finite longevity...");

  } else if (age > 120) {

    printf("\nYou are... %d years old? Seriously?", age);

  }

}
