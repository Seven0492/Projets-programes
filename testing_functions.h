// If you don't know what ifndef does, browse this https://www.educba.com/sharp-ifndef-in-c/
#ifndef TESTING_FUNCTIONS_H
# define TESTING_FUNCTIONS_H

int main2();

int main2() {
  return 0;
}

int test3();

int test3() {
  char * test2 = "test";
  // strlen returns the length of the string to be passed as an argument
  // printf("%d\n", strlen(test2));
  int test = (strlen(test2));
  return test;
}

int test4();

int test4() {
  int i;

  // If i is less than 10, then do i + 1, and do anything in the loop, after that its just repeating until the condition (i < 10) is false.
  for (i = 0; i < 10; i++) {
    // printf ("%d\n", i);
  }
  return i;
}

int test5();

int test5() {
  int n;
  while (1) {
    n++;
    if (n == 10 || n >= 10) {
      break;
    }
  }
  return n;
}

int test6();

int test6() {
  int n;
  for (n = 0; n < 8; n++) {

    /* Check if n is odd */
    if (n % 2 == 1) {
      /* Go back to the start of the for block */
      continue;
    }
    // printf ("This is an even number %d\n", n);
  }
  return n;
}

#endif
