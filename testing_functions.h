#ifndef TESTING_FUNCTIONS_H
# define TESTING_FUNCTIONS_H

#endif
#include <stdio.h>
#include <string.h>

int main2();

int main2() {
  printf ("This program ran successfuly\n");
  return 0;
}

int test3();

int test3() {
  char * test2 = "test";
  // strlen returns the length of the string to be passed as an argument
  printf("%d\n", strlen(test2));
  int test = (strlen(test2));
  return test;
}
