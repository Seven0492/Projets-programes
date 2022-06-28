/*
int               (4 bytes) | %d for printing
double            (8 bytes) | %lf for printing
float             (4 bytes) | %f for printing
char              (1 byte)  | %c for printing
*/

# include <stdio.h>

void main() {

  int age = 10;
  printf("age(%d)", age);

  double number1 = 12.45;
  float number2 = 10.9f;

  printf("\nnumber1(%.2lf)", number1);
  printf("\nnumber2(%.1f)", number2);

  double number3 = 5.5e6;
  printf("\nnumber3(%.3lf)", number3);
}
